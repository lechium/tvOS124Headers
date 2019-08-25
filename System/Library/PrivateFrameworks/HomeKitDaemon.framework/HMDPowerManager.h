/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface HMDPowerManager : HMFObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _networkInterfaceActive;
	BOOL _networkAccessRequired;
	unsigned _powerAssertion;
	SCDynamicStoreRef _scStore;
	void* _scContext;
	BOOL _started;

}

@property (assign,getter=isNetworkAccessRequired,nonatomic) BOOL networkAccessRequired;              //@synthesize networkAccessRequired=_networkAccessRequired - In the implementation block
-(int)_ensureNetworkInterfaceMonitorStarted;
-(void)_ensureNetworkInterfaceMonitorStopped;
-(void)setNetworkAccessRequired:(BOOL)arg1 ;
-(BOOL)isNetworkAccessRequired;
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)_update;
@end

