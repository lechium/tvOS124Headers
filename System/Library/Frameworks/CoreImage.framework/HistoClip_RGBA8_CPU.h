/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface HistoClip_RGBA8_CPU : CIFilter {

	CIImage* inputImage;
	CIImage* inputCenterLeft;
	CIImage* inputCenterRight;
	CIVector* inputCenterExtentLeft;
	CIVector* inputCenterExtentRight;
	NSNumber* inputPercentileRepair;
	NSNumber* inputPercentileSpecular;
	NSNumber* inputPercentRepair;
	NSNumber* inputPercentSpecular;
	NSNumber* inputInterPeakMinRepair;
	NSNumber* inputAbortMaxCenterDist;
	NSNumber* inputMinDensity;
	NSNumber* inputMaxRelDensity;
	NSNumber* inputDensityRadius;
	NSNumber* inputMaxInterDispersion;
	CIVector* inputMinimum;
	CIVector* inputMaxArea;
	CIVector* inputMaxAreaRatio;
	CIVector* inputCenterOffsetLeft;
	CIVector* inputCenterOffsetRight;
	CIImage* inputDetectionLeft;
	CIImage* inputDetectionRight;
	NSNumber* inputTuning;

}

@property (nonatomic,retain) CIImage * inputCenterLeft; 
@property (nonatomic,retain) CIImage * inputCenterRight; 
@property (nonatomic,retain) CIVector * inputCenterExtentLeft; 
@property (nonatomic,retain) CIVector * inputCenterExtentRight; 
@property (nonatomic,retain) NSNumber * inputPercentileRepair; 
@property (nonatomic,retain) NSNumber * inputPercentileSpecular; 
@property (nonatomic,retain) NSNumber * inputPercentRepair; 
@property (nonatomic,retain) NSNumber * inputPercentSpecular; 
@property (nonatomic,retain) NSNumber * inputInterPeakMinRepair; 
@property (nonatomic,retain) NSNumber * inputAbortMaxCenterDist; 
@property (nonatomic,retain) NSNumber * inputMinDensity; 
@property (nonatomic,retain) NSNumber * inputMaxRelDensity; 
@property (nonatomic,retain) NSNumber * inputDensityRadius; 
@property (nonatomic,retain) NSNumber * inputMaxInterDispersion; 
@property (nonatomic,retain) CIVector * inputMinimum; 
@property (nonatomic,retain) CIVector * inputMaxArea; 
@property (nonatomic,retain) CIVector * inputMaxAreaRatio; 
@property (nonatomic,retain) CIVector * inputCenterOffsetLeft; 
@property (nonatomic,retain) CIVector * inputCenterOffsetRight; 
@property (nonatomic,retain) CIImage * inputDetectionLeft; 
@property (nonatomic,retain) CIImage * inputDetectionRight; 
@property (nonatomic,retain) NSNumber * inputTuning; 
-(CIImage *)inputCenterLeft;
-(void)setInputCenterLeft:(CIImage *)arg1 ;
-(CIImage *)inputCenterRight;
-(void)setInputCenterRight:(CIImage *)arg1 ;
-(CIVector *)inputCenterExtentLeft;
-(void)setInputCenterExtentLeft:(CIVector *)arg1 ;
-(CIVector *)inputCenterExtentRight;
-(void)setInputCenterExtentRight:(CIVector *)arg1 ;
-(NSNumber *)inputPercentileRepair;
-(void)setInputPercentileRepair:(NSNumber *)arg1 ;
-(NSNumber *)inputPercentileSpecular;
-(void)setInputPercentileSpecular:(NSNumber *)arg1 ;
-(NSNumber *)inputPercentRepair;
-(void)setInputPercentRepair:(NSNumber *)arg1 ;
-(NSNumber *)inputPercentSpecular;
-(void)setInputPercentSpecular:(NSNumber *)arg1 ;
-(NSNumber *)inputInterPeakMinRepair;
-(void)setInputInterPeakMinRepair:(NSNumber *)arg1 ;
-(NSNumber *)inputAbortMaxCenterDist;
-(void)setInputAbortMaxCenterDist:(NSNumber *)arg1 ;
-(NSNumber *)inputMinDensity;
-(void)setInputMinDensity:(NSNumber *)arg1 ;
-(NSNumber *)inputMaxRelDensity;
-(void)setInputMaxRelDensity:(NSNumber *)arg1 ;
-(NSNumber *)inputDensityRadius;
-(void)setInputDensityRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputMaxInterDispersion;
-(void)setInputMaxInterDispersion:(NSNumber *)arg1 ;
-(CIVector *)inputMinimum;
-(void)setInputMinimum:(CIVector *)arg1 ;
-(CIVector *)inputMaxArea;
-(void)setInputMaxArea:(CIVector *)arg1 ;
-(CIVector *)inputMaxAreaRatio;
-(void)setInputMaxAreaRatio:(CIVector *)arg1 ;
-(CIVector *)inputCenterOffsetLeft;
-(void)setInputCenterOffsetLeft:(CIVector *)arg1 ;
-(CIVector *)inputCenterOffsetRight;
-(void)setInputCenterOffsetRight:(CIVector *)arg1 ;
-(CIImage *)inputDetectionLeft;
-(void)setInputDetectionLeft:(CIImage *)arg1 ;
-(CIImage *)inputDetectionRight;
-(void)setInputDetectionRight:(CIImage *)arg1 ;
-(NSNumber *)inputTuning;
-(void)setInputTuning:(NSNumber *)arg1 ;
-(id)outputImage;
@end

