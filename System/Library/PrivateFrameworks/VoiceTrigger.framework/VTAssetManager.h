/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class VTPolicy, NSObject;

@interface VTAssetManager : NSObject {

	VTPolicy* _enablePolicy;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(id)sharedInstance;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)installedAssetForLanguage:(id)arg1 ;
-(void)_fetchRemoteAssetForLanguage:(id)arg1 supportPremium:(BOOL)arg2 ;
-(id)_installedAssetForLanguage:(id)arg1 supportPremium:(BOOL)arg2 ;
-(id)_assetQueryForLanguage:(id)arg1 supportPremium:(BOOL)arg2 localOnly:(BOOL)arg3 ;
-(void)_updateFromRemoteToLocalAssets:(id)arg1 ;
-(id)_createPredicateForLanguage:(id)arg1 supportPremium:(BOOL)arg2 ;
-(void)_startDownloadingVoiceTriggerAsset:(id)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)assetForLanguage:(id)arg1 ;
-(void)_fetchRemoteMetaData;
-(BOOL)_isReadyToUse;
-(id)_findLatestInstalledAsset:(id)arg1 ;
-(void)_runAssetQuery:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_downloadAsset:(id)arg1 withComplete:(/*^block*/id)arg2 ;
-(id)_defaultDownloadOptions;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
@end

