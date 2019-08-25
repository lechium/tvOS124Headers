/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDAccessorySymptomsDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>

@protocol OS_dispatch_queue;
@class NSUUID, HMDAccessory, NSSet, NSObject, HMFMessageDispatcher, HMDSymptomManager, NSString;

@interface HMDAccessorySymptomHandler : HMFObject <HMDAccessorySymptomsDelegate, NSSecureCoding, HMFLogging, HMDHomeMessageReceiver> {

	NSUUID* _uuid;
	HMDAccessory* _accessory;
	NSSet* _syncedSymptoms;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFMessageDispatcher* _msgDispatcher;
	HMDSymptomManager* _symptomManager;
	NSSet* _localSymptoms;
	NSUUID* _sfDeviceIdentifier;

}

@property (nonatomic,readonly) HMDSymptomManager * symptomManager;                            //@synthesize symptomManager=_symptomManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                            //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,readonly) NSSet * symptoms; 
@property (nonatomic,retain) NSSet * syncedSymptoms;                                          //@synthesize syncedSymptoms=_syncedSymptoms - In the implementation block
@property (nonatomic,retain) NSSet * localSymptoms;                                           //@synthesize localSymptoms=_localSymptoms - In the implementation block
@property (nonatomic,retain) NSUUID * sfDeviceIdentifier;                                     //@synthesize sfDeviceIdentifier=_sfDeviceIdentifier - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                 //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,__weak,readonly) HMDAccessory * accessory;                               //@synthesize accessory=_accessory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
+(id)logCategory;
+(BOOL)hasMessageReceiverChildren;
+(BOOL)supportsSecureCoding;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)logIdentifier;
-(HMDAccessory *)accessory;
-(void)refreshCurrentDeviceSymptoms;
-(void)_refreshCurrentDeviceSymptoms;
-(void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2 ;
-(id)initWithAccessory:(id)arg1 syncedSymptoms:(id)arg2 symptomManager:(id)arg3 ;
-(NSSet *)syncedSymptoms;
-(NSSet *)localSymptoms;
-(void)handleCurrentDeviceSymptomsChangedNotification:(id)arg1 ;
-(HMDSymptomManager *)symptomManager;
-(void)_registerMessages;
-(void)_handleFixErrorMessage:(id)arg1 ;
-(void)_updateBackingStoreModelWithNewSyncedSymptoms:(id)arg1 ;
-(id)_filteredAccessorySymptomsForSymptoms:(id)arg1 ;
-(id)_filteredMediaSystemSymptomsForSymptoms:(id)arg1 ;
-(NSSet *)symptoms;
-(void)setLocalSymptoms:(NSSet *)arg1 ;
-(void)_sendStatusUpdate;
-(NSUUID *)sfDeviceIdentifier;
-(void)setSfDeviceIdentifier:(NSUUID *)arg1 ;
-(void)setSyncedSymptoms:(NSSet *)arg1 ;
-(void)_updateStateWithNewBroadcastedSymptoms:(id)arg1 ;
-(void)_updateStateWithNewLocalSymptoms:(id)arg1 ;
-(void)_updateStateWithNewSFDeviceIdentifier:(id)arg1 ;
-(id)initWithAccessory:(id)arg1 syncedSymptoms:(id)arg2 ;
-(void)symptomManager:(id)arg1 didChangeBroadcastedSymptoms:(id)arg2 ;
-(void)symptomManager:(id)arg1 didChangeLocalSymptoms:(id)arg2 ;
-(void)symptomManager:(id)arg1 didChangeSFDeviceIdentifier:(id)arg2 ;
-(void)handleAccessoryDeviceUpdated;
-(void)handleNewSyncedSymptoms:(id)arg1 message:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
@end

