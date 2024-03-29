/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString, NSUserDefaults;

@interface CKBehaviorOptions : NSObject {

	BOOL _didReadAutomatedDeviceGroup;
	int _mcToken;
	int _ckToken;
	NSMutableDictionary* _cachedPrefs;
	NSObject*<OS_dispatch_queue> _cachedPrefsQueue;
	NSString* _automatedDeviceGroup;
	NSUserDefaults* _automatedDeviceGroupDefaults;

}

@property (nonatomic,retain) NSMutableDictionary * cachedPrefs;                          //@synthesize cachedPrefs=_cachedPrefs - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cachedPrefsQueue;              //@synthesize cachedPrefsQueue=_cachedPrefsQueue - In the implementation block
@property (assign,nonatomic) int mcToken;                                                //@synthesize mcToken=_mcToken - In the implementation block
@property (assign,nonatomic) int ckToken;                                                //@synthesize ckToken=_ckToken - In the implementation block
@property (assign) BOOL didReadAutomatedDeviceGroup;                                     //@synthesize didReadAutomatedDeviceGroup=_didReadAutomatedDeviceGroup - In the implementation block
@property (nonatomic,retain) NSString * automatedDeviceGroup;                            //@synthesize automatedDeviceGroup=_automatedDeviceGroup - In the implementation block
@property (nonatomic,retain) NSUserDefaults * automatedDeviceGroupDefaults;              //@synthesize automatedDeviceGroupDefaults=_automatedDeviceGroupDefaults - In the implementation block
+(id)sharedOptions;
-(id)productName;
-(void)setProductName:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)cachedPrefsQueue;
-(NSMutableDictionary *)cachedPrefs;
-(void)_startListeningForNotifications;
-(id)_getStringOptionLockedForKey:(id)arg1 defaultValue:(id)arg2 ;
-(int)_getIntOptionForKey:(id)arg1 defaultValue:(int)arg2 ;
-(void)_setPref:(id)arg1 forKey:(id)arg2 ;
-(BOOL)_getBoolOptionForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(double)_getDoubleOptionForKey:(id)arg1 defaultValue:(double)arg2 ;
-(id)_getStringOptionForKey:(id)arg1 defaultValue:(id)arg2 ;
-(void)setCKTimeLoggingDetailed:(BOOL)arg1 ;
-(void)setCKTimeLogging:(BOOL)arg1 ;
-(id)_urlForKey:(id)arg1 defaultURLString:(id)arg2 ;
-(id)_getArrayOptionForKey:(id)arg1 defaultValue:(id)arg2 ;
-(BOOL)_buildIsOverridden;
-(void)setDidReadAutomatedDeviceGroup:(BOOL)arg1 ;
-(BOOL)didReadAutomatedDeviceGroup;
-(void)setCachedRecordExpiryTime:(int)arg1 ;
-(BOOL)highPriorityURLDelegates;
-(double)operationTimeout;
-(void)setOperationTimeout:(double)arg1 ;
-(int)trafficLogMaximumDataSize;
-(int)trafficLogQueueWidth;
-(void)setTrafficLogMaximumDataSize:(int)arg1 ;
-(const char*)CKCtlPrompt;
-(void)setCKCtlPrompt:(char*)arg1 ;
-(BOOL)CFNetworkLogging;
-(void)setCFNetworkLogging:(BOOL)arg1 ;
-(BOOL)CKTimeLoggingDetailed;
-(void)setDisableCaching:(BOOL)arg1 ;
-(void)setShouldProfileSQL:(BOOL)arg1 ;
-(void)setCompressRequests:(BOOL)arg1 ;
-(void)setModTimeInAssetCacheEviction:(BOOL)arg1 ;
-(void)setLogTrafficToTextFile:(BOOL)arg1 ;
-(void)setLogTraffic:(BOOL)arg1 ;
-(void)setSendDebugHeader:(BOOL)arg1 ;
-(void)setConfigBaseURL:(id)arg1 ;
-(void)setSetupBaseURL:(id)arg1 ;
-(void)setCustomCloudDBBaseURL:(id)arg1 ;
-(void)setCustomShareServiceBaseURL:(id)arg1 ;
-(void)setCustomDeviceServiceBaseURL:(id)arg1 ;
-(void)setCustomCodeServiceBaseURL:(id)arg1 ;
-(void)setCustomMetricsServiceBaseURL:(id)arg1 ;
-(id)primaryAccountEmailOverride;
-(void)setPrimaryAccountEmailOverride:(id)arg1 ;
-(id)primaryAccountPasswordOverride;
-(void)setPrimaryAccountPasswordOverride:(id)arg1 ;
-(void)setTestRunIDHeader:(id)arg1 ;
-(id)otherAccountsWithDefaultValue:(id)arg1 ;
-(double)packageGCGracePeriod;
-(void)setEnableMescal:(BOOL)arg1 ;
-(BOOL)sandboxCloudD;
-(int)longlivedOperationThrottlingRetryCount;
-(void)setOptimisticPCS:(BOOL)arg1 ;
-(BOOL)optimisticPCS;
-(void)setUseStingray:(BOOL)arg1 ;
-(BOOL)useStingray;
-(void)setUsePreauth:(BOOL)arg1 ;
-(void)setRollRecordPCSMasterKeys:(BOOL)arg1 ;
-(void)setRollRecordMasterKeysOnUnshare:(BOOL)arg1 ;
-(void)setRollZonePCSIdentities:(BOOL)arg1 ;
-(void)setUseEnhancedPCSEncryptionContext:(BOOL)arg1 ;
-(void)setContainerIDToForceFatalManateeZoneDecryptionFailure:(id)arg1 ;
-(double)maxTimeIntervalSinceLastZoneishPCSKeyRoll;
-(double)maximumWaitAfterFetchRequest;
-(id)vettedEmailsTestFormat;
-(void)setSqlBatchCount:(long long)arg1 ;
-(void)setSqlBatchTime:(double)arg1 ;
-(double)shareAcceptorRetrievingDialogDelay;
-(double)shareAcceptorRetrievingDialogMinPeriod;
-(void)setCachedPrefs:(NSMutableDictionary *)arg1 ;
-(void)setCachedPrefsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(int)mcToken;
-(void)setMcToken:(int)arg1 ;
-(int)ckToken;
-(void)setCkToken:(int)arg1 ;
-(void)setBuildVersion:(id)arg1 ;
-(id)productVersion;
-(void)setProductVersion:(id)arg1 ;
-(BOOL)disableCaching;
-(int)cachedRecordExpiryTime;
-(unsigned long long)recordCacheSizeLimit;
-(long long)sqlBatchCount;
-(double)maxRecentProxyAge;
-(unsigned long long)recentProxiesToSave;
-(int)longlivedOperationMaxRetryCount;
-(int)clientThrottleQueueWidth;
-(int)defaultRetryAfter;
-(id)_behaviorContainerOptionForKey:(id)arg1 ;
-(id)_behaviorOptionForKey:(id)arg1 ;
-(BOOL)CKTimeLogging;
-(long long)flowControlBudget;
-(double)flowControlRegeneration;
-(double)maximumThrottleSeconds;
-(long long)flowControlBudgetOverride;
-(double)flowControlRegenerationOverride;
-(double)publicIdentitiesExpirationTimeout;
-(BOOL)useEncryption;
-(unsigned long long)PCSCacheSize;
-(double)PCSCacheMinTime;
-(BOOL)pipelineFetchAllChangesRequests;
-(void)setUseEncryption:(BOOL)arg1 ;
-(BOOL)isAppleInternalInstall;
-(NSString *)automatedDeviceGroup;
-(void)setAutomatedDeviceGroup:(NSString *)arg1 ;
-(unsigned long long)maxBatchSize;
-(BOOL)compressRequests;
-(BOOL)enableMescal;
-(BOOL)sendDebugHeader;
-(id)testRunIDHeader;
-(id)containerIDToForceFatalManateeZoneDecryptionFailure;
-(BOOL)rollZonePCSIdentities;
-(BOOL)rollRecordPCSMasterKeys;
-(BOOL)useEnhancedPCSEncryptionContext;
-(int)PCSRetryCount;
-(BOOL)usePreauth;
-(unsigned long long)maxPackageDownloadsPerBatchWithDefaultValue:(unsigned long long)arg1 ;
-(unsigned long long)savedErrorCount;
-(double)minTTRPromptInterval;
-(id)setupBaseURL;
-(id)customCloudDBBaseURL;
-(id)customShareServiceBaseURL;
-(id)customDeviceServiceBaseURL;
-(id)customCodeServiceBaseURL;
-(id)customMetricsServiceBaseURL;
-(BOOL)logTrafficToTextFile;
-(BOOL)logTraffic;
-(unsigned long long)maxPackageUploadsPerBatchWithDefaultValue:(unsigned long long)arg1 ;
-(double)packageGCPeriod;
-(BOOL)rollRecordMasterKeysOnUnshare;
-(BOOL)useModTimeInAssetCacheEviction;
-(BOOL)evictRecentAssets;
-(unsigned long long)assetEvictionGracePeriodWithDefaultValue:(unsigned long long)arg1 ;
-(unsigned long long)assetEvictionGracePeriodOnHighWatermarkWithDefaultValue:(unsigned long long)arg1 ;
-(BOOL)enableMMCSMetricsWithDefaultValue:(BOOL)arg1 ;
-(id)configBaseURL;
-(BOOL)allowExpiredDNSBehavior;
-(BOOL)shouldDecryptRecordsBeforeSave;
-(int)backgroundSessionConnectionPoolLimitWithDefaultValue:(int)arg1 ;
-(id)recordNamesForFakingDecryptionFailure;
-(double)maximumQueuedFetchWaitTime;
-(double)sqlBatchTime;
-(BOOL)shouldProfileSQL;
-(NSUserDefaults *)automatedDeviceGroupDefaults;
-(void)setAutomatedDeviceGroupDefaults:(NSUserDefaults *)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)_init;
-(id)buildVersion;
@end

