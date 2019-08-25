/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPCExplicitContentAuthorizationDelegate;
@class NSError, ICAgeVerificationState;

@interface MPCExplicitContentAuthorizationManager : NSObject {

	id<MPCExplicitContentAuthorizationDelegate> _delegate;
	long long _status;
	NSError* _authorizationError;
	ICAgeVerificationState* _lastKnownAgeVerificationState;

}

@property (nonatomic,readonly) long long authorizationReason; 
@property (assign,nonatomic) long long status;                                                         //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) NSError * authorizationError;                                               //@synthesize authorizationError=_authorizationError - In the implementation block
@property (nonatomic,copy) ICAgeVerificationState * lastKnownAgeVerificationState;                     //@synthesize lastKnownAgeVerificationState=_lastKnownAgeVerificationState - In the implementation block
@property (assign,nonatomic,__weak) id<MPCExplicitContentAuthorizationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedManager;
-(void)_setupNotifications;
-(BOOL)isItemAuthorized:(id)arg1 shouldAskForAuthorization:(BOOL)arg2 ;
-(BOOL)isItemAuthorized:(id)arg1 ;
-(ICAgeVerificationState *)lastKnownAgeVerificationState;
-(id)_retrieveAgeVerificationState;
-(void)setLastKnownAgeVerificationState:(ICAgeVerificationState *)arg1 ;
-(void)_updateAuthorizationStatusWithAuthorizationState:(id)arg1 forItem:(id)arg2 ;
-(NSError *)authorizationError;
-(id)_explicitContentErrorWithUnderlyingError:(id)arg1 message:(id)arg2 ;
-(long long)authorizationReason;
-(BOOL)_shouldAskPlaybackAuthorizationForItem:(id)arg1 reason:(long long)arg2 ;
-(BOOL)_askPlaybackAuthorizationForItem:(id)arg1 reason:(long long)arg2 ;
-(void)_handleAgeVerificationStateDidChangeNotification:(id)arg1 ;
-(void)_setupWithAgeVerificationState:(id)arg1 ;
-(void)_setupWithAgeGateForItem:(id)arg1 ;
-(void)setAuthorizationError:(NSError *)arg1 ;
-(void)setDelegate:(id<MPCExplicitContentAuthorizationDelegate>)arg1 ;
-(id<MPCExplicitContentAuthorizationDelegate>)delegate;
-(long long)status;
-(id)_init;
-(void)setStatus:(long long)arg1 ;
@end

