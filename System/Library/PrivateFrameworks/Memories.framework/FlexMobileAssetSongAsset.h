/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/FlexCloudSongAsset.h>

@class NSString;

@interface FlexMobileAssetSongAsset : FlexCloudSongAsset {

	NSString* _mobileAssetTypeIdentifier;
	NSString* _mobileAssetPropertyType;

}

@property (readonly) NSString * mobileAssetTypeIdentifier;              //@synthesize mobileAssetTypeIdentifier=_mobileAssetTypeIdentifier - In the implementation block
@property (readonly) NSString * mobileAssetPropertyType;                //@synthesize mobileAssetPropertyType=_mobileAssetPropertyType - In the implementation block
-(BOOL)contentUpdateAvaliable;
-(long long)compatibilityVersionForAssetLocation:(unsigned long long)arg1 ;
-(long long)contentVersionForAssetLocation:(unsigned long long)arg1 ;
-(NSString *)mobileAssetPropertyType;
-(NSString *)mobileAssetTypeIdentifier;
-(id)_assetCachedMetadata;
-(id)initWithAssetID:(id)arg1 assetStatus:(unsigned long long)arg2 localURL:(id)arg3 cloudManager:(id)arg4 mobileAssetTypeIdentifier:(id)arg5 mobileAssetPropertyType:(id)arg6 contentVersion:(long long)arg7 compatibilityVersion:(long long)arg8 ;
@end

