//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HBFlatIconCache : NSObject
{
}

+ (id)_foregroundImageForFolder:(id)arg1;	// IMP=0x000000010008417c
+ (id)_createAndCacheFlatFolderIconForName:(id)arg1 fromFolder:(id)arg2;	// IMP=0x0000000100083db0
+ (id)_cachedFlatFolderIconForName:(id)arg1;	// IMP=0x0000000100083b54
+ (id)_cacheFileNameForFolder:(id)arg1;	// IMP=0x0000000100083934
+ (void)_writeFlatIconToCache:(id)arg1 forApplication:(id)arg2;	// IMP=0x00000001000835a4
+ (id)_createAndCacheFlatIconForApplication:(id)arg1;	// IMP=0x000000010008330c
+ (id)_createAndCacheFlatIconForApplication:(id)arg1 withLayerImage:(id)arg2;	// IMP=0x0000000100082fdc
+ (id)_cachedFlatIconForApplication:(id)arg1;	// IMP=0x0000000100082de0
+ (id)_flatIconCacheDirectory;	// IMP=0x0000000100082cdc
+ (id)cacheKeyForApplication:(id)arg1;	// IMP=0x0000000100082c80
+ (id)flatForegroundIconForFolder:(id)arg1;	// IMP=0x0000000100082bc8
+ (id)flatPlaceholderIconForApplication:(id)arg1;	// IMP=0x00000001000829a4
+ (id)flatIconForApplication:(id)arg1 withLayerImage:(id)arg2;	// IMP=0x00000001000828f4
+ (id)flatIconForApplication:(id)arg1 withCornerRadius:(double)arg2;	// IMP=0x00000001000827a0
+ (id)flatIconForApplication:(id)arg1;	// IMP=0x00000001000826c0
+ (id)unfocusedFolderBackgroundImageWithInterfaceStyle:(long long)arg1;	// IMP=0x0000000100084c64
+ (id)focusedFolderBackgroundImageWithInterfaceStyle:(long long)arg1;	// IMP=0x0000000100084960
+ (id)defaultPlaceholderLayerIcon;	// IMP=0x0000000100084944
+ (_Bool)isApplePhotosApplication:(id)arg1;	// IMP=0x00000001000848ec
+ (id)imageWithImage:(id)arg1;	// IMP=0x0000000100084780

@end

