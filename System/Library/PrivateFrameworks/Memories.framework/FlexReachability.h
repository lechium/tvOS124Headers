/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Memories/Memories-Structs.h>
@class NSObject;

@interface FlexReachability : NSObject {

	BOOL _isNotifying;
	BOOL localWiFiRef;
	SCNetworkReachabilityRef reachabilityRef;
	NSObject*<OS_dispatch_queue> _reachabilityQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> reachabilityQueue;              //@synthesize reachabilityQueue=_reachabilityQueue - In the implementation block
+(id)reachabilityForInternetConnection;
+(id)reachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)reachabilityWithHostName:(id)arg1 ;
+(id)reachabilityForLocalWiFi;
-(long long)currentReachabilityStatus;
-(void)stopNotifier;
-(long long)localWiFiStatusForFlags:(unsigned)arg1 ;
-(long long)networkStatusForFlags:(unsigned)arg1 ;
-(BOOL)startNotifier;
-(BOOL)connectionRequired;
-(BOOL)interventionRequired;
-(NSObject*<OS_dispatch_queue>)reachabilityQueue;
-(void)setReachabilityQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(void)dealloc;
@end
