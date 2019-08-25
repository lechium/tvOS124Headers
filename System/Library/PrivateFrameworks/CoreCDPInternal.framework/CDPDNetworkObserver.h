/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreCDPInternal/CoreCDPInternal-Structs.h>
@class NSLock, NSMutableDictionary, NSObject;

@interface CDPDNetworkObserver : NSObject {

	BOOL _networkIsReachable;
	NSLock* _clientsLock;
	NSMutableDictionary* _clientsByUUID;
	SCNetworkReachabilityRef _networkReach;
	NSObject*<OS_dispatch_queue> _eventQueue;

}
+(id)sharedInstance;
-(void)startObservingNetwork;
-(void)_networkReachabilityDidChangeWithFlags:(unsigned)arg1 ;
-(id)addNetworkObserverWithEventHandler:(/*^block*/id)arg1 ;
-(void)removeObserverWithToken:(id)arg1 ;
-(id)init;
@end
