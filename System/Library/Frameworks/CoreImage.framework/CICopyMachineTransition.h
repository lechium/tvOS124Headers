/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, CIColor, NSNumber;

@interface CICopyMachineTransition : CIFilter {

	CIImage* inputImage;
	CIImage* inputTargetImage;
	CIVector* inputExtent;
	CIColor* inputColor;
	NSNumber* inputTime;
	NSNumber* inputAngle;
	NSNumber* inputWidth;
	NSNumber* inputOpacity;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputTargetImage; 
@property (nonatomic,retain) CIVector * inputExtent; 
@property (nonatomic,retain) CIColor * inputColor; 
@property (nonatomic,retain) NSNumber * inputTime; 
@property (nonatomic,retain) NSNumber * inputAngle; 
@property (nonatomic,retain) NSNumber * inputWidth; 
@property (nonatomic,retain) NSNumber * inputOpacity; 
+(id)customAttributes;
-(CIVector *)inputExtent;
-(void)setInputExtent:(CIVector *)arg1 ;
-(NSNumber *)inputAngle;
-(NSNumber *)inputWidth;
-(CIImage *)inputTargetImage;
-(NSNumber *)inputTime;
-(void)setInputAngle:(NSNumber *)arg1 ;
-(void)setInputWidth:(NSNumber *)arg1 ;
-(void)setInputTargetImage:(CIImage *)arg1 ;
-(NSNumber *)inputOpacity;
-(void)setInputOpacity:(NSNumber *)arg1 ;
-(id)_kernel;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setInputTime:(NSNumber *)arg1 ;
-(CIColor *)inputColor;
-(void)setInputColor:(CIColor *)arg1 ;
-(id)outputImage;
@end

