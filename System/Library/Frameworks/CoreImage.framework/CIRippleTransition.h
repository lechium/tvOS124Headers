/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIRippleTransition : CIFilter {

	CIImage* inputImage;
	CIImage* inputTargetImage;
	CIImage* inputShadingImage;
	CIVector* inputCenter;
	CIVector* inputExtent;
	NSNumber* inputTime;
	NSNumber* inputWidth;
	NSNumber* inputScale;

}
+(id)customAttributes;
-(id)_CIRippleTransition;
-(id)outputImage;
@end
