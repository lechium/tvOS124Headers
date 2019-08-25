/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@class HMDResidentMesh, HMDDevice, NSMutableSet, NSSet, HMFTimer, NSMutableDictionary, NSString;

@interface HMDResidentMeshResidentStorage : HMFObject <HMFTimerDelegate> {

	HMDResidentMesh* _owner;
	HMDDevice* _resident;
	NSMutableSet* _accessoryUUIDs;
	NSSet* _lastSentAccessoryUUIDs;
	HMFTimer* _transmitTimer;
	NSMutableDictionary* _accessoryListWithLinkQuality;

}

@property (assign,nonatomic,__weak) HMDResidentMesh * owner;                                  //@synthesize owner=_owner - In the implementation block
@property (assign,nonatomic,__weak) HMDDevice * resident;                                     //@synthesize resident=_resident - In the implementation block
@property (nonatomic,retain) NSMutableSet * accessoryUUIDs;                                   //@synthesize accessoryUUIDs=_accessoryUUIDs - In the implementation block
@property (nonatomic,retain) NSSet * lastSentAccessoryUUIDs;                                  //@synthesize lastSentAccessoryUUIDs=_lastSentAccessoryUUIDs - In the implementation block
@property (nonatomic,retain) HMFTimer * transmitTimer;                                        //@synthesize transmitTimer=_transmitTimer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accessoryListWithLinkQuality;              //@synthesize accessoryListWithLinkQuality=_accessoryListWithLinkQuality - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HMDDevice *)resident;
-(void)timerDidFire:(id)arg1 ;
-(void)setResident:(HMDDevice *)arg1 ;
-(NSMutableSet *)accessoryUUIDs;
-(void)setAccessoryListWithLinkQuality:(NSMutableDictionary *)arg1 ;
-(void)setAccessoryUUIDs:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)accessoryListWithLinkQuality;
-(void)_transmitStatus:(BOOL)arg1 ;
-(void)setTransmitTimer:(HMFTimer *)arg1 ;
-(BOOL)_addAccessoryWithLinkQuality:(id)arg1 toList:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_transmitAfter:(double)arg1 ;
-(HMFTimer *)transmitTimer;
-(NSSet *)lastSentAccessoryUUIDs;
-(void)setLastSentAccessoryUUIDs:(NSSet *)arg1 ;
-(id)_buildPayload;
-(id)initWithResident:(id)arg1 owner:(id)arg2 ;
-(void)_addAccessory:(id)arg1 activateTimer:(BOOL)arg2 ;
-(void)_removeAccessory:(id)arg1 activateTimer:(BOOL)arg2 ;
-(HMDResidentMesh *)owner;
-(void)setOwner:(HMDResidentMesh *)arg1 ;
@end

