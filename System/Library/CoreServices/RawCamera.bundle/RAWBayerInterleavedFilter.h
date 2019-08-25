/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, CIVector;

@interface RAWBayerInterleavedFilter : RAWFilter {

	CIImage* inputImage00;
	CIImage* inputImage01;
	CIImage* inputImage10;
	CIImage* inputImage11;
	CIVector* inputExtent;

}
-(id)outputImage;
@end

