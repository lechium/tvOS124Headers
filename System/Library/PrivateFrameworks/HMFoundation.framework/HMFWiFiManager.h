/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFWiFiManagerDataSourceDelegate.h>

@protocol OS_dispatch_queue, HMFWiFiManagerDataSource;
@class HMFUnfairLock, NSString, HMFMACAddress, NSObject;

@interface HMFWiFiManager : HMFObject <HMFWiFiManagerDataSourceDelegate> {

	HMFUnfairLock* _lock;
	BOOL _shouldAssertWoW;
	NSString* _currentNetworkSSID;
	HMFMACAddress* _MACAddress;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<HMFWiFiManagerDataSource> _dataSource;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;               //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) id<HMFWiFiManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL shouldAssertWoW;                                   //@synthesize shouldAssertWoW=_shouldAssertWoW - In the implementation block
@property (nonatomic,copy) NSString * currentNetworkSSID;                            //@synthesize currentNetworkSSID=_currentNetworkSSID - In the implementation block
@property (copy,readonly) HMFMACAddress * MACAddress;                                //@synthesize MACAddress=_MACAddress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)dataSource:(id)arg1 didChangeLinkAvailability:(BOOL)arg2 ;
-(void)currentNetworkDidChangeForDataSource:(id)arg1 ;
-(void)dataSource:(id)arg1 didChangeWoWState:(BOOL)arg2 ;
-(void)takeWoWAssertion;
-(void)releaseWoWAssertion;
-(id)initWithWorkQueue:(id)arg1 dataSource:(id)arg2 ;
-(BOOL)shouldAssertWoW;
-(void)setShouldAssertWoW:(BOOL)arg1 ;
-(void)setCurrentNetworkSSID:(NSString *)arg1 ;
-(HMFMACAddress *)MACAddress;
-(NSString *)currentNetworkSSID;
-(id)init;
-(id<HMFWiFiManagerDataSource>)dataSource;
@end

