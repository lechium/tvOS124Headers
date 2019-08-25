/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NRDevice, NSArray;

@interface NRMigrator : NSObject {

	BOOL _migrating;
	NRDevice* _migratingDevice;

}

@property (nonatomic,readonly) BOOL migrationIsAvailable; 
@property (nonatomic,retain,readonly) NSArray * devicesExpectedToBeMigratableAfterRestore; 
@property (nonatomic,retain,readonly) NSArray * migratableDevicesRequiringConsent; 
@property (nonatomic,retain,readonly) NSArray * migratableDevices; 
@property (nonatomic,retain,readonly) NRDevice * migratingDevice;                                       //@synthesize migratingDevice=_migratingDevice - In the implementation block
+(id)sharedMigrator;
+(id)migrationDataPreRestoreForConsentedDevices:(id)arg1 ;
+(void)ingestPostRestoreMigrationDataForConsentedDevices:(id)arg1 ;
-(void)setMigrationConsented:(BOOL)arg1 forDeviceID:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)migrationConsentRequestData;
-(id)devicesFromMigrationConsentRequestData:(id)arg1 ;
-(void)setMigrationConsented:(BOOL)arg1 forDevice:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)beginMigrationWithDevice:(id)arg1 passcode:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)beginMigrationWithDevice:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)lastMigrationRequestPhoneName;
-(id)UDIDUUID;
-(id)shortenStringByCompleteUnicodeCharactersToReduceStorageSpace:(id)arg1 ;
-(id)_SHA256WithString:(id)arg1 ;
-(NSArray *)devicesExpectedToBeMigratableAfterRestore;
-(id)packMigrationProtobufs:(id)arg1 ;
-(id)compressMigrationProtobuf:(id)arg1 ;
-(void)shrinkMigrationProtobufs:(id)arg1 ;
-(NSArray *)migratableDevices;
-(BOOL)migrationIsAvailable;
-(NSArray *)migratableDevicesRequiringConsent;
-(void)enterPreMigrationMode;
-(NRDevice *)migratingDevice;
@end

