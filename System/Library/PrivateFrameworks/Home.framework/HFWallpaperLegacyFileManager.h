/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface HFWallpaperLegacyFileManager : NSObject {

	NSURL* _wallpaperFolderURL;

}

@property (nonatomic,retain) NSURL * wallpaperFolderURL;              //@synthesize wallpaperFolderURL=_wallpaperFolderURL - In the implementation block
-(NSURL *)wallpaperFolderURL;
-(id)filenameForType:(long long)arg1 variant:(long long)arg2 ;
-(void)migrateCache:(/*^block*/id)arg1 ;
-(id)clearAllWallpapers;
-(void)setWallpaperFolderURL:(NSURL *)arg1 ;
-(id)init;
@end

