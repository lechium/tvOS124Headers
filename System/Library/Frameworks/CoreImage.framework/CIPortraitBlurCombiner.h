/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary;

@interface CIPortraitBlurCombiner : CIFilter {

	CIImage* inputImage;
	CIImage* inputBlurImage;
	CIImage* inputMatteImage;
	NSDictionary* inputTuningParameters;

}

@property (retain) CIImage * inputImage; 
@property (retain) CIImage * inputBlurImage; 
@property (retain) CIImage * inputMatteImage; 
@property (retain) NSDictionary * inputTuningParameters; 
-(NSDictionary *)inputTuningParameters;
-(void)setInputTuningParameters:(NSDictionary *)arg1 ;
-(id)_ourBlendKernelMetal;
-(CIImage *)inputMatteImage;
-(void)setInputMatteImage:(CIImage *)arg1 ;
-(id)nonMetalKernel;
-(id)nonMetalKernelYCC;
-(id)_blendKernel:(BOOL)arg1 ;
-(CIImage *)inputBlurImage;
-(void)setInputBlurImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
@end

