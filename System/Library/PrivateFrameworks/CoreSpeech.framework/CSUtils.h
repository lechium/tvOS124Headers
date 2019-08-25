/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreSpeech/CoreSpeech-Structs.h>
@interface CSUtils : NSObject
+(id)timeStampWithSaltGrain;
+(id)deviceProductType;
+(id)deviceProductVersion;
+(BOOL)shouldDeinterleaveAudioOnCS;
+(void)removeLogFilesInDirectory:(id)arg1 matchingPattern:(id)arg2 beforeDays:(float)arg3 ;
+(void)clearLogFilesInDirectory:(id)arg1 matchingPattern:(id)arg2 exceedNumber:(unsigned long long)arg3 ;
+(id)deviceBuildVersion;
+(void)URLsInDirectory:(id)arg1 matchingPattern:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)_sortedURLsInDirectory:(id)arg1 matchingPattern:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)_contentsOfDirectoryAtURL:(id)arg1 matchingPattern:(id)arg2 includingPropertiesForKeys:(id)arg3 error:(id*)arg4 ;
+(unsigned)getNumElementInBitset:(unsigned long long)arg1 ;
+(id)convertToFloatLPCMBufFromShortLPCMBuf:(id)arg1 ;
+(void)iterateBitset:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
+(BOOL)supportCSTwoShotDecision;
+(AudioStreamBasicDescription)lpcmNarrowBandASBD;
+(AudioStreamBasicDescription)lpcmASBD;
+(double)getHostClockFrequency;
+(double)getHostClockFrequency;
+(double)getHostClockFrequency;
+(unsigned long long)secondsToHostTime:(float)arg1 ;
+(unsigned long long)secondsToHostTime:(float)arg1 ;
+(unsigned long long)secondsToHostTime:(float)arg1 ;
+(float)hostTimeToSeconds:(unsigned long long)arg1 ;
+(float)hostTimeToSeconds:(unsigned long long)arg1 ;
+(float)hostTimeToSeconds:(unsigned long long)arg1 ;
+(double)hostTimeToTimeInterval:(unsigned long long)arg1 ;
+(double)hostTimeToTimeInterval:(unsigned long long)arg1 ;
+(double)hostTimeToTimeInterval:(unsigned long long)arg1 ;
+(unsigned long long)hostTimeFromSampleCount:(unsigned long long)arg1 anchorHostTime:(unsigned long long)arg2 anchorSampleCount:(unsigned long long)arg3 ;
+(unsigned long long)hostTimeFromSampleCount:(unsigned long long)arg1 anchorHostTime:(unsigned long long)arg2 anchorSampleCount:(unsigned long long)arg3 ;
+(unsigned long long)hostTimeFromSampleCount:(unsigned long long)arg1 anchorHostTime:(unsigned long long)arg2 anchorSampleCount:(unsigned long long)arg3 ;
+(unsigned long long)sampleCountFromHostTime:(unsigned long long)arg1 anchorHostTime:(unsigned long long)arg2 anchorSampleCount:(unsigned long long)arg3 ;
+(unsigned long long)sampleCountFromHostTime:(unsigned long long)arg1 anchorHostTime:(unsigned long long)arg2 anchorSampleCount:(unsigned long long)arg3 ;
+(unsigned long long)sampleCountFromHostTime:(unsigned long long)arg1 anchorHostTime:(unsigned long long)arg2 anchorSampleCount:(unsigned long long)arg3 ;
+(unsigned long long)macHostTimeFromBridgeHostTime:(unsigned long long)arg1 ;
+(unsigned long long)macHostTimeFromBridgeHostTime:(unsigned long long)arg1 ;
+(unsigned long long)macHostTimeFromBridgeHostTime:(unsigned long long)arg1 ;
+(id)stringForCSSpIdType:(unsigned long long)arg1 ;
+(id)getSiriLanguageWithFallback:(id)arg1 ;
+(id)convertToShortLPCMBufFromFloatLPCMBuf:(id)arg1 ;
+(void)apply12dBGain:(id)arg1 ;
+(id)spIdSATModelDirForLocale:(id)arg1 spidType:(unsigned long long)arg2 ;
+(void)createDirectoryIfDoesNotExist:(id)arg1 ;
+(id)spIdSATAudioDirForLocale:(id)arg1 spidType:(unsigned long long)arg2 ;
+(id)spIdSATModelDirForLocale:(id)arg1 profileId:(id)arg2 spidType:(unsigned long long)arg3 ;
+(id)stringForInvocationStyle:(unsigned long long)arg1 ;
+(BOOL)spIdAudioLogsCountLimitReached;
+(BOOL)readAudioChunksFrom:(id)arg1 block:(/*^block*/id)arg2 ;
+(BOOL)supportHearstVoiceTrigger;
+(BOOL)supportJarvisVoiceTrigger;
+(BOOL)supportContinuousVoiceTrigger;
+(BOOL)shouldRunVTOnCS;
+(BOOL)supportBluetoothDeviceVoiceTrigger;
+(BOOL)supportSmartVolume;
+(BOOL)supportSelfTriggerSuppression;
+(BOOL)supportKeywordDetector;
+(BOOL)supportCircularBuffer;
+(BOOL)supportSessionActivateDelay;
+(BOOL)isRecordContextVoiceTrigger:(id)arg1 ;
+(BOOL)isRecordContextHearstVoiceTrigger:(id)arg1 ;
+(BOOL)isRecordContextJarvisVoiceTrigger:(id)arg1 ;
+(id)hearstVoiceTriggerRecordContext:(id)arg1 ;
+(id)jarvisVoiceTriggerRecordContext:(id)arg1 ;
+(id)opusRecordSettings;
+(id)voiceTriggerRecordContext;
+(id)lpcmRecordSettings;
+(BOOL)supportOpportunisticZLL;
+(BOOL)isRecordContextRaiseToSpeak:(id)arg1 ;
+(BOOL)supportHybridEndpointer;
+(id)getFixedHighPrioritySerialQueueWithLabel:(id)arg1 ;
+(BOOL)supportPhatic;
+(BOOL)shouldDelayPhaticForMyriadDecision;
+(AudioStreamBasicDescription)lpcmNonInterleavedWithRemoteVADASBD;
+(AudioStreamBasicDescription)lpcmInterleavedWithRemoteVADASBD;
+(AudioStreamBasicDescription)lpcmNonInterleavedASBD;
+(AudioStreamBasicDescription)lpcmInterleavedASBD;
+(BOOL)isRecordContextAutoPrompt:(id)arg1 ;
+(BOOL)isRecordContextSpeakerIdTrainingTrigger:(id)arg1 ;
+(BOOL)isRecordContextHearstDoubleTap:(id)arg1 ;
+(BOOL)isRecordContextJarvisButtonPress:(id)arg1 ;
+(id)speexRecordSettings;
+(id)assetHashInResourcePath:(id)arg1 ;
+(BOOL)isCurrentDeviceCompatibleWithVoiceProfileAt:(id)arg1 ;
+(id)spIdSATDirForLocale:(id)arg1 profileId:(id)arg2 spidType:(unsigned long long)arg3 ;
+(void)updateVoiceProfileVersionFileForLanguageCode:(id)arg1 ;
+(id)spIdSATDirForLocale:(id)arg1 ;
+(unsigned long long)deviceCategoryForDeviceProductType:(id)arg1 ;
+(unsigned long long)getCurrentVoiceProfileVersionForLanguageCode:(id)arg1 ;
+(id)deviceCategoryStringRepresentationForCategoryType:(unsigned long long)arg1 ;
+(BOOL)isCurrentDeviceCompatibleWithNewerVoiceProfileAt:(id)arg1 ;
+(AudioStreamBasicDescription)utteranceFileASBD;
+(BOOL)supportPremiumAssets;
+(id)spIdSATDirForLocale:(id)arg1 profileId:(id)arg2 ;
+(id)spIdSATAudioDirForLocale:(id)arg1 profileId:(id)arg2 spidType:(unsigned long long)arg3 ;
+(id)spIdAudioLogsDir;
+(id)spIdAudioLogsGradingDir;
+(id)spIdSiriDebugVTDataDirectory;
+(id)spIdSiriDebugVoiceProfileStoreRootDirectory;
+(id)spIdSiriDebugVoiceProfileStoreRootDirectoryForLocale:(id)arg1 ;
+(id)satConfigFileNameForCSSpIdType:(unsigned long long)arg1 ;
+(id)getProfileVersionFilePathForLanguageCode:(id)arg1 ;
+(unsigned long long)getVoiceProfileVersionFromVersionFilePath:(id)arg1 ;
+(unsigned long long)getVoiceProfileProductCategoryFromVersionFilePath:(id)arg1 ;
+(unsigned long long)spIdTypeForString:(id)arg1 ;
+(id)stringForCSSATRunMode:(unsigned long long)arg1 ;
+(id)spIdSATImplicitAudioCacheDirForLocale:(id)arg1 profileId:(id)arg2 ;
+(id)spIdVoiceProfileImportRootDir;
+(id)spIdSiriDebugGradingDataRootDirectory;
+(id)spIdSiriDebugTrainedUsersFilePathForLocale:(id)arg1 ;
+(id)spIdSiriDebugVoiceProfileRootDirectoryForProfile:(id)arg1 locale:(id)arg2 ;
+(id)spidAudioTrainUtterancesDir;
+(void)streamAudioFromFileUrl:(id)arg1 audioStreamBasicDescriptor:(AudioStreamBasicDescription)arg2 samplesPerStreamChunk:(unsigned long long)arg3 audioDataAvailableHandler:(/*^block*/id)arg4 ;
+(BOOL)isSpidAssetsAvailable;
+(unsigned long long)getCurrentVoiceProfileProductCategoryForLanguageCode:(id)arg1 ;
+(BOOL)checkIfMigrationNecessaryForCompatibilityVersion:(unsigned long long)arg1 forLanguageCode:(id)arg2 ;
+(BOOL)migrateVoiceProfileToVersion:(unsigned long long)arg1 forLanguageCode:(id)arg2 ;
+(AudioStreamBasicDescription)opusASBD;
+(AudioStreamBasicDescription)lpcmInt16ASBD;
+(BOOL)hasRemoteBuiltInMic;
+(id)alertMuteBehaviorDict;
+(id)alertMuteSettings;
+(BOOL)supportRaiseToSpeak;
+(BOOL)supportTTS;
+(id)rootQueueWithFixedPriority:(int)arg1 ;
+(BOOL)supportImplicitTraining;
+(BOOL)supportSAT;
+(BOOL)supportPremiumModel;
+(BOOL)hasRemoteCoreSpeech;
+(id)getFixedPrioritySerialQueueWithLabel:(id)arg1 fixedPriority:(int)arg2 ;
+(double)systemUpTime;
+(id)deviceUserAssignedName;
+(AudioStreamBasicDescription)lpcmInt16NarrowBandASBD;
+(AudioStreamBasicDescription)opusNarrowBandASBD;
+(AudioStreamBasicDescription)aiffFileASBD;
+(BOOL)isRecordContextHomeButtonPress:(id)arg1 ;
+(id)recordContextString:(id)arg1 ;
@end

