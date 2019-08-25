/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, INCExtensionRequest, INIntent, NSUserActivity, INCExtensionTransactionState;

@interface INCExtensionTransaction : NSObject {

	NSMutableDictionary* _userActivitiesByIdentifier;
	INCExtensionRequest* _request;
	INIntent* _currentIntent;
	NSUserActivity* _currentUserActivity;
	INCExtensionTransactionState* _state;

}

@property (nonatomic,readonly) INIntent * currentIntent;                               //@synthesize currentIntent=_currentIntent - In the implementation block
@property (nonatomic,readonly) INCExtensionRequest * request;                          //@synthesize request=_request - In the implementation block
@property (nonatomic,copy,readonly) NSUserActivity * currentUserActivity;              //@synthesize currentUserActivity=_currentUserActivity - In the implementation block
@property (nonatomic,retain) INCExtensionTransactionState * state;                     //@synthesize state=_state - In the implementation block
+(void)initialize;
-(id)initWithIntent:(id)arg1 ;
-(void)_updateCurrentIntent:(id)arg1 ;
-(void)_updateCurrentUserActivityForType:(long long)arg1 intent:(id)arg2 intentResponse:(id)arg3 ;
-(void)_addUserActivities:(id)arg1 ;
-(id)userActivityWithIdentifier:(id)arg1 ;
-(INIntent *)currentIntent;
-(NSUserActivity *)currentUserActivity;
-(id)description;
-(INCExtensionTransactionState *)state;
-(void)setState:(INCExtensionTransactionState *)arg1 ;
-(INCExtensionRequest *)request;
@end
