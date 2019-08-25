/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/BWFilterRenderer.h>

@protocol MTLCommandQueue;
@class NSBundle, FigColorCubeMetalFilter, NSString;

@interface BWMetalColorCubeRenderer : NSObject <BWFilterRenderer> {

	NSBundle* _bundle;
	FigColorCubeMetalFilter* _filter;
	id<MTLCommandQueue> _mtlCommandQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,readonly) short type; 
@property (nonatomic,readonly) BOOL supportsAnimation; 
@property (nonatomic,readonly) BOOL adjustsMetadata; 
+(void)initialize;
+(id)bundle;
-(int)prepareForRenderingWithParameters:(id)arg1 inputVideoFormat:(id)arg2 inputDepthFormat:(id)arg3 ;
-(void)renderUsingParameters:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 inputSampleBuffer:(opaqueCMSampleBufferRef)arg3 originalPixelBuffer:(CVBufferRef)arg4 processedPixelBuffer:(CVBufferRef)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)adjustMetadataOfSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)supportsAnimation;
-(BOOL)adjustsMetadata;
-(id)initWithVideoFormat:(id)arg1 metalCommandQueue:(id)arg2 ;
-(int)_loadAndConfigureFilterBundle;
-(void)dealloc;
-(short)type;
-(NSString *)displayName;
@end

