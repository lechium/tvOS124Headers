/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIVector, CIColor, NSNumber;

@interface CILenticularHaloGenerator : CIFilter {

	CIVector* inputCenter;
	CIColor* inputColor;
	NSNumber* inputHaloRadius;
	NSNumber* inputHaloWidth;
	NSNumber* inputHaloOverlap;
	NSNumber* inputStriationStrength;
	NSNumber* inputStriationContrast;
	NSNumber* inputTime;

}
+(id)customAttributes;
-(id)_CILenticularHalo;
-(id)outputImage;
@end

