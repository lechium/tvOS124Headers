/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector;

@interface CISDOFHighlightRecovery : CIFilter {

	CIImage* inputImage;
	NSNumber* inputScale;
	NSNumber* inputApertureScaling;
	NSNumber* inputIterations;
	NSNumber* inputMaxBlur;
	CIVector* inputBlurRadius;
	CIVector* inputMaxIntensity;
	CIVector* inputMinIntensity;

}

@property (retain) CIImage * inputImage; 
@property (retain) NSNumber * inputScale; 
@property (retain) NSNumber * inputApertureScaling; 
@property (retain) NSNumber * inputIterations; 
@property (retain) NSNumber * inputMaxBlur; 
@property (retain) CIVector * inputBlurRadius; 
@property (retain) CIVector * inputMaxIntensity; 
@property (retain) CIVector * inputMinIntensity; 
+(id)customAttributes;
-(NSNumber *)inputMaxBlur;
-(void)setInputMaxBlur:(NSNumber *)arg1 ;
-(NSNumber *)inputApertureScaling;
-(void)setInputApertureScaling:(NSNumber *)arg1 ;
-(NSNumber *)inputIterations;
-(void)setInputIterations:(NSNumber *)arg1 ;
-(CIVector *)inputBlurRadius;
-(void)setInputBlurRadius:(CIVector *)arg1 ;
-(CIVector *)inputMaxIntensity;
-(void)setInputMaxIntensity:(CIVector *)arg1 ;
-(CIVector *)inputMinIntensity;
-(void)setInputMinIntensity:(CIVector *)arg1 ;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(id)outputImage;
@end
