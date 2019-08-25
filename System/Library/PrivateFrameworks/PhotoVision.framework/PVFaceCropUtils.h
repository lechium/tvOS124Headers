/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoVision/PhotoVision-Structs.h>
@interface PVFaceCropUtils : NSObject
+(CGSize)faceCropDimensionsFromFaceCrop:(id)arg1 error:(id*)arg2 ;
+(id)newDictionaryRepresentationOfFaceCropDataFromFaceBox:(CGRect)arg1 andCropRegion:(CGRect)arg2 andGroupingIdentifier:(id)arg3 ;
+(CGImageMetadataRef)createOutputMetadataFromDictionary:(id)arg1 ;
+(id)newDictionaryWithCGImageSourceOptions;
+(id)newFaceCropFromCGImageSource:(const CGImageSourceRef)arg1 withFaceRect:(CGRect)arg2 groupingIdentifier:(id)arg3 error:(id*)arg4 ;
+(id)newDictionaryPopulatedWithFaceCropDataFromImageData:(id)arg1 ;
+(BOOL)isValidFaceCrop:(id)arg1 ;
+(id)newFaceCropFromImageURL:(id)arg1 withFaceRect:(CGRect)arg2 groupingIdentifier:(id)arg3 error:(id*)arg4 ;
+(id)newFaceCropFromImageData:(id)arg1 withFaceRect:(CGRect)arg2 groupingIdentifier:(id)arg3 error:(id*)arg4 ;
+(CGRect)faceBoundsFromFaceCrop:(id)arg1 error:(id*)arg2 ;
+(CGRect)cropBoundsInOriginalImageFromFaceCrop:(id)arg1 error:(id*)arg2 ;
+(id)groupingIdentifierFromFaceCrop:(id)arg1 error:(id*)arg2 ;
@end

