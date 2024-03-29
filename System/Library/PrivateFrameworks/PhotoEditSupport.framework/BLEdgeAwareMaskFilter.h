/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIFilter;

@interface BLEdgeAwareMaskFilter : CIFilter {

	float* _cubeData;
	SCD_Struct_BL9 _currentInputColor;
	CIFilter* _ciColorCubeFilter;
	SCD_Struct_BL9 _inputColor;

}

@property (assign) SCD_Struct_BL9 inputColor;              //@synthesize inputColor=_inputColor - In the implementation block
-(unsigned long long)dataLength;
-(void)setInputImage:(id)arg1 ;
-(BOOL)isDataUpToDate;
-(void)labFromRed:(float)arg1 green:(float)arg2 blue:(float)arg3 lunminance:(float*)arg4 a:(float*)arg5 b:(float*)arg6 ;
-(id)cubeData;
-(id)init;
-(void)dealloc;
-(SCD_Struct_BL9)inputColor;
-(void)setInputColor:(SCD_Struct_BL9)arg1 ;
-(id)outputImage;
@end

