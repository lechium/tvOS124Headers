/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector;

@interface CIDisintegrateWithMaskTransition : CIFilter {

	CIImage* inputImage;
	CIImage* inputTargetImage;
	CIImage* inputMaskImage;
	NSNumber* inputTime;
	NSNumber* inputShadowRadius;
	NSNumber* inputShadowDensity;
	CIVector* inputShadowOffset;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputTargetImage; 
@property (nonatomic,retain) CIImage * inputMaskImage; 
@property (nonatomic,retain) NSNumber * inputTime; 
@property (nonatomic,retain) NSNumber * inputShadowRadius; 
@property (nonatomic,retain) NSNumber * inputShadowDensity; 
@property (nonatomic,retain) CIVector * inputShadowOffset; 
+(id)customAttributes;
-(CIImage *)inputTargetImage;
-(NSNumber *)inputTime;
-(CIImage *)inputMaskImage;
-(void)setInputMaskImage:(CIImage *)arg1 ;
-(void)setInputTargetImage:(CIImage *)arg1 ;
-(id)_kernelG;
-(NSNumber *)inputShadowRadius;
-(void)setInputShadowRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputShadowDensity;
-(void)setInputShadowDensity:(NSNumber *)arg1 ;
-(CIVector *)inputShadowOffset;
-(void)setInputShadowOffset:(CIVector *)arg1 ;
-(id)_kernel;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setInputTime:(NSNumber *)arg1 ;
-(id)outputImage;
@end

