/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@interface VNCreateSceneprintRequestConfiguration : VNImageBasedRequestConfiguration {

	BOOL _returnAllResults;
	BOOL _useCenterTileOnly;
	unsigned long long _imageCropAndScaleOption;

}

@property (assign,nonatomic) BOOL returnAllResults;                                   //@synthesize returnAllResults=_returnAllResults - In the implementation block
@property (assign,nonatomic) BOOL useCenterTileOnly;                                  //@synthesize useCenterTileOnly=_useCenterTileOnly - In the implementation block
@property (assign,nonatomic) unsigned long long imageCropAndScaleOption;              //@synthesize imageCropAndScaleOption=_imageCropAndScaleOption - In the implementation block
-(id)initWithRequestClass:(Class)arg1 ;
-(BOOL)returnAllResults;
-(unsigned long long)imageCropAndScaleOption;
-(void)setUseCenterTileOnly:(BOOL)arg1 ;
-(void)setReturnAllResults:(BOOL)arg1 ;
-(void)setImageCropAndScaleOption:(unsigned long long)arg1 ;
-(BOOL)useCenterTileOnly;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

