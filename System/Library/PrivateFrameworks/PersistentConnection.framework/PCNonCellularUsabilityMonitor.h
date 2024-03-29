/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersistentConnection/PersistentConnection-Structs.h>
#import <libobjc.A.dylib/PCInterfaceUsabilityMonitorProtocol.h>
#import <libobjc.A.dylib/PCInterfaceUsabilityMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CUTWeakReference, NSString, NSMutableArray;

@interface PCNonCellularUsabilityMonitor : NSObject <PCInterfaceUsabilityMonitorProtocol, PCInterfaceUsabilityMonitorDelegate> {

	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _ivarQueue;
	NSObject*<OS_dispatch_queue> _monitorDelegateQueue;
	CUTWeakReference* _delegateReference;
	NSString* _demoOverrideInterface;
	int _previousLinkQuality;
	BOOL _trackUsability;
	unsigned long long _thresholdOffTransitionCount;
	double _trackedTimeInterval;
	NSMutableArray* _interfaceMonitors;

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
-(BOOL)isInterfaceUsable;
-(NSString *)linkQualityString;
-(BOOL)isPoorLinkQuality;
-(BOOL)isInterfaceHistoricallyUsable;
-(void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2 ;
-(void)interfaceReachabilityChanged:(id)arg1 ;
-(BOOL)isNetworkingPowerExpensiveToUse;
-(BOOL)isBadLinkQuality;
-(void)_callDelegateOnIvarQueueWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isRadioHot;
-(void)setTrackedTimeInterval:(double)arg1 ;
-(void)setThresholdOffTransitionCount:(unsigned long long)arg1 ;
-(void)setTrackUsability:(BOOL)arg1 ;
-(void)_addMonitorWithInterfaceName:(id)arg1 ;
-(void)_forwardConfigurationOnIvarQueue;
-(int)_linkQualityOnIvarQueue;
-(id)initWithDelegateQueue:(id)arg1 ;
-(int)linkQuality;
-(long long)interfaceIdentifier;
-(BOOL)isInternetReachable;
-(void)dealloc;
-(void)setDelegate:(id<PCInterfaceUsabilityMonitorDelegate>)arg1 ;
-(id<PCInterfaceUsabilityMonitorDelegate>)delegate;
@end

