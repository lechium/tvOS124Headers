/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIColor, CIVector, NSNumber;

@interface CICircleGenerator : CIFilter {

	CIColor* inputColor;
	CIVector* inputCenter;
	NSNumber* inputRadius;
	NSNumber* inputEdgeBlur;

}
+(id)customAttributes;
-(id)_CICircle;
-(id)outputImage;
@end

