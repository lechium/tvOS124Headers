/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/BWFilterRenderer.h>

@protocol OS_dispatch_queue, MTLCommandQueue;
@class NSObject, CIContext, NSString;

@interface BWCoreImageFilterRenderer : NSObject <BWFilterRenderer> {

	BOOL _usingDepth;
	NSObject*<OS_dispatch_queue> _renderingQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	CIContext* _renderingQueueContext;
	id<MTLCommandQueue> _metalCommandQueue;

}

@property (nonatomic,readonly) BOOL usingDepth;                              //@synthesize usingDepth=_usingDepth - In the implementation block
@property (nonatomic,retain) CIContext * renderingQueueContext;              //@synthesize renderingQueueContext=_renderingQueueContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,readonly) short type; 
@property (nonatomic,readonly) BOOL supportsAnimation; 
@property (nonatomic,readonly) BOOL adjustsMetadata; 
+(void)prePrewarm;
+(void)prewarm;
+(void)initialize;
-(int)prepareForRenderingWithParameters:(id)arg1 inputVideoFormat:(id)arg2 inputDepthFormat:(id)arg3 ;
-(void)renderUsingParameters:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 inputSampleBuffer:(opaqueCMSampleBufferRef)arg3 originalPixelBuffer:(CVBufferRef)arg4 processedPixelBuffer:(CVBufferRef)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)adjustMetadataOfSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)supportsAnimation;
-(BOOL)adjustsMetadata;
-(id)initForRenderingWithDepth:(BOOL)arg1 metalCommandQueue:(id)arg2 ;
-(BOOL)usingDepth;
-(void)setRenderingQueueContext:(CIContext *)arg1 ;
-(void)_renderUsingParameters:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 inputSampleBuffer:(opaqueCMSampleBufferRef)arg3 originalPixelBuffer:(CVBufferRef)arg4 processedPixelBuffer:(CVBufferRef)arg5 prewarming:(BOOL)arg6 completionHandler:(/*^block*/id)arg7 ;
-(CIContext *)renderingQueueContext;
-(id)init;
-(void)dealloc;
-(short)type;
-(NSString *)displayName;
@end

