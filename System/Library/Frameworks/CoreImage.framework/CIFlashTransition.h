/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, CIColor, NSNumber;

@interface CIFlashTransition : CIFilter {

	CIImage* inputImage;
	CIImage* inputTargetImage;
	CIVector* inputCenter;
	CIVector* inputExtent;
	CIColor* inputColor;
	NSNumber* inputTime;
	NSNumber* inputMaxStriationRadius;
	NSNumber* inputStriationStrength;
	NSNumber* inputStriationContrast;
	NSNumber* inputFadeThreshold;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputTargetImage; 
@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) CIVector * inputExtent; 
@property (nonatomic,retain) CIColor * inputColor; 
@property (nonatomic,retain) NSNumber * inputTime; 
@property (nonatomic,retain) NSNumber * inputMaxStriationRadius; 
@property (nonatomic,retain) NSNumber * inputStriationStrength; 
@property (nonatomic,retain) NSNumber * inputStriationContrast; 
@property (nonatomic,retain) NSNumber * inputFadeThreshold; 
+(id)customAttributes;
-(CIVector *)inputExtent;
-(void)setInputExtent:(CIVector *)arg1 ;
-(CIVector *)inputCenter;
-(CIImage *)inputTargetImage;
-(NSNumber *)inputTime;
-(void)setInputCenter:(CIVector *)arg1 ;
-(NSNumber *)inputStriationStrength;
-(NSNumber *)inputStriationContrast;
-(NSNumber *)inputMaxStriationRadius;
-(id)_geomKernel;
-(id)_colorKernel;
-(void)setInputTargetImage:(CIImage *)arg1 ;
-(void)setInputMaxStriationRadius:(NSNumber *)arg1 ;
-(void)setInputStriationStrength:(NSNumber *)arg1 ;
-(void)setInputStriationContrast:(NSNumber *)arg1 ;
-(NSNumber *)inputFadeThreshold;
-(void)setInputFadeThreshold:(NSNumber *)arg1 ;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setInputTime:(NSNumber *)arg1 ;
-(CIColor *)inputColor;
-(void)setInputColor:(CIColor *)arg1 ;
-(id)outputImage;
@end

