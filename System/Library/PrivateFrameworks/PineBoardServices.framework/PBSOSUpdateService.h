/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PBSOSUpdateService : NSObject
+(id)sharedInstance;
-(void)cancelDownload:(/*^block*/id)arg1 ;
-(void)restore;
-(void)setManagerClientDelegate:(id)arg1 ;
-(void)isCheckingForUpdates:(/*^block*/id)arg1 ;
-(void)isDownloading:(/*^block*/id)arg1 ;
-(void)isUpdateRunningWithCompletion:(/*^block*/id)arg1 ;
-(void)isUpdate:(id)arg1 readyForInstallation:(/*^block*/id)arg2 ;
-(void)currentDownload:(/*^block*/id)arg1 ;
-(void)setAssetDownloadIsDiscretionary:(BOOL)arg1 ;
-(void)checkForUpdate;
-(void)checkForUpdateViaMDM;
-(void)checkForUpdatesWithOptions:(id)arg1 response:(/*^block*/id)arg2 ;
-(void)startDownload:(/*^block*/id)arg1 ;
-(void)purgeDownload:(/*^block*/id)arg1 ;
-(void)installUpdate:(id)arg1 withOptions:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(void)cancelUpdate;
-(void)obliterateDataPreservingPaths:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)purgeableAssetSpaceWithCompletion:(/*^block*/id)arg1 ;
-(void)purgeAssetsWithCompletion:(/*^block*/id)arg1 ;
-(void)setDelegate:(id)arg1 ;
@end

