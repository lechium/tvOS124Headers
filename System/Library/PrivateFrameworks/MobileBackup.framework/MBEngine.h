/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MBSettingsContext, MBDebugContext, MBProperties, MBDomainManager, MBAppManager, NSMutableDictionary, NSString;

@interface MBEngine : NSObject {

	MBSettingsContext* _settingsContext;
	MBDebugContext* _debugContext;
	MBProperties* _properties;
	MBProperties* _preflightProperties;
	MBDomainManager* _domainManager;
	MBAppManager* _appManager;
	BOOL _encrypted;
	NSMutableDictionary* _domainRestoreBehaviors;

}

@property (nonatomic,retain) NSMutableDictionary * domainRestoreBehaviors;                       //@synthesize domainRestoreBehaviors=_domainRestoreBehaviors - In the implementation block
@property (nonatomic,readonly) int engineType; 
@property (nonatomic,readonly) NSString * engineTypeString; 
@property (getter=isDriveEngine,nonatomic,readonly) BOOL driveEngine; 
@property (getter=isServiceEngine,nonatomic,readonly) BOOL serviceEngine; 
@property (getter=isCloudKitEngine,nonatomic,readonly) BOOL cloudKitEngine; 
@property (nonatomic,readonly) int engineMode; 
@property (nonatomic,readonly) NSString * engineModeString; 
@property (getter=isBackupEngine,nonatomic,readonly) BOOL backupEngine; 
@property (getter=isRestoreEngine,nonatomic,readonly) BOOL restoreEngine; 
@property (nonatomic,readonly) int restoreType; 
@property (nonatomic,readonly) NSString * restoreTypeString; 
@property (getter=isForegroundRestore,nonatomic,readonly) BOOL foregroundRestore; 
@property (getter=isBackgroundRestore,nonatomic,readonly) BOOL backgroundRestore; 
@property (nonatomic,readonly) MBSettingsContext * settingsContext;                              //@synthesize settingsContext=_settingsContext - In the implementation block
@property (nonatomic,readonly) MBDebugContext * debugContext;                                    //@synthesize debugContext=_debugContext - In the implementation block
@property (nonatomic,readonly) MBProperties * properties;                                        //@synthesize properties=_properties - In the implementation block
@property (nonatomic,readonly) MBProperties * preflightProperties;                               //@synthesize preflightProperties=_preflightProperties - In the implementation block
@property (assign,nonatomic) BOOL encrypted;                                                     //@synthesize encrypted=_encrypted - In the implementation block
@property (getter=isMigrate,nonatomic,readonly) BOOL migrate; 
@property (nonatomic,readonly) MBDomainManager * domainManager;                                  //@synthesize domainManager=_domainManager - In the implementation block
@property (nonatomic,readonly) MBAppManager * appManager;                                        //@synthesize appManager=_appManager - In the implementation block
@property (getter=shouldCommitIfPossible,nonatomic,readonly) BOOL commitIfPossible; 
+(id)stringForEngineType:(int)arg1 ;
+(id)stringForEngineMode:(int)arg1 ;
+(id)stringForRestoreType:(int)arg1 ;
+(id)aggregateDictionaryKey:(id)arg1 forEngineType:(int)arg2 restoreType:(int)arg3 ;
+(id)aggregateDictionaryKey:(id)arg1 forEngineType:(int)arg2 engineMode:(int)arg3 ;
+(id)aggregateDictionaryForFullRestoreWithKey:(id)arg1 engineType:(int)arg2 ;
-(MBAppManager *)appManager;
-(int)engineType;
-(int)engineMode;
-(int)restoreType;
-(BOOL)isRestoreEngine;
-(BOOL)isServiceEngine;
-(BOOL)isDriveEngine;
-(MBSettingsContext *)settingsContext;
-(BOOL)shouldAlwaysRestoreSystemSharedContainerDomain:(id)arg1 ;
-(NSMutableDictionary *)domainRestoreBehaviors;
-(id)localRootPathForDomain:(id)arg1 ;
-(BOOL)isCloudKitEngine;
-(long long)restoreBehaviorForFile:(id)arg1 withValidation:(BOOL)arg2 error:(id*)arg3 ;
-(long long)restoreBehaviorForDomain:(id)arg1 error:(id*)arg2 ;
-(id)aggregateDictionaryKey:(id)arg1 ;
-(id)initWithSettingsContext:(id)arg1 debugContext:(id)arg2 domainManager:(id)arg3 ;
-(NSString *)engineTypeString;
-(NSString *)engineModeString;
-(BOOL)isBackupEngine;
-(NSString *)restoreTypeString;
-(BOOL)isForegroundRestore;
-(BOOL)isBackgroundRestore;
-(BOOL)shouldCommitIfPossible;
-(id)validateFile:(id)arg1 ;
-(id)validateRestoreDomain:(id)arg1 relativePath:(id)arg2 ;
-(long long)restoreBehaviorForFile:(id)arg1 error:(id*)arg2 ;
-(void)pushAggregateDictionaryTotalFileCount:(long long)arg1 totalFileSize:(long long)arg2 duration:(double)arg3 ;
-(id)restoringBundleID;
-(MBDebugContext *)debugContext;
-(MBProperties *)preflightProperties;
-(MBDomainManager *)domainManager;
-(void)setDomainRestoreBehaviors:(NSMutableDictionary *)arg1 ;
-(BOOL)isMigrate;
-(BOOL)encrypted;
-(void)setEncrypted:(BOOL)arg1 ;
-(void)dealloc;
-(MBProperties *)properties;
@end

