/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLThumbnailUtilities : NSObject
+(BOOL)performSWDownscaleTo5551OnImage:(CGImageRef)arg1 withSpecification:(id)arg2 destinationData:(id*)arg3 imageRect:(CGRect*)arg4 bytesPerRow:(int*)arg5 ;
+(int)_bytesPerRowForWidthInPixels:(int)arg1 ;
+(int)_requiredDataLengthForSpecification:(id)arg1 ;
+(id)_destinationDataFromSpecification:(id)arg1 ;
+(id)_destinationDataArrayFromSpecifications:(id)arg1 ;
+(BOOL)_validateSpecifications:(id)arg1 destinationData:(id*)arg2 ;
+(BOOL)_validateSpecification:(id)arg1 destinationData:(id*)arg2 ;
+(BOOL)_performSWDownscaleTo5551OnSourceImage:(CGImageRef)arg1 withSourceDimensions:(SCD_Struct_PL12)arg2 withSpecification:(id)arg3 destinationData:(id)arg4 imageRect:(CGRect*)arg5 bytesPerRow:(int*)arg6 ;
+(BOOL)performHWCascadingDownscaleTo5551OnIOSurface:(IOSurfaceRef)arg1 withSpecifications:(id)arg2 destinationData:(id*)arg3 usingContext:(id)arg4 ;
+(BOOL)performSWCascadingDownscaleTo5551OnImage:(CGImageRef)arg1 withSpecifications:(id)arg2 destinationData:(id*)arg3 ;
@end

