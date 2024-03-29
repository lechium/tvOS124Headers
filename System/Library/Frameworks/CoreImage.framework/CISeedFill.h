/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector;

@interface CISeedFill : CIFilter {

	CIImage* inputImage;
	CIImage* inputCenter;
	NSNumber* inputThreshold;
	CIVector* inputExtent;
	NSNumber* inputSplat;

}

@property (nonatomic,retain) CIImage * inputCenter; 
@property (nonatomic,retain) NSNumber * inputThreshold; 
@property (nonatomic,retain) CIVector * inputExtent; 
@property (nonatomic,retain) NSNumber * inputSplat; 
-(CIVector *)inputExtent;
-(void)setInputExtent:(CIVector *)arg1 ;
-(CIImage *)inputCenter;
-(void)setInputCenter:(CIImage *)arg1 ;
-(NSNumber *)inputThreshold;
-(void)setInputThreshold:(NSNumber *)arg1 ;
-(NSNumber *)inputSplat;
-(void)setInputSplat:(NSNumber *)arg1 ;
-(id)outputImage;
@end

