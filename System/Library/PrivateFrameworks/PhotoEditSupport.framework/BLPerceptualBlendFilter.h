/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface BLPerceptualBlendFilter : CIFilter {

	CIImage* _inputImage;
	CIImage* _inputBackgroundImage;
	CIImage* _inputMaskImage;

}

@property (retain) CIImage * inputImage;                        //@synthesize inputImage=_inputImage - In the implementation block
@property (retain) CIImage * inputBackgroundImage;              //@synthesize inputBackgroundImage=_inputBackgroundImage - In the implementation block
@property (retain) CIImage * inputMaskImage;                    //@synthesize inputMaskImage=_inputMaskImage - In the implementation block
-(CIImage *)inputMaskImage;
-(void)setInputMaskImage:(CIImage *)arg1 ;
-(CIImage *)inputBackgroundImage;
-(void)setInputBackgroundImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
@end

