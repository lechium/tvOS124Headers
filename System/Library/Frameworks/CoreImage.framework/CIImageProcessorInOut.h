/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLTexture;
#import <CoreImage/CoreImage-Structs.h>
@interface CIImageProcessorInOut : NSObject {

	CGRect _region;
	IOSurfaceRef _surface;
	BOOL _usesSRGB;
	Context* _context;
	id<MTLTexture> _mtlTexture;
	BOOL _surfaceLocked;

}

@property (nonatomic,readonly) CGRect region;                               //@synthesize region=_region - In the implementation block
@property (nonatomic,readonly) IOSurfaceRef surface; 
@property (nonatomic,readonly) BOOL usesSRGBTransferFunction; 
@property (nonatomic,readonly) CVBufferRef pixelBuffer; 
@property (nonatomic,readonly) unsigned long long bytesPerRow; 
@property (nonatomic,readonly) int format; 
@property (nonatomic,readonly) void* device; 
-(IOSurfaceRef)surface;
-(BOOL)usesSRGBTransferFunction;
-(id)initWithSurface:(IOSurfaceRef)arg1 texture:(Texture*)arg2 allowSRGB:(BOOL)arg3 bounds:(CGRect)arg4 context:(Context*)arg5 ;
-(CVBufferRef)pixelBuffer;
-(void*)device;
-(void)dealloc;
-(id)description;
-(CGRect)region;
-(int)format;
-(unsigned long long)bytesPerRow;
@end

