/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface _DKSyncPolicy : NSObject {

	BOOL _syncDisabled;
	BOOL _alwaysSyncUpAndDown;
	BOOL _pushTriggersSync;
	BOOL _forceSync;
	unsigned long long _assetThresholdInBytes;
	unsigned long long _firstSyncPeriodInDays;
	unsigned long long _maxSyncDownIntervalInDays;
	unsigned long long _minSyncIntervalInSeconds;
	unsigned long long _minSyncsPerDay;
	unsigned long long _maxSyncsPerDay;
	unsigned long long _numChangesTriggeringSync;
	unsigned long long _singleDeviceSyncIntervalInDays;
	NSArray* _streamNamesWithAdditionsTriggeringSync;
	NSArray* _streamNamesWithDeletionsTriggeringSync;
	unsigned long long _syncTimeoutInSeconds;
	unsigned long long _triggeredSyncDelayInSeconds;
	unsigned long long _policyDownloadIntervalInDays;

}

@property (assign,nonatomic) BOOL syncDisabled;                                              //@synthesize syncDisabled=_syncDisabled - In the implementation block
@property (assign,nonatomic) BOOL alwaysSyncUpAndDown;                                       //@synthesize alwaysSyncUpAndDown=_alwaysSyncUpAndDown - In the implementation block
@property (assign,nonatomic) unsigned long long assetThresholdInBytes;                       //@synthesize assetThresholdInBytes=_assetThresholdInBytes - In the implementation block
@property (assign,nonatomic) unsigned long long firstSyncPeriodInDays;                       //@synthesize firstSyncPeriodInDays=_firstSyncPeriodInDays - In the implementation block
@property (assign,nonatomic) unsigned long long maxSyncDownIntervalInDays;                   //@synthesize maxSyncDownIntervalInDays=_maxSyncDownIntervalInDays - In the implementation block
@property (assign,nonatomic) unsigned long long minSyncIntervalInSeconds;                    //@synthesize minSyncIntervalInSeconds=_minSyncIntervalInSeconds - In the implementation block
@property (assign,nonatomic) unsigned long long minSyncsPerDay;                              //@synthesize minSyncsPerDay=_minSyncsPerDay - In the implementation block
@property (assign,nonatomic) unsigned long long maxSyncsPerDay;                              //@synthesize maxSyncsPerDay=_maxSyncsPerDay - In the implementation block
@property (assign,nonatomic) unsigned long long numChangesTriggeringSync;                    //@synthesize numChangesTriggeringSync=_numChangesTriggeringSync - In the implementation block
@property (assign,nonatomic) unsigned long long policyDownloadIntervalInDays;                //@synthesize policyDownloadIntervalInDays=_policyDownloadIntervalInDays - In the implementation block
@property (assign,nonatomic) BOOL pushTriggersSync;                                          //@synthesize pushTriggersSync=_pushTriggersSync - In the implementation block
@property (assign,nonatomic) unsigned long long singleDeviceSyncIntervalInDays;              //@synthesize singleDeviceSyncIntervalInDays=_singleDeviceSyncIntervalInDays - In the implementation block
@property (nonatomic,retain) NSArray * streamNamesWithAdditionsTriggeringSync;               //@synthesize streamNamesWithAdditionsTriggeringSync=_streamNamesWithAdditionsTriggeringSync - In the implementation block
@property (nonatomic,retain) NSArray * streamNamesWithDeletionsTriggeringSync;               //@synthesize streamNamesWithDeletionsTriggeringSync=_streamNamesWithDeletionsTriggeringSync - In the implementation block
@property (assign,nonatomic) unsigned long long syncTimeoutInSeconds;                        //@synthesize syncTimeoutInSeconds=_syncTimeoutInSeconds - In the implementation block
@property (assign,nonatomic) unsigned long long triggeredSyncDelayInSeconds;                 //@synthesize triggeredSyncDelayInSeconds=_triggeredSyncDelayInSeconds - In the implementation block
@property (assign,nonatomic) BOOL forceSync;                                                 //@synthesize forceSync=_forceSync - In the implementation block
+(id)policyFromDictionary:(id)arg1 ;
+(void)possiblyDownloadSyncPolicyWithPolicyDownloadIntervalInDays:(unsigned long long)arg1 ;
+(void)handleDownloadSyncPolicyResponse:(id)arg1 data:(id)arg2 error:(id)arg3 ;
+(id)forceSyncPolicy;
+(id)configurationPlist;
+(id)syncPolicyConfigPath;
+(id)policy;
+(id)userDefaults;
-(BOOL)syncDisabled;
-(void)setSyncDisabled:(BOOL)arg1 ;
-(void)setMaxSyncDownIntervalInDays:(unsigned long long)arg1 ;
-(void)setMinSyncIntervalInSeconds:(unsigned long long)arg1 ;
-(void)setMinSyncsPerDay:(unsigned long long)arg1 ;
-(void)setMaxSyncsPerDay:(unsigned long long)arg1 ;
-(void)setNumChangesTriggeringSync:(unsigned long long)arg1 ;
-(void)setPolicyDownloadIntervalInDays:(unsigned long long)arg1 ;
-(void)setPushTriggersSync:(BOOL)arg1 ;
-(void)setSingleDeviceSyncIntervalInDays:(unsigned long long)arg1 ;
-(void)setStreamNamesWithAdditionsTriggeringSync:(NSArray *)arg1 ;
-(void)setStreamNamesWithDeletionsTriggeringSync:(NSArray *)arg1 ;
-(void)setSyncTimeoutInSeconds:(unsigned long long)arg1 ;
-(void)setTriggeredSyncDelayInSeconds:(unsigned long long)arg1 ;
-(BOOL)pushTriggersSync;
-(unsigned long long)minSyncsPerDay;
-(unsigned long long)maxSyncsPerDay;
-(double)hoursBetweenSyncsWhenIsSingleDevice:(BOOL)arg1 ;
-(unsigned long long)singleDeviceSyncIntervalInDays;
-(unsigned long long)maxSyncDownIntervalInDays;
-(unsigned long long)minSyncIntervalInSeconds;
-(unsigned long long)numChangesTriggeringSync;
-(unsigned long long)policyDownloadIntervalInDays;
-(NSArray *)streamNamesWithAdditionsTriggeringSync;
-(NSArray *)streamNamesWithDeletionsTriggeringSync;
-(unsigned long long)syncTimeoutInSeconds;
-(unsigned long long)triggeredSyncDelayInSeconds;
-(void)setForceSync:(BOOL)arg1 ;
-(id)queryStartDateFromLastDaySyncDates:(id)arg1 lastSyncDate:(id)arg2 isSingleDevice:(BOOL)arg3 isTriggeredSync:(BOOL)arg4 ;
-(BOOL)alwaysSyncUpAndDown;
-(void)setAlwaysSyncUpAndDown:(BOOL)arg1 ;
-(id)initWithSyncDisabled:(id)arg1 alwaysSyncUpAndDown:(id)arg2 assetThresholdInBytes:(id)arg3 firstSyncPeriodInDays:(id)arg4 maxSyncDownIntervalInDays:(id)arg5 minSyncIntervalInSeconds:(id)arg6 minSyncsPerDay:(id)arg7 maxSyncsPerDay:(id)arg8 numChangesTriggeringSync:(id)arg9 policyDownloadIntervalInDays:(id)arg10 pushTriggersSync:(id)arg11 singleDeviceSyncIntervalInDays:(id)arg12 streamNamesWithAdditionsTriggeringSync:(id)arg13 streamNamesWithDeletionsTriggeringSync:(id)arg14 syncTimeoutInSeconds:(id)arg15 triggeredSyncDelayInSeconds:(id)arg16 ;
-(unsigned long long)firstSyncPeriodInDays;
-(unsigned long long)assetThresholdInBytes;
-(void)setAssetThresholdInBytes:(unsigned long long)arg1 ;
-(void)setFirstSyncPeriodInDays:(unsigned long long)arg1 ;
-(BOOL)forceSync;
-(id)description;
@end

