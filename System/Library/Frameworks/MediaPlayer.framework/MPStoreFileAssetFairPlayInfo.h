/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICStoreFileAssetFairPlayInfo, NSDictionary, NSData;

@interface MPStoreFileAssetFairPlayInfo : NSObject {

	ICStoreFileAssetFairPlayInfo* _internalInfo;

}

@property (nonatomic,copy,readonly) NSDictionary * responseSinfDictionary; 
@property (nonatomic,readonly) long long identifier; 
@property (nonatomic,copy,readonly) NSData * dpInfoData; 
@property (nonatomic,copy,readonly) NSData * pinfData; 
@property (nonatomic,copy,readonly) NSData * sinfData; 
@property (nonatomic,copy,readonly) NSData * sinf2Data; 
@property (nonatomic,copy,readonly) NSDictionary * purchaseBundleSinfDictionary; 
-(id)initWithiTunesCloudStoreFileAssetFairPlayInfo:(id)arg1 ;
-(id)initWithResponseSinfDictionary:(id)arg1 ;
-(NSDictionary *)responseSinfDictionary;
-(NSData *)dpInfoData;
-(NSData *)pinfData;
-(NSData *)sinfData;
-(NSData *)sinf2Data;
-(NSDictionary *)purchaseBundleSinfDictionary;
-(long long)identifier;
@end

