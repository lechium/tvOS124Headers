/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMFUnfairLock, HMDDevice, NSUUID, HMDHome, HMDResidentDeviceManager, NSString;

@interface HMDResidentDevice : HMFObject <HMDBackingStoreObjectProtocol, HMFDumpState, HMFLogging, NSSecureCoding> {

	HMFUnfairLock* __lock;
	BOOL _enabled;
	BOOL _confirmed;
	BOOL _reachable;
	BOOL _lowBattery;
	HMDDevice* _device;
	NSUUID* _identifier;
	long long _batteryState;
	HMDHome* _home;
	HMDResidentDeviceManager* _residentDeviceManager;

}

@property (nonatomic,readonly) unsigned long long status; 
@property (getter=isBlocked,readonly) BOOL blocked; 
@property (nonatomic,readonly) unsigned long long capabilities; 
@property (nonatomic,copy) NSUUID * identifier;                                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) HMDDevice * device;                                                   //@synthesize device=_device - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                        //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isConfirmed,nonatomic) BOOL confirmed;                                    //@synthesize confirmed=_confirmed - In the implementation block
@property (assign,getter=isReachable,nonatomic) BOOL reachable;                                    //@synthesize reachable=_reachable - In the implementation block
@property (assign,nonatomic) long long batteryState;                                               //@synthesize batteryState=_batteryState - In the implementation block
@property (assign,getter=isLowBattery,nonatomic) BOOL lowBattery;                                  //@synthesize lowBattery=_lowBattery - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                                //@synthesize home=_home - In the implementation block
@property (assign,nonatomic,__weak) HMDResidentDeviceManager * residentDeviceManager;              //@synthesize residentDeviceManager=_residentDeviceManager - In the implementation block
@property (nonatomic,readonly) BOOL supportsSharedEventTriggerActivation; 
@property (nonatomic,readonly) BOOL supportsMediaSystem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)batteryStateAsString:(long long)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(void)setHome:(HMDHome *)arg1 ;
-(HMDHome *)home;
-(void)setConfirmed:(BOOL)arg1 ;
-(id)dumpState;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(BOOL)isReachable;
-(id)logIdentifier;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(HMDDevice *)device;
-(void)configureWithHome:(id)arg1 ;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(HMDResidentDeviceManager *)residentDeviceManager;
-(void)setReachable:(BOOL)arg1 ;
-(unsigned long long)capabilities;
-(id)runtimeState;
-(BOOL)supportsSharedEventTriggerActivation;
-(BOOL)isBlocked;
-(id)initWithDevice:(id)arg1 ;
-(void)setDevice:(HMDDevice *)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(void)__accountAdded:(id)arg1 ;
-(void)__deviceAdded:(id)arg1 ;
-(BOOL)isConfirmed;
-(void)_residentDeviceModelUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)_handleResidentDeviceUpdateEnabled:(BOOL)arg1 ;
-(void)_handleResidentDeviceUpdateConfirmed:(BOOL)arg1 ;
-(BOOL)supportsMediaSystem;
-(void)__deviceUpdated:(id)arg1 ;
-(void)setBatteryState:(long long)arg1 ;
-(void)setLowBattery:(BOOL)arg1 ;
-(void)setResidentDeviceManager:(HMDResidentDeviceManager *)arg1 ;
-(id)init;
-(void)dealloc;
-(NSUUID *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(unsigned long long)status;
-(long long)batteryState;
-(id)shortDescription;
-(BOOL)isLowBattery;
@end

