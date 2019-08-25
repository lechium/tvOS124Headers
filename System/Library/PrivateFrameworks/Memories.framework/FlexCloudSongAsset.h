/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/FMSongAsset.h>

@class FlexCloudManager;

@interface FlexCloudSongAsset : FMSongAsset {

	FlexCloudManager* _cloudManager;

}

@property (readonly) FlexCloudManager * cloudManager;              //@synthesize cloudManager=_cloudManager - In the implementation block
-(void)cancelDownload;
-(unsigned long long)assetStatus;
-(BOOL)contentUpdateAvaliable;
-(void)requestDownload;
-(long long)compatibilityVersionForAssetLocation:(unsigned long long)arg1 ;
-(id)initWithAssetID:(id)arg1 assetStatus:(unsigned long long)arg2 localURL:(id)arg3 cloudManager:(id)arg4 contentVersion:(long long)arg5 compatibilityVersion:(long long)arg6 ;
-(long long)contentVersionForAssetLocation:(unsigned long long)arg1 ;
-(FlexCloudManager *)cloudManager;
-(BOOL)isCloudBacked;
-(void)purgeLocalCache;
@end
