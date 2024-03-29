/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSServiceFacilityClient.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface SBSRemoteAlertClient : FBSServiceFacilityClient {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _handleObserverQueue;
	NSMutableDictionary* _portToHandleMap;
	NSMutableDictionary* _portToDeathSentinelMap;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                            //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> handleObserverQueue;              //@synthesize handleObserverQueue=_handleObserverQueue - In the implementation block
+(id)sharedInstance;
-(id)initWithIdentifier:(id)arg1 calloutQueue:(id)arg2 ;
-(void)handleMessage:(id)arg1 withType:(long long)arg2 ;
-(id)_queue_addHandleForToken:(id)arg1 ;
-(void)_queue_removeHandleForTokenStore:(id)arg1 withErrorCode:(long long)arg2 underlyingError:(id)arg3 ;
-(void)queue_lookupHandlesForRemoteAlertWithDefinition:(id)arg1 creatingIfNone:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)queue_newHandleForRemoteAlertWithDefinition:(id)arg1 context:(id)arg2 ;
-(void)queue_activateRemoteAlertForHandle:(id)arg1 withContext:(id)arg2 ;
-(void)queue_invalidateRemoteAlertForHandle:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)handleObserverQueue;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
@end

