/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface CIDisparityPreprocV3 : CIFilter {

	CIImage* inputImage;
	CIImage* inputAlphaImage;

}

@property (retain) CIImage * inputImage; 
@property (retain) CIImage * inputAlphaImage; 
-(id)preprocKernel;
-(id)preprocKernelNoAlpha;
-(CIImage *)inputAlphaImage;
-(void)setInputAlphaImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
@end

