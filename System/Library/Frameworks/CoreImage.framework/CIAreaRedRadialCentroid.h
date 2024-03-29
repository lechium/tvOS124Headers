/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIAreaRedCentroid.h>

@class CIImage, NSNumber;

@interface CIAreaRedRadialCentroid : CIAreaRedCentroid {

	CIImage* inputCenter;
	NSNumber* inputRadius;
	NSNumber* inputRadialMode;
	NSNumber* inputMinWeight;

}

@property (nonatomic,retain) CIImage * inputCenter; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputRadialMode; 
@property (nonatomic,retain) NSNumber * inputMinWeight; 
+(id)customAttributes;
-(CIImage *)inputCenter;
-(void)setInputCenter:(CIImage *)arg1 ;
-(id)_kernelCenter;
-(id)_kernelDisk;
-(id)_kernelGaussian;
-(NSNumber *)inputRadialMode;
-(void)setInputRadialMode:(NSNumber *)arg1 ;
-(NSNumber *)inputMinWeight;
-(void)setInputMinWeight:(NSNumber *)arg1 ;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputRadius;
-(id)outputImage;
@end

