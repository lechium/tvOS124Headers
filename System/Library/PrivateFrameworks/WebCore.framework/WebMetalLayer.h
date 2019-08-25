/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CAMetalLayer.h>

@interface WebMetalLayer : CAMetalLayer {

	GPULegacyDevice* _context;
	float _devicePixelRatio;

}

@property (assign,nonatomic) GPULegacyDevice* context;              //@synthesize context=_context - In the implementation block
-(CGImageRef)copyImageSnapshotWithColorSpace:(CGColorSpaceRef)arg1 ;
-(id)initWithGPUDevice:(GPULegacyDevice*)arg1 ;
-(void)setContext:(GPULegacyDevice*)arg1 ;
-(GPULegacyDevice*)context;
-(void)display;
@end

