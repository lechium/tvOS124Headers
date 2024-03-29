/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class FigM2MController;

@interface FigUtlROIProcessor : NSObject {

	int _originalWidth;
	int _originalHeight;
	CGRect _roiInPixels;
	CGRect _originalRectangle;
	int _orientation;
	FigM2MController* _m2m;
	int _width;
	int _height;
	CVBufferRef _pixelBuffer;
	CGRect _roiRectangle;
	SCD_Struct_Fi18 _originalToRoiMatrix;
	SCD_Struct_Fi18 _roiToOriginalMatrix;

}

@property (readonly) SCD_Struct_Fi18 originalToRoiMatrix;              //@synthesize originalToRoiMatrix=_originalToRoiMatrix - In the implementation block
@property (readonly) SCD_Struct_Fi18 roiToOriginalMatrix;              //@synthesize roiToOriginalMatrix=_roiToOriginalMatrix - In the implementation block
@property (readonly) CGRect roiRectangle;                              //@synthesize roiRectangle=_roiRectangle - In the implementation block
@property (readonly) CVBufferRef pixelBuffer;                          //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (readonly) int width;                                        //@synthesize width=_width - In the implementation block
@property (readonly) int height;                                       //@synthesize height=_height - In the implementation block
-(CGPoint)originalToRoi:(CGPoint)arg1 ;
-(CGPoint)roiToOriginal:(CGPoint)arg1 ;
-(SCD_Struct_Fi18)matrix:(int)arg1 rectangle:(CGRect)arg2 scaleX:(double)arg3 scaleY:(double)arg4 inverse:(SCD_Struct_Fi18*)arg5 ;
-(CGPoint)originalToRoiPixels:(CGPoint)arg1 ;
-(CGPoint)roiToOriginalPixels:(CGPoint)arg1 ;
-(id)initWithWidth:(int)arg1 height:(int)arg2 pixelFormat:(unsigned)arg3 ;
-(BOOL)processImage:(CVBufferRef)arg1 orientation:(int)arg2 rect:(CGRect)arg3 ;
-(SCD_Struct_Fi18)originalToRoiMatrix;
-(SCD_Struct_Fi18)roiToOriginalMatrix;
-(CGRect)roiRectangle;
-(CVBufferRef)pixelBuffer;
-(void)dealloc;
-(int)width;
-(int)height;
@end

