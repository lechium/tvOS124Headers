/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIFilter;

@interface BLAuraFilter : CIFilter {

	BOOL _needsReprocess;
	float _lastAmount;
	float _lastSaturationHighPoint;
	long long _lastVersion;
	CIImage* _inputImage;
	NSNumber* _inputAmount;
	NSNumber* _inputSaturationHighPoint;
	NSNumber* _inputVersion;
	CIFilter* _colorCubeFilter;

}

@property (nonatomic,retain) CIFilter * colorCubeFilter;                     //@synthesize colorCubeFilter=_colorCubeFilter - In the implementation block
@property (nonatomic,retain) CIImage * inputImage;                           //@synthesize inputImage=_inputImage - In the implementation block
@property (nonatomic,copy) NSNumber * inputAmount;                           //@synthesize inputAmount=_inputAmount - In the implementation block
@property (nonatomic,copy) NSNumber * inputSaturationHighPoint;              //@synthesize inputSaturationHighPoint=_inputSaturationHighPoint - In the implementation block
@property (nonatomic,copy) NSNumber * inputVersion;                          //@synthesize inputVersion=_inputVersion - In the implementation block
-(void)setInputAmount:(NSNumber *)arg1 ;
-(NSNumber *)inputAmount;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIFilter *)colorCubeFilter;
-(void)setColorCubeFilter:(CIFilter *)arg1 ;
-(NSNumber *)inputVersion;
-(void)setInputVersion:(NSNumber *)arg1 ;
-(void)setInputSaturationHighPoint:(NSNumber *)arg1 ;
-(NSNumber *)inputSaturationHighPoint;
-(void)setDefaults;
-(id)init;
-(id)outputImage;
@end

