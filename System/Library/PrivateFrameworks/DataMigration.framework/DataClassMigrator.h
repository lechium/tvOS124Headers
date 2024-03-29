/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface DataClassMigrator : NSObject {

	NSDictionary* _context;
	BOOL _didUpgrade;
	unsigned _userDataDisposition;

}

@property (assign,nonatomic) unsigned userDataDisposition;                            //@synthesize userDataDisposition=_userDataDisposition - In the implementation block
@property (nonatomic,readonly) BOOL shouldPreserveSettingsAfterRestore; 
@property (nonatomic,readonly) BOOL wasPasscodeSetInBackup; 
@property (assign,nonatomic) BOOL didUpgrade;                                         //@synthesize didUpgrade=_didUpgrade - In the implementation block
@property (nonatomic,readonly) BOOL didRestoreFromBackup; 
@property (nonatomic,readonly) BOOL didMigrateBackupFromDifferentDevice; 
@property (nonatomic,readonly) BOOL didRestoreFromCloudBackup; 
@property (nonatomic,retain) NSDictionary * context;                                  //@synthesize context=_context - In the implementation block
+(id)dataClassMigratorForBundleAtPath:(id)arg1 ;
-(float)migrationProgress;
-(BOOL)didUpgrade;
-(BOOL)didMigrateBackupFromDifferentDevice;
-(BOOL)didRestoreFromCloudBackup;
-(BOOL)shouldPreserveSettingsAfterRestore;
-(BOOL)wasPasscodeSetInBackup;
-(id)dataClassName;
-(unsigned)userDataDisposition;
-(void)setUserDataDisposition:(unsigned)arg1 ;
-(void)setDidUpgrade:(BOOL)arg1 ;
-(BOOL)performMigration;
-(BOOL)didRestoreFromBackup;
-(float)estimatedDuration;
-(void)setContext:(NSDictionary *)arg1 ;
-(NSDictionary *)context;
@end

