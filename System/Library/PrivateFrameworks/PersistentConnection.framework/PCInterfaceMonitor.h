/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersistentConnection/PersistentConnection-Structs.h>
#import <libobjc.A.dylib/PCInterfaceUsabilityMonitorDelegate.h>
#import <libobjc.A.dylib/PCInterfaceMonitorProtocol.h>

@protocol PCInterfaceUsabilityMonitorProtocol;
@class NSString, NSMapTable;

@interface PCInterfaceMonitor : NSObject <PCInterfaceUsabilityMonitorDelegate, PCInterfaceMonitorProtocol> {

	id<PCInterfaceUsabilityMonitorProtocol> _internal;
	NSMapTable* _delegateMap;

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
+(BOOL)isNetworkingPowerExpensiveToUse;
+(BOOL)isBadLinkQuality:(int)arg1 ;
+(id)stringForLinkQuality:(int)arg1 ;
+(BOOL)isPoorLinkQuality:(int)arg1 ;
+(id)sharedInstanceForIdentifier:(long long)arg1 ;
-(BOOL)isInterfaceUsable;
-(NSString *)linkQualityString;
-(BOOL)isPoorLinkQuality;
-(BOOL)isInterfaceHistoricallyUsable;
-(void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2 ;
-(void)interfaceReachabilityChanged:(id)arg1 ;
-(void)interfaceRadioHotnessChanged:(id)arg1 ;
-(BOOL)isNetworkingPowerExpensiveToUse;
-(BOOL)isBadLinkQuality;
-(BOOL)isRadioHot;
-(int)currentRAT;
-(BOOL)isLTEWithCDRX;
-(NSString *)networkCode;
-(id)initWithInterfaceIdentifier:(long long)arg1 ;
-(int)linkQuality;
-(long long)interfaceIdentifier;
-(CFStringRef)wwanInterfaceName;
-(void)removeDelegate:(id)arg1 ;
-(BOOL)isInternetReachable;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(void)dealloc;
@end

