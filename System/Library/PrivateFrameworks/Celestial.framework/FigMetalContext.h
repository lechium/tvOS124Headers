/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLCommandQueue, MTLLibrary, MTLCommandBuffer, MTLBuffer;
#import <Celestial/Celestial-Structs.h>
@class MTLVertexDescriptor;

@interface FigMetalContext : NSObject {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	id<MTLLibrary> _library;
	id<MTLCommandBuffer> _commandBuffer;
	id<MTLBuffer> _fullRangeVertexBuf;
	MTLVertexDescriptor* _fullRangeVertexDesc;

}

@property (nonatomic,retain) id<MTLDevice> device;                                   //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) id<MTLCommandQueue> commandQueue;                       //@synthesize commandQueue=_commandQueue - In the implementation block
@property (nonatomic,retain) id<MTLLibrary> library;                                 //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) id<MTLCommandBuffer> commandBuffer;                     //@synthesize commandBuffer=_commandBuffer - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> fullRangeVertexBuf;                       //@synthesize fullRangeVertexBuf=_fullRangeVertexBuf - In the implementation block
@property (nonatomic,retain) MTLVertexDescriptor * fullRangeVertexDesc;              //@synthesize fullRangeVertexDesc=_fullRangeVertexDesc - In the implementation block
-(id<MTLCommandBuffer>)commandBuffer;
-(void)insertDebugCaptureBoundary;
-(id<MTLCommandQueue>)commandQueue;
-(int)commonInitWithOptionalCommandQueue:(id)arg1 ;
-(int)initRangeVertex;
-(void)commitAndWait;
-(BOOL)WriteMetalTextureToFile:(const char*)arg1 texture:(id)arg2 mipmapLevel:(int)arg3 ;
-(BOOL)ReadMetalTextureFromFile:(const char*)arg1 texture:(id)arg2 mipmapLevel:(int)arg3 ;
-(id)CreateMetalTextureFromFile:(const char*)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 ;
-(id)bindPixelBufferToMTL2DTexture:(CVBufferRef)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 plane:(unsigned long long)arg4 roi:(CGRect*)arg5 ;
-(unsigned long long)getPixelSizeInBytes:(unsigned long long)arg1 ;
-(id)bindPixelBufferToMTL2DTexture:(CVBufferRef)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 plane:(unsigned long long)arg4 ;
-(id)bindIOSurfaceToMTL2DTexture:(IOSurfaceRef)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 plane:(unsigned long long)arg6 ;
-(id)bindPixelBufferToMTL2DTexture:(CVBufferRef)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 textureSize:(CGSize)arg4 plane:(unsigned long long)arg5 ;
-(id)rebindTex:(id)arg1 format:(unsigned long long)arg2 usage:(unsigned long long)arg3 plane:(int)arg4 xFactor:(int)arg5 ;
-(id)create2DTextureFromBuffer:(id)arg1 offset:(unsigned long long)arg2 width:(int)arg3 height:(int)arg4 format:(unsigned long long)arg5 usage:(unsigned long long)arg6 ;
-(id)initWithbundle:(id)arg1 andOptionalCommandQueue:(id)arg2 ;
-(id)initWithLibraryData:(char*)arg1 ofSize:(unsigned long long)arg2 andOptionalCommandQueue:(id)arg3 ;
-(void)waitForIdle;
-(void)waitForSchedule;
-(BOOL)WriteMetalTextureToFile:(const char*)arg1 texture:(id)arg2 ;
-(BOOL)ReadMetalTextureFromFile:(const char*)arg1 texture:(id)arg2 ;
-(id)CreateMetalTextureFromFile:(const char*)arg1 pixelFormat:(unsigned long long)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 ;
-(id)bindPixelBufferToMTL2DTexture:(CVBufferRef)arg1 pixelFormat:(unsigned long long)arg2 plane:(unsigned long long)arg3 roi:(CGRect*)arg4 ;
-(id)bindPixelBufferToMTL2DTexture:(CVBufferRef)arg1 pixelFormat:(unsigned long long)arg2 plane:(unsigned long long)arg3 ;
-(id)bindPixelBufferToMTL2DTexture:(CVBufferRef)arg1 pixelFormat:(unsigned long long)arg2 textureSize:(CGSize)arg3 plane:(unsigned long long)arg4 ;
-(id)bindIOSurfaceToMTL2DTexture:(IOSurfaceRef)arg1 pixelFormat:(unsigned long long)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 plane:(unsigned long long)arg5 ;
-(id)rebindTex:(id)arg1 roi:(const CGRect*)arg2 ;
-(id)rebindTex:(id)arg1 format:(unsigned long long)arg2 plane:(int)arg3 xFactor:(int)arg4 ;
-(void)prewarmInternalMetalShadersForFormatsList:(id)arg1 ;
-(id)create2DTextureFromBuffer:(id)arg1 offset:(unsigned long long)arg2 width:(int)arg3 height:(int)arg4 format:(unsigned long long)arg5 ;
-(void)setCommandQueue:(id<MTLCommandQueue>)arg1 ;
-(void)setCommandBuffer:(id<MTLCommandBuffer>)arg1 ;
-(id<MTLBuffer>)fullRangeVertexBuf;
-(void)setFullRangeVertexBuf:(id<MTLBuffer>)arg1 ;
-(MTLVertexDescriptor *)fullRangeVertexDesc;
-(void)setFullRangeVertexDesc:(MTLVertexDescriptor *)arg1 ;
-(int)setQueuePriority:(int)arg1 ;
-(id<MTLLibrary>)library;
-(void)setLibrary:(id<MTLLibrary>)arg1 ;
-(id<MTLDevice>)device;
-(void)setDevice:(id<MTLDevice>)arg1 ;
-(id)init;
-(void)commit;
@end

