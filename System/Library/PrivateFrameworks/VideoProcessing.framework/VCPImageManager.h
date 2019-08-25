/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPImageManager : NSObject {

	FigPhotoDecompressionSessionRef _decodeSession;
	OpaqueVTPixelTransferSessionRef _transferSession;

}
+(BOOL)loggingEnabled;
+(id)sharedImageManager;
+(BOOL)canDecodeAcceleratedUniformTypeIdentifier:(id)arg1 ;
-(int)createPixelBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(int)arg3 pixelBuffer:(_CVBuffer*)arg4 ;
-(int)convertPixelBuffer:(_CVBuffer*)arg1 toPixelFormat:(int)arg2 ;
-(int)drawImage:(CGImageRef)arg1 withOrientation:(unsigned)arg2 maxDimension:(unsigned long long)arg3 pixelBuffer:(_CVBuffer*)arg4 ;
-(int)acceleratedDecodeImageData:(id)arg1 pixelFormat:(int)arg2 maxDimension:(unsigned long long)arg3 pixelBuffer:(_CVBuffer*)arg4 ;
-(int)decodeImageSource:(CGImageSourceRef)arg1 pixelFormat:(int)arg2 maxDimension:(unsigned long long)arg3 pixelBuffer:(_CVBuffer*)arg4 ;
-(id)dataForResource:(id)arg1 ;
-(CVBufferRef)pixelBufferWithFormat:(int)arg1 andMaxDimension:(unsigned long long)arg2 fromData:(id)arg3 withUniformTypeIdentifier:(id)arg4 ;
-(CVBufferRef)imageForResource:(id)arg1 pixelFormat:(int)arg2 ;
-(CVBufferRef)imageForResource:(id)arg1 pixelFormat:(int)arg2 maxDimension:(unsigned long long)arg3 ;
-(CVBufferRef)pixelBufferWithFormat:(int)arg1 fromImageURL:(id)arg2 ;
-(CVBufferRef)pixelBufferWithFormat:(int)arg1 andMaxDimension:(unsigned long long)arg2 fromImageURL:(id)arg3 ;
-(id)init;
-(void)dealloc;
@end

