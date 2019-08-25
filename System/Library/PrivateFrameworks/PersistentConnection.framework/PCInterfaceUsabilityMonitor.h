/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersistentConnection/PersistentConnection-Structs.h>
#import <libobjc.A.dylib/PCInterfaceUsabilityMonitorProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, CUTWeakReference, NSMutableArray;

@interface PCInterfaceUsabilityMonitor : NSObject <PCInterfaceUsabilityMonitorProtocol> {

	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _ivarQueue;
	long long _interfaceIdentifier;
	NSString* _interfaceName;
	CUTWeakReference* _delegateReference;
	void* _reachability;
	BOOL _isInternetReachable;
	void* _dynamicStore;
	CFRunLoopSourceRef _linkQualitySource;
	CFStringRef _lqKey;
	int _linkQuality;
	BOOL _trackUsability;
	unsigned long long _thresholdOffTransitionCount;
	double _trackedTimeInterval;
	NSMutableArray* _offTransitions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long interfaceIdentifier; 
@property (nonatomic,readonly) int linkQuality; 
@property (nonatomic,readonly) BOOL isInterfaceUsable; 
@property (nonatomic,readonly) BOOL isInterfaceHistoricallyUsable; 
@property (nonatomic,readonly) BOOL isInternetReachable; 
@property (nonatomic,retain,readonly) NSString * linkQualityString; 
@property (nonatomic,readonly) BOOL isPoorLinkQuality; 
@property (nonatomic,readonly) BOOL isBadLinkQuality; 
@property (nonatomic,readonly) BOOL isRadioHot; 
@property (nonatomic,readonly) BOOL isNetworkingPowerExpensiveToUse; 
@property (nonatomic,readonly) int currentRAT; 
@property (nonatomic,readonly) BOOL isLTEWithCDRX; 
@property (nonatomic,readonly) CFStringRef wwanInterfaceName; 
@property (nonatomic,readonly) NSString * networkCode; 
@property (assign,nonatomic) id<PCInterfaceUsabilityMonitorDelegate> delegate; 
+(BOOL)isBadLinkQuality:(int)arg1 ;
+(id)stringForLinkQuality:(int)arg1 ;
+(BOOL)isPoorLinkQuality:(int)arg1 ;
-(BOOL)isInterfaceUsable;
-(NSString *)linkQualityString;
-(BOOL)isPoorLinkQuality;
-(BOOL)isInterfaceHistoricallyUsable;
-(BOOL)isNetworkingPowerExpensiveToUse;
-(BOOL)isBadLinkQuality;
-(void)_createLinkQualityMonitorOnIvarQueue;
-(void)_createReachabilityMonitorOnIvarQueue;
-(void)_unscheduleLinkQualityMonitorOnIvarQueue;
-(void)_unscheduleReachabilityMonitorOnIvarQueue;
-(void)_flushStaleTransitionsOnIvarQueue;
-(BOOL)_isInterfaceUsableOnIvarQueue;
-(BOOL)_isInterfaceHistoricallyUsableOnIvarQueue;
-(void)_reachabilityCallbackOnIvarQueue:(unsigned)arg1 ;
-(void)_callDelegateOnIvarQueueWithBlock:(/*^block*/id)arg1 ;
-(void)_updateOffTransitionsForLinkQualityChangeOnIvarQueue;
-(void)_processLinkQualityUpdateOnIvarQueueWithUpdatedLinkQuality:(int)arg1 ;
-(void)_dynamicStoreCallbackOnIvarQueue:(id)arg1 ;
-(void)_dynamicStoreCallback:(id)arg1 ;
-(BOOL)isRadioHot;
-(void)setTrackedTimeInterval:(double)arg1 ;
-(void)setThresholdOffTransitionCount:(unsigned long long)arg1 ;
-(void)setTrackUsability:(BOOL)arg1 ;
-(id)initWithInterfaceName:(id)arg1 interfaceIdentifier:(long long)arg2 delegateQueue:(id)arg3 ;
-(void)_createReachabilityMonitor;
-(void)_reachabilityCallback:(unsigned)arg1 ;
-(void)_createLinkQualityMonitor;
-(int)linkQuality;
-(long long)interfaceIdentifier;
-(BOOL)isInternetReachable;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<PCInterfaceUsabilityMonitorDelegate>)arg1 ;
-(id<PCInterfaceUsabilityMonitorDelegate>)delegate;
@end

