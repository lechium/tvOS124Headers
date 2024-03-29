/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, PSSSSubscriptionManagerInternal;

@interface WLKAppLibraryCore : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;
	PSSSSubscriptionManagerInternal* _subscriptionManager;

}
+(id)sharedInstance;
-(id)_connection;
-(void)_fetchApplicationsInProcess:(/*^block*/id)arg1 ;
-(void)fetchApplications:(/*^block*/id)arg1 ;
-(id)init;
@end

