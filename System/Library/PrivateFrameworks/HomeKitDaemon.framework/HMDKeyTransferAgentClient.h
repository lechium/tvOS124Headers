/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDKeyTransferAgent.h>
#import <libobjc.A.dylib/HMFNetServiceDelegate.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFNetMonitorDelegate.h>
#import <libobjc.A.dylib/HMFNetServiceBrowserDelegate.h>

@class HMFNetServiceBrowser, NSMutableDictionary, NSMutableSet, NSString, HMFExponentialBackoffTimer, HMFNetMonitor;

@interface HMDKeyTransferAgentClient : HMDKeyTransferAgent <HMFNetServiceDelegate, HMFTimerDelegate, HMFNetMonitorDelegate, HMFNetServiceBrowserDelegate> {

	BOOL _resolutionInProgress;
	BOOL _haveCulledPlist;
	unsigned long long _residentProvisioningStatus;
	HMFNetServiceBrowser* _serviceBrowser;
	NSMutableDictionary* _idsKeys;
	NSMutableDictionary* _bonjourKeys;
	NSMutableSet* _targetsToProcess;
	NSString* _pairingWithUUID;
	HMFExponentialBackoffTimer* _atHomeRetryTimer;
	HMFNetMonitor* _netMonitor;
	long long _tfaState;

}

@property (nonatomic,retain) HMFNetServiceBrowser * serviceBrowser;                      //@synthesize serviceBrowser=_serviceBrowser - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * idsKeys;                              //@synthesize idsKeys=_idsKeys - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * bonjourKeys;                          //@synthesize bonjourKeys=_bonjourKeys - In the implementation block
@property (nonatomic,retain) NSMutableSet * targetsToProcess;                            //@synthesize targetsToProcess=_targetsToProcess - In the implementation block
@property (assign,nonatomic) BOOL resolutionInProgress;                                  //@synthesize resolutionInProgress=_resolutionInProgress - In the implementation block
@property (nonatomic,retain) NSString * pairingWithUUID;                                 //@synthesize pairingWithUUID=_pairingWithUUID - In the implementation block
@property (nonatomic,retain) HMFExponentialBackoffTimer * atHomeRetryTimer;              //@synthesize atHomeRetryTimer=_atHomeRetryTimer - In the implementation block
@property (assign,nonatomic) unsigned long long residentProvisioningStatus;              //@synthesize residentProvisioningStatus=_residentProvisioningStatus - In the implementation block
@property (nonatomic,retain) HMFNetMonitor * netMonitor;                                 //@synthesize netMonitor=_netMonitor - In the implementation block
@property (assign,nonatomic) BOOL haveCulledPlist;                                       //@synthesize haveCulledPlist=_haveCulledPlist - In the implementation block
@property (assign,nonatomic) long long tfaState;                                         //@synthesize tfaState=_tfaState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(void)twoFactorAuthenticationEnabledForAccount:(id)arg1 altDSID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithHomeManager:(id)arg1 ;
-(id)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(void)netServiceBrowser:(id)arg1 didAddService:(id)arg2 ;
-(void)netServiceBrowser:(id)arg1 didStopBrowsingWithError:(id)arg2 ;
-(void)__deviceUpdated:(id)arg1 ;
-(void)__accessoryIsReachable:(id)arg1 ;
-(void)_handleKeyTransferAgentMessage:(id)arg1 ;
-(void)_handleResidentProvisioningStatusChanged:(id)arg1 ;
-(void)_startBrowser;
-(void)setResidentProvisioningStatus:(unsigned long long)arg1 ;
-(void)__deviceAddedToAccount:(id)arg1 ;
-(void)__deviceRemovedFromAccount:(id)arg1 ;
-(void)__accountChanged:(id)arg1 ;
-(void)queryPlistDevices;
-(HMFExponentialBackoffTimer *)atHomeRetryTimer;
-(NSString *)pairingWithUUID;
-(void)_restartKeyTransfer:(id)arg1 ;
-(BOOL)haveCulledPlist;
-(void)setHaveCulledPlist:(BOOL)arg1 ;
-(NSMutableDictionary *)idsKeys;
-(void)_stopBrowser;
-(id)_deviceWithUUID:(id)arg1 ;
-(void)_saveKeyPlist;
-(void)setPairingWithUUID:(NSString *)arg1 ;
-(HMFNetServiceBrowser *)serviceBrowser;
-(void)setServiceBrowser:(HMFNetServiceBrowser *)arg1 ;
-(void)setResolutionInProgress:(BOOL)arg1 ;
-(void)_beginBonjourResolution:(BOOL)arg1 ;
-(BOOL)resolutionInProgress;
-(void)_reallyBeginBonjourResolution;
-(NSMutableDictionary *)bonjourKeys;
-(NSMutableSet *)targetsToProcess;
-(BOOL)_newDeviceSeen:(id)arg1 ;
-(long long)tfaState;
-(void)_tfaVerificationCompleteForKeyUUID:(id)arg1 forTarget:(id)arg2 ;
-(void)setTfaState:(long long)arg1 ;
-(unsigned long long)residentProvisioningStatus;
-(void)_haveVerifiedTwoFactorAuthenticationWithKeyUUID:(id)arg1 forTarget:(id)arg2 ;
-(void)_endPairingWithError:(id)arg1 suspendingTimer:(BOOL)arg2 ;
-(void)_tryPairingWithAccessories:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_havePairVerifiedAccessoryWithKeyUUID:(id)arg1 forDevice:(id)arg2 ;
-(void)_sendIOSPublicKey:(id)arg1 withDevice:(id)arg2 ;
-(void)_sendATVPrivateKey:(id)arg1 withDevice:(id)arg2 retry:(unsigned long long)arg3 ;
-(void)_startPairingWithKeyUUID:(id)arg1 forTarget:(id)arg2 ;
-(void)_device:(id)arg1 addedToAccount:(id)arg2 ;
-(void)_device:(id)arg1 removedFromAccount:(id)arg2 ;
-(void)receivedBonjourTXTFrom:(id)arg1 withUUIDData:(id)arg2 ;
-(void)netService:(id)arg1 didUpdateTXTRecord:(id)arg2 ;
-(void)networkMonitorIsReachable:(id)arg1 ;
-(void)resetConfig;
-(void)setIdsKeys:(NSMutableDictionary *)arg1 ;
-(void)setBonjourKeys:(NSMutableDictionary *)arg1 ;
-(void)setTargetsToProcess:(NSMutableSet *)arg1 ;
-(void)setAtHomeRetryTimer:(HMFExponentialBackoffTimer *)arg1 ;
-(HMFNetMonitor *)netMonitor;
-(void)setNetMonitor:(HMFNetMonitor *)arg1 ;
-(void)dealloc;
@end

