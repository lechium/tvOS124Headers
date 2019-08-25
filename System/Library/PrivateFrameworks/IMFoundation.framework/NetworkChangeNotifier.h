/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMFoundation/IMFoundation-Structs.h>
#import <IMFoundation/IMSystemMonitorListener.h>
#import <IMFoundation/IMConnectionMonitorDelegate.h>

@class NSString, NSArray, IMConnectionMonitor;

@interface NetworkChangeNotifier : NSObject <IMSystemMonitorListener, IMConnectionMonitorDelegate> {

	BOOL _lastPostedNetworkUp;
	SCDynamicStoreRef _store;
	NSString* _myIP;
	NSArray* _myIPs;
	IMConnectionMonitor* _connectionMonitor;

}

@property (assign,nonatomic) SCDynamicStoreRef store;                              //@synthesize store=_store - In the implementation block
@property (assign,nonatomic) BOOL lastPostedNetworkUp;                             //@synthesize lastPostedNetworkUp=_lastPostedNetworkUp - In the implementation block
@property (nonatomic,retain) IMConnectionMonitor * connectionMonitor;              //@synthesize connectionMonitor=_connectionMonitor - In the implementation block
@property (nonatomic,retain) NSString * myIP;                                      //@synthesize myIP=_myIP - In the implementation block
@property (nonatomic,retain) NSArray * myIPs;                                      //@synthesize myIPs=_myIPs - In the implementation block
@property (nonatomic,readonly) BOOL isNetworkUp; 
@property (nonatomic,readonly) NSString * myGatewayAddress; 
@property (nonatomic,readonly) NSString * myIPAddress; 
@property (nonatomic,readonly) NSArray * myIPAddresses; 
@property (nonatomic,readonly) SCDynamicStoreRef getDynamicStore; 
+(void)disableNotifications;
+(BOOL)enableNotifications;
+(id)sharedInstance;
-(void)_clearIPCache;
-(BOOL)_listenForChanges;
-(int)linkQualityValueForInterface:(id)arg1 ;
-(NSArray *)myIPAddresses;
-(NSString *)myGatewayAddress;
-(NSString *)myIPAddress;
-(SCDynamicStoreRef)getDynamicStore;
-(unsigned long long)linkQualityForInterfaceType:(unsigned long long)arg1 ;
-(BOOL)isPrimaryCellular;
-(id)primaryInterfaceName;
-(NSString *)myIP;
-(void)setMyIP:(NSString *)arg1 ;
-(NSArray *)myIPs;
-(void)setMyIPs:(NSArray *)arg1 ;
-(IMConnectionMonitor *)connectionMonitor;
-(void)setConnectionMonitor:(IMConnectionMonitor *)arg1 ;
-(BOOL)lastPostedNetworkUp;
-(void)setLastPostedNetworkUp:(BOOL)arg1 ;
-(void)systemDidWake;
-(void)systemWillSleep;
-(BOOL)isNetworkUp;
-(SCDynamicStoreRef)store;
-(int)linkQualityValueForInterfaceType:(unsigned long long)arg1 ;
-(void)connectionMonitorDidUpdate:(id)arg1 ;
-(void)setStore:(SCDynamicStoreRef)arg1 ;
-(id)init;
-(void)dealloc;
@end
