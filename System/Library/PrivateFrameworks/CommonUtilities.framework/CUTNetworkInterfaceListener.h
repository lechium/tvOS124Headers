/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CommonUtilities/CommonUtilities-Structs.h>
@class NSHashTable, NSObject, NSSet;

@interface CUTNetworkInterfaceListener : NSObject {

	void* _dynamicStore;
	NSHashTable* _delegateMap;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	int _wifiState;
	int _cellState;
	NSSet* _IPv6Addresses;
	NSSet* _IPv4Addresses;

}

@property (nonatomic,readonly) int wifiState;                      //@synthesize wifiState=_wifiState - In the implementation block
@property (nonatomic,readonly) int cellState;                      //@synthesize cellState=_cellState - In the implementation block
@property (nonatomic,readonly) NSSet * IPv6Addresses;              //@synthesize IPv6Addresses=_IPv6Addresses - In the implementation block
@property (nonatomic,readonly) NSSet * IPv4Addresses;              //@synthesize IPv4Addresses=_IPv4Addresses - In the implementation block
+(id)sharedInstance;
-(void)_notifyDelegatesOfAddressChange:(id)arg1 isIPv6:(BOOL)arg2 ;
-(void)_notifyDelegatesOfCellChange:(int)arg1 ;
-(void)_notifyDelegatesOfWifiChange:(int)arg1 ;
-(void)_handleNetworkChange:(id)arg1 ;
-(NSSet *)IPv6Addresses;
-(NSSet *)IPv4Addresses;
-(int)wifiState;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(int)cellState;
-(id)init;
-(void)dealloc;
-(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

