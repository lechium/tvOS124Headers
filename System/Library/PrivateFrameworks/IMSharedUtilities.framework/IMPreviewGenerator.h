/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <IMSharedUtilities/IMPreviewGeneratorProtocol.h>
#import <IMSharedUtilities/IMUTITypeInformation.h>

@interface IMPreviewGenerator : NSObject <IMPreviewGeneratorProtocol, IMUTITypeInformation>
+(id)UTITypes;
+(CGImageRef)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 error:(id*)arg3 ;
+(double)_scaleFactorForThumbnailWithSize:(CGSize)arg1 constraints:(IMPreviewConstraints)arg2 targetPxSize:(CGSize)arg3 ;
+(CGRect)_scaledTargetRectForSize:(CGSize)arg1 andThumbnailSize:(CGSize)arg2 ;
+(BOOL)shouldShadePreview;
+(BOOL)shouldScaleUpPreview;
+(id)previewExtension;
+(BOOL)writesToDisk;
+(double)maxUpScale;
+(id)generateAndPersistPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 error:(id*)arg3 ;
+(CGImageRef)newCroppedAndRescaledImageFromImage:(CGImageRef)arg1 constraints:(IMPreviewConstraints)arg2 targetPxSize:(CGSize)arg3 ;
@end

