/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, AVCameraCalibrationData, NSNumber;

@interface CICameraCalibrationLensCorrection : CIFilter {

	CIImage* inputImage;
	AVCameraCalibrationData* inputAVCameraCalibrationData;
	NSNumber* inputUseInverseLookUpTable;

}
+(id)customAttributes;
-(CGPoint)ReferenceensDistortionPointForPoint:(CGPoint)arg1 lookupTable:(id)arg2 distortionOpticalCenter:(CGPoint)arg3 imageSize:(CGSize)arg4 ;
-(CGRect)regionOf:(int)arg1 destRect:(CGRect)arg2 userInfo:(id)arg3 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)outputImage;
@end
