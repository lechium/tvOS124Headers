/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@class CIBlendKernel;

@interface CIRenderDestination : NSObject {

	void* _priv;

}

@property (readonly) unsigned long long width; 
@property (readonly) unsigned long long height; 
@property (assign) unsigned long long alphaMode; 
@property (getter=isFlipped) BOOL flipped; 
@property (getter=isDithered) BOOL dithered; 
@property (getter=isClamped) BOOL clamped; 
@property (assign,nonatomic) CGColorSpaceRef colorSpace; 
@property (nonatomic,retain) CIBlendKernel * blendKernel; 
@property (assign) BOOL blendsInDestinationColorSpace; 
-(CIRenderDestinationInternal*)_internalRepresentation;
-(void)setAlphaMode:(unsigned long long)arg1 ;
-(void)setClamped:(BOOL)arg1 ;
-(RenderDestination*)_internalRenderDestination;
-(id)_initWithInternalRenderDestination:(RenderDestination*)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 format:(int)arg4 colorspace:(CGColorSpaceRef)arg5 ;
-(RenderTask*)_render:(Image*)arg1 withContext:(Context*)arg2 ;
-(id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned)arg3 colorSpace:(CGColorSpaceRef)arg4 pixelBufferProvider:(/*^block*/id)arg5 ;
-(id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned)arg3 colorSpace:(CGColorSpaceRef)arg4 surfaceProvider:(/*^block*/id)arg5 ;
-(id)initWithMTLTexture:(id)arg1 commandBuffer:(id)arg2 ;
-(id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned long long)arg3 commandBuffer:(id)arg4 mtlTextureProvider:(/*^block*/id)arg5 ;
-(id)initWithGLTexture:(unsigned)arg1 target:(unsigned)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 ;
-(id)initWithBitmapData:(void*)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 format:(int)arg5 ;
-(unsigned long long)alphaMode;
-(BOOL)isDithered;
-(void)setDithered:(BOOL)arg1 ;
-(int)ditherDepth;
-(BOOL)isClamped;
-(CIBlendKernel *)blendKernel;
-(void)setBlendKernel:(CIBlendKernel *)arg1 ;
-(BOOL)blendsInDestinationColorSpace;
-(void)setBlendsInDestinationColorSpace:(BOOL)arg1 ;
-(id)imageRepresentation;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 ;
-(BOOL)isFlipped;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(void)setFlipped:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(unsigned long long)width;
-(unsigned long long)height;
-(id)label;
-(CGColorSpaceRef)colorSpace;
-(int)format;
-(id)initWithIOSurface:(id)arg1 ;
-(void)setLabel:(id)arg1 ;
@end

