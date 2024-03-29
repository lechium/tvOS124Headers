/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDDevice, NSMutableSet, HMFTimer, NSMutableArray;

@interface HMDRemoteDeviceInformation : HMFObject {

	BOOL _pinging;
	BOOL _pingConfirmed;
	BOOL _shouldConfirm;
	BOOL _reachable;
	HMDDevice* _device;
	NSMutableSet* _pendingPingIdentifiers;
	HMFTimer* _retryTimer;
	NSMutableArray* _confirmationHandlers;

}

@property (nonatomic,readonly) HMDDevice * device;                                   //@synthesize device=_device - In the implementation block
@property (assign,getter=isPinging,nonatomic) BOOL pinging;                          //@synthesize pinging=_pinging - In the implementation block
@property (assign,getter=isPingConfirmed,nonatomic) BOOL pingConfirmed;              //@synthesize pingConfirmed=_pingConfirmed - In the implementation block
@property (assign,nonatomic) BOOL shouldConfirm;                                     //@synthesize shouldConfirm=_shouldConfirm - In the implementation block
@property (nonatomic,readonly) NSMutableSet * pendingPingIdentifiers;                //@synthesize pendingPingIdentifiers=_pendingPingIdentifiers - In the implementation block
@property (assign,getter=isReachable,nonatomic) BOOL reachable;                      //@synthesize reachable=_reachable - In the implementation block
@property (nonatomic,retain) HMFTimer * retryTimer;                                  //@synthesize retryTimer=_retryTimer - In the implementation block
@property (nonatomic,readonly) NSMutableArray * confirmationHandlers;                //@synthesize confirmationHandlers=_confirmationHandlers - In the implementation block
-(BOOL)isReachable;
-(HMFTimer *)retryTimer;
-(void)setRetryTimer:(HMFTimer *)arg1 ;
-(HMDDevice *)device;
-(void)setReachable:(BOOL)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(NSMutableSet *)pendingPingIdentifiers;
-(BOOL)isPinging;
-(BOOL)isPingConfirmed;
-(BOOL)shouldConfirm;
-(NSMutableArray *)confirmationHandlers;
-(void)queueConfirmationHandler:(/*^block*/id)arg1 timeout:(double)arg2 ;
-(void)completeConfirmationsWithError:(id)arg1 ;
-(void)setPinging:(BOOL)arg1 ;
-(void)setPingConfirmed:(BOOL)arg1 ;
-(void)setShouldConfirm:(BOOL)arg1 ;
-(id)init;
-(id)description;
@end

