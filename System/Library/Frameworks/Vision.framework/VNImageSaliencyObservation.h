/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNPixelBufferObservation.h>

@class NSArray;

@interface VNImageSaliencyObservation : VNPixelBufferObservation {

	CGSize _mOriginalImageSize;
	NSArray* _mSalientObjects;
	CGRect _mSalientRegion;
	CGRect _mHighlySalientRegion;

}

@property (nonatomic,readonly) NSArray * salientObjects; 
@property (nonatomic,readonly) CGRect boundingBox; 
@property (nonatomic,readonly) CGRect narrowedBoundingBox; 
+(id)createNSDataDumpFrom64x64FloatPixelBuffer:(CVBufferRef)arg1 ;
+(CVBufferRef)create64x64FloatPixelBufferFromNSData:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)_computeSalientObjects;
-(void)_computeBoundingBoxes;
-(id)initWithRequestRevision:(unsigned long long)arg1 rawSaliencyImage:(CVBufferRef)arg2 originalImageSize:(CGSize)arg3 ;
-(CVBufferRef)createSaliencyImageAndReturnError:(id*)arg1 ;
-(NSArray *)salientObjects;
-(CGRect)narrowedBoundingBox;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)boundingBox;
@end
