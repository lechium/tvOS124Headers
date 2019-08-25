/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IdleTimerServices.framework/IdleTimerServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ITIdleTimerStateServerDelegate.h>

@protocol OS_dispatch_queue, BSInvalidatable, ITIdleTimerStateServiceDelegate;
@class ITIdleTimerStateServer, NSObject, FBSSerialQueue, NSMutableDictionary, NSString;

@interface ITIdleTimerStateService : NSObject <ITIdleTimerStateServerDelegate> {

	ITIdleTimerStateServer* _server;
	NSObject*<OS_dispatch_queue> _calloutDispatchQueue;
	FBSSerialQueue* _calloutQueue;
	NSMutableDictionary* _assertionsByReason;
	NSMutableDictionary* _assertionReasonsByClientID;
	id<BSInvalidatable> _stateCaptureAssertion;
	id<ITIdleTimerStateServiceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ITIdleTimerStateServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDispatchQueue:(id)arg1 ;
-(void)clientDidDisconnect:(id)arg1 ;
-(void)_addStateCaptureHandler;
-(BOOL)isIdleTimerServiceAvailable;
-(void)client:(id)arg1 setIdleTimerDisabled:(BOOL)arg2 forReason:(id)arg3 ;
-(id)_identifierForClient:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<ITIdleTimerStateServiceDelegate>)arg1 ;
-(id<ITIdleTimerStateServiceDelegate>)delegate;
@end

