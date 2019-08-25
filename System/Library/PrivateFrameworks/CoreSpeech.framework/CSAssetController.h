/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSEventMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSObject, NSMutableDictionary, NSString;

@interface CSAssetController : NSObject <CSEventMonitorDelegate> {

	NSDictionary* _csAssetsDictionary;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _observers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getVoiceTriggerAssetTypeString;
+(id)getEndpointAssetTypeString;
+(id)predicateForAssetType:(unsigned long long)arg1 language:(id)arg2 ;
+(id)predicateForfetchRemoteMetadataForAssetType:(unsigned long long)arg1 ;
+(unsigned long long)getVoiceTriggerAssetCurrentCompatibilityVersion;
+(unsigned long long)getEndpointAssetCurrentCompatibilityVersion;
+(id)sharedController;
-(void)addObserver:(id)arg1 forAssetType:(unsigned long long)arg2 ;
-(id)assetOfType:(unsigned long long)arg1 language:(id)arg2 ;
-(id)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2 ;
-(void)assetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchRemoteMetaOfType:(unsigned long long)arg1 ;
-(void)removeObserver:(id)arg1 forAssetType:(unsigned long long)arg2 ;
-(void)CSEventMonitorDidReceiveEvent:(id)arg1 ;
-(BOOL)_isReadyToUse;
-(id)installedAssetOfType:(unsigned long long)arg1 withPredicate:(id)arg2 ;
-(void)_fetchRemoteAssetOfType:(unsigned long long)arg1 withPredicate:(id)arg2 localOnly:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)installedAssetOfType:(unsigned long long)arg1 withPredicate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_installedAssetOfType:(unsigned long long)arg1 withPredicate:(id)arg2 ;
-(void)_installedAssetOfType:(unsigned long long)arg1 withPredicate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_assetQueryForAssetType:(unsigned long long)arg1 withPredicate:(id)arg2 localOnly:(BOOL)arg3 ;
-(id)_findLatestInstalledAsset:(id)arg1 ;
-(void)_runAssetQuery:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateFromRemoteToLocalAssets:(id)arg1 forAssetType:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_downloadAsset:(id)arg1 withComplete:(/*^block*/id)arg2 ;
-(void)_startDownloadingAsset:(id)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_defaultDownloadOptions;
-(id)init;
@end

