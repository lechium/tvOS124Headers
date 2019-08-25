/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSBaseXPCClient.h>
#import <libobjc.A.dylib/FBSServiceFacilityClientMessaging.h>

@protocol FBSServiceFacilityXPCClientDelegate, OS_dispatch_queue;
@class NSObject, NSString;

@interface FBSServiceFacilityXPCClient : BSBaseXPCClient <FBSServiceFacilityClientMessaging> {

	id<FBSServiceFacilityXPCClientDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	BOOL _connectionDenied;
	BOOL _invalidated;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> calloutQueue;                   //@synthesize calloutQueue=_calloutQueue - In the implementation block
@property (nonatomic,retain) id<FBSServiceFacilityXPCClientDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithServiceName:(id)arg1 endpoint:(id)arg2 ;
-(void)queue_clientWasInvalidated;
-(void)queue_handleError:(id)arg1 ;
-(void)queue_handleMessage:(id)arg1 ;
-(void)queue_connectionWasCreated;
-(void)sendMessage:(id)arg1 withType:(long long)arg2 replyHandler:(/*^block*/id)arg3 waitForReply:(BOOL)arg4 timeout:(double)arg5 ;
-(id)initWithCalloutQueue:(id)arg1 ;
-(id)initWithCalloutQueue:(id)arg1 endpoint:(id)arg2 ;
-(void)sendMessage:(id)arg1 withType:(long long)arg2 ;
-(NSObject*<OS_dispatch_queue>)calloutQueue;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<FBSServiceFacilityXPCClientDelegate>)arg1 ;
-(id<FBSServiceFacilityXPCClientDelegate>)delegate;
@end

