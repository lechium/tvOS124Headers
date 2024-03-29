/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFNetServiceBrowserDelegate.h>
#import <HMFoundation/HMFLogging.h>

@protocol _HMFNetServiceMonitorDelegate, OS_dispatch_queue;
@class HMFUnfairLock, HMFNetService, NSObject, HMFNetServiceBrowser, NSString;

@interface _HMFNetServiceMonitor : HMFObject <HMFNetServiceBrowserDelegate, HMFLogging> {

	HMFUnfairLock* _lock;
	BOOL _reachable;
	HMFNetService* _netService;
	id<_HMFNetServiceMonitorDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _clientQueue;
	HMFNetServiceBrowser* _netServiceBrowser;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) HMFNetServiceBrowser * netServiceBrowser;              //@synthesize netServiceBrowser=_netServiceBrowser - In the implementation block
@property (__weak) id<_HMFNetServiceMonitorDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) HMFNetService * netService;                                 //@synthesize netService=_netService - In the implementation block
@property (getter=isReachable,readonly) BOOL reachable;                               //@synthesize reachable=_reachable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)initWithNetService:(id)arg1 ;
-(void)setNetService:(HMFNetService *)arg1 ;
-(HMFNetServiceBrowser *)netServiceBrowser;
-(BOOL)isReachable;
-(id)logIdentifier;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)setReachable:(BOOL)arg1 ;
-(HMFNetService *)netService;
-(void)netServiceBrowser:(id)arg1 didAddService:(id)arg2 ;
-(void)netServiceBrowser:(id)arg1 didStopBrowsingWithError:(id)arg2 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 ;
-(id)init;
-(void)setDelegate:(id<_HMFNetServiceMonitorDelegate>)arg1 ;
-(id<_HMFNetServiceMonitorDelegate>)delegate;
@end

