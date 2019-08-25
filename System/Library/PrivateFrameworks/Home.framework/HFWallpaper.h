/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HFCroppedWallpaperInfo, NSString;

@interface HFWallpaper : NSObject <NSCopying> {

	long long _type;
	HFCroppedWallpaperInfo* _cropInfo;
	NSString* _assetIdentifier;

}

@property (nonatomic,copy) HFCroppedWallpaperInfo * cropInfo;                //@synthesize cropInfo=_cropInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetIdentifier;              //@synthesize assetIdentifier=_assetIdentifier - In the implementation block
@property (nonatomic,readonly) long long type;                               //@synthesize type=_type - In the implementation block
+(id)customWallpaperWithAssetIdentifier:(id)arg1 ;
+(CGSize)size;
-(NSString *)assetIdentifier;
-(id)sliceIdentifierForVariant:(long long)arg1 ;
-(id)initWithType:(long long)arg1 assetIdentifier:(id)arg2 cropInfo:(id)arg3 ;
-(HFCroppedWallpaperInfo *)cropInfo;
-(id)wallpaperIdentifier;
-(void)setCropInfo:(HFCroppedWallpaperInfo *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

