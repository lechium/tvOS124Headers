/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVPhotoSources.framework/TVPhotoSources
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPhotoSources/TVPhotoAsset.h>

@class NSURL, NSDate, NSDictionary, NSString;

@interface TVMutablePhotoAsset : TVPhotoAsset

@property (nonatomic,copy) NSURL * fullResolutionURL; 
@property (nonatomic,copy) NSDate * dateCreated; 
@property (nonatomic,copy) NSDictionary * HTTPHeaderFields; 
@property (assign,nonatomic) BOOL isTemporaryFile; 
@property (nonatomic,copy) NSString * assetIdentifier; 
-(void)setAssetIdentifier:(NSString *)arg1 ;
-(void)setDateCreated:(NSDate *)arg1 ;
-(void)setFullResolutionURL:(NSURL *)arg1 ;
-(void)setHTTPHeaderFields:(NSDictionary *)arg1 ;
-(void)setIsTemporaryFile:(BOOL)arg1 ;
@end

