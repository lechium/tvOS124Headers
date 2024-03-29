/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDMediaAccessory.h>
#import <libobjc.A.dylib/HMDAccessoryUserManagement.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDDevice, HMFPairingIdentity, HMDAccessorySettingGroup, HMDRemoteLoginHandler, HMDAccessorySymptomHandler, HMFSoftwareVersion, HMDSoftwareUpdate, HMFWiFiNetworkInfo, HMDTargetControlManager, NSString;

@interface HMDAppleMediaAccessory : HMDMediaAccessory <HMDAccessoryUserManagement, HMFLogging> {

	BOOL _deviceReachable;
	BOOL _fixedPairingIdentityInCloud;
	HMDDevice* _device;
	HMFPairingIdentity* _pairingIdentity;
	HMDAccessorySettingGroup* _rootSettings;
	HMDRemoteLoginHandler* _remoteLoginHandler;
	HMDAccessorySymptomHandler* _symptomsHandler;
	HMFSoftwareVersion* _softwareVersion;
	HMDSoftwareUpdate* _softwareUpdate;
	HMFWiFiNetworkInfo* _wifiNetworkInfo;
	HMDTargetControlManager* _targetControlManager;
	HMFPairingIdentity* _lastCreatedPairingIdentity;

}

@property (nonatomic,retain) HMDTargetControlManager * targetControlManager;               //@synthesize targetControlManager=_targetControlManager - In the implementation block
@property (assign,nonatomic) BOOL fixedPairingIdentityInCloud;                             //@synthesize fixedPairingIdentityInCloud=_fixedPairingIdentityInCloud - In the implementation block
@property (nonatomic,retain) HMFPairingIdentity * lastCreatedPairingIdentity;              //@synthesize lastCreatedPairingIdentity=_lastCreatedPairingIdentity - In the implementation block
@property (readonly) HMDDevice * device;                                                   //@synthesize device=_device - In the implementation block
@property (readonly) HMDAccessorySettingGroup * rootSettings;                              //@synthesize rootSettings=_rootSettings - In the implementation block
@property (copy,readonly) HMFPairingIdentity * pairingIdentity;                            //@synthesize pairingIdentity=_pairingIdentity - In the implementation block
@property (readonly) HMDRemoteLoginHandler * remoteLoginHandler;                           //@synthesize remoteLoginHandler=_remoteLoginHandler - In the implementation block
@property (readonly) HMDAccessorySymptomHandler * symptomsHandler;                         //@synthesize symptomsHandler=_symptomsHandler - In the implementation block
@property (assign,getter=isDeviceReachable,nonatomic) BOOL deviceReachable;                //@synthesize deviceReachable=_deviceReachable - In the implementation block
@property (readonly) HMFSoftwareVersion * softwareVersion;                                 //@synthesize softwareVersion=_softwareVersion - In the implementation block
@property (readonly) HMDSoftwareUpdate * softwareUpdate;                                   //@synthesize softwareUpdate=_softwareUpdate - In the implementation block
@property (readonly) HMFWiFiNetworkInfo * wifiNetworkInfo;                                 //@synthesize wifiNetworkInfo=_wifiNetworkInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL supportsUserManagement; 
+(BOOL)hasMessageReceiverChildren;
+(id)__deviceMediaRouteIdentifier;
+(BOOL)shouldAcceptMessage:(id)arg1 home:(id)arg2 privilege:(unsigned long long)arg3 ;
+(BOOL)supportsSecureCoding;
-(HMDAccessorySettingGroup *)rootSettings;
-(id)dumpState;
-(void)_registerForMessages;
-(id)messageReceiverChildren;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(id)backingStoreObjects:(long long)arg1 ;
-(HMDAccessorySymptomHandler *)symptomsHandler;
-(HMFPairingIdentity *)pairingIdentity;
-(HMDDevice *)device;
-(void)configure:(id)arg1 msgDispatcher:(id)arg2 accessoryConfigureGroup:(id)arg3 ;
-(BOOL)isCurrentAccessory;
-(id)runtimeState;
-(void)setRemotelyReachable:(BOOL)arg1 ;
-(HMDSoftwareUpdate *)softwareUpdate;
-(id)transactionWithObjectChangeType:(unsigned long long)arg1 ;
-(id)initWithTransaction:(id)arg1 home:(id)arg2 ;
-(BOOL)supportsTargetControl;
-(void)autoConfigureTargetControllers;
-(BOOL)supportsUserManagement;
-(void)setPairingIdentity:(HMFPairingIdentity *)arg1 ;
-(void)setDevice:(HMDDevice *)arg1 ;
-(void)addUser:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeUser:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)pairingsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)assistantObject;
-(HMFSoftwareVersion *)softwareVersion;
-(void)updateWithDevice:(id)arg1 ;
-(HMDRemoteLoginHandler *)remoteLoginHandler;
-(void)setSoftwareVersion:(HMFSoftwareVersion *)arg1 ;
-(BOOL)isRemotelyReachable;
-(long long)reachableTransports;
-(void)populateModelObject:(id)arg1 version:(long long)arg2 ;
-(BOOL)requiresHomeAppForManagement;
-(id)dumpSimpleState;
-(void)handleCurrentDeviceChanged:(id)arg1 ;
-(id)deviceMonitor;
-(void)handleCurrentDeviceUpdated:(id)arg1 ;
-(void)handleDeviceIsReachable:(id)arg1 ;
-(void)handleDeviceIsNotReachable:(id)arg1 ;
-(void)_fetchAvailableUpdate:(id)arg1 ;
-(void)_startUpdate:(id)arg1 ;
-(BOOL)shouldUpdateWithDevice:(id)arg1 ;
-(void)createPairingIdentity;
-(void)_updateSoftwareVersion:(id)arg1 ;
-(BOOL)supportsSettings;
-(void)updateRootGroup:(id)arg1 ;
-(void)addRootSettings;
-(void)handleCurrentNetworkChangedNotification:(id)arg1 ;
-(void)updateWiFiNetworkInfo;
-(HMDTargetControlManager *)targetControlManager;
-(void)setTargetControlManager:(HMDTargetControlManager *)arg1 ;
-(void)startMonitoringReachability;
-(void)_fixCloudKeyIfNeeded;
-(BOOL)fixedPairingIdentityInCloud;
-(void)handleDeviceUpdated;
-(void)handleDeviceReachabilityChange:(BOOL)arg1 ;
-(void)setDeviceReachable:(BOOL)arg1 ;
-(BOOL)isDeviceReachable;
-(void)notifyClientsOfUpdatedRootSettings:(id)arg1 ;
-(void)setLastCreatedPairingIdentity:(HMFPairingIdentity *)arg1 ;
-(HMFPairingIdentity *)lastCreatedPairingIdentity;
-(void)_relayRequestMessage:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(HMFWiFiNetworkInfo *)wifiNetworkInfo;
-(void)setWifiNetworkInfo:(HMFWiFiNetworkInfo *)arg1 ;
-(id)remoteMessageDestination;
-(void)handleAddedRootSettingsModel:(id)arg1 message:(id)arg2 ;
-(void)handleAddedSoftwareUpdateModel:(id)arg1 message:(id)arg2 ;
-(void)handleRemovedSoftwareUpdateModel:(id)arg1 message:(id)arg2 ;
-(void)setRootSettings:(HMDAccessorySettingGroup *)arg1 ;
-(void)setSoftwareUpdate:(HMDSoftwareUpdate *)arg1 ;
-(BOOL)supportsSoftwareUpdate;
-(void)reconfigureOnMediaSystemDisolve;
-(void)__updateDeviceWithDeviceIdentifier:(id)arg1 ;
-(void)updateSoftwareUpdate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setFixedPairingIdentityInCloud:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
@end

