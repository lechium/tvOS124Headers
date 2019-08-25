/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface __TVSUIWallpaperProxy : NSObject {

	NSString* _cacheKey;
	UIImage* _image;

}

@property (nonatomic,copy,readonly) NSString * cacheKey;              //@synthesize cacheKey=_cacheKey - In the implementation block
@property (nonatomic,readonly) UIImage * image;                       //@synthesize image=_image - In the implementation block
+(void)relinquishWallpaperProxy:(id)arg1 ;
+(id)acquireWallpaperProxyWithVariant:(long long)arg1 userInterfaceStyle:(long long)arg2 ;
+(id)_wallpaperWithImage:(id)arg1 cacheKey:(id)arg2 ;
+(void)initialize;
-(UIImage *)image;
-(NSString *)cacheKey;
@end

