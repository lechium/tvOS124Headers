/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideosUI/VideosUI-Structs.h>
@interface VUIUtilities : NSObject
+(TVCornerRadii)imageCornerRadiiWithStyle:(long long)arg1 ;
+(id)placeholderImageResourceName:(long long)arg1 ;
+(double)imageCornerRadiusWithStyle:(long long)arg1 ;
+(long long)textAlignmentWithSemanticContentAttribute:(long long)arg1 ;
+(BOOL)isAXLargeEnabled:(id)arg1 ;
+(BOOL)isAXSmallEnabled:(id)arg1 ;
+(double)scaleContentSizeValue:(double)arg1 forTraitCollection:(id)arg2 ;
+(void)gradientConfigForCollection:(id)arg1 gradientMask:(long long)arg2 properties:(id)arg3 configuration:(SCD_Struct_VU7*)arg4 ;
+(double)scaleContentSizeValue:(double)arg1 forTraitCollection:(id)arg2 maximumContentSizeCategory:(id)arg3 ;
+(id)colorFromRGBStr:(id)arg1 ;
+(long long)interfaceStyleFromTheme:(id)arg1 defaultInterfaceStyle:(long long)arg2 ;
+(id)VideosUIBundle;
+(double)libraryCategoryListWidth;
+(BOOL)shouldInvalidateLayoutWithPreviousTraitCollection:(id)arg1 newTraitCollection:(id)arg2 ;
+(CGSize)imageSizeWithAspectRatio:(double)arg1 scaleToSize:(CGSize)arg2 ;
+(BOOL)contentSizeCategoryIsAccessibility:(id)arg1 ;
+(BOOL)isIpadLayout;
+(id)randomColor;
+(id)createImageProxyForResourceObject:(id)arg1 imageSize:(CGSize)arg2 ;
+(unsigned long long)minimumNumberOfItemsToEnableSeeAllButton;
+(double)libraryListMarginToGrid;
+(id)colorFromHexStr:(id)arg1 ;
@end

