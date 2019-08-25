/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, NSNumber;

@interface RAWAdjustExposureAndBias : RAWFilter {

	CIImage* inputImage;
	id inputColorSpace;
	NSNumber* inputBaselineExposure;
	NSNumber* inputExposure;
	NSNumber* inputBias;

}
+(id)customAttributes;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)setInputExposure:(id)arg1 ;
-(id)customAttributes;
-(void)setInputBias:(id)arg1 ;
-(id)outputMatrix;
-(id)outputImage;
@end

