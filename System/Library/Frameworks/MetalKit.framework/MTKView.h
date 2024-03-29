/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalKit/MetalKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@protocol CAMetalDrawable, MTLTexture, MTKViewDelegate, MTLDevice;
@class CAMetalLayer, CADisplayLink, MTKOffscreenDrawable, NSString, MTLRenderPassDescriptor;

@interface MTKView : UIView <NSCoding, CALayerDelegate> {

	CAMetalLayer* _metalLayer;
	BOOL _sizeDirty;
	CGSize _drawableScaleFactor;
	BOOL _pausedOnBackgrounding;
	CADisplayLink* _displayLink;
	id<CAMetalDrawable> _currentDrawable;
	/*function pointer*/void* _drawRectSubIMP;
	BOOL _subClassOverridesDrawRect;
	BOOL _deviceReset;
	id<MTLTexture> _depthStencilTexture;
	id<MTLTexture> _multisampleColorTexture;
	BOOL _framebufferOnly;
	unsigned long long _drawableAttachmentIndex;
	long long _nominalFramesPerSecond;
	long long _maxValidAttachmentIndex;
	unsigned long long _colorPixelFormats[8];
	id<MTLTexture> _multisampleColorTextures[8];
	id<MTLTexture> _colorTextures[8];
	MTKOffscreenDrawable* _offscreenSwapChain[3];
	unsigned long long _drawableIdx;
	int _renderAttachmentDirtyState;
	unsigned long long _terminateAfterFrame;
	unsigned long long _terminateAfterSeconds;
	unsigned long long _measureAfterFrame;
	unsigned long long _measureAfterSeconds;
	unsigned long long _dumpFrameAtFrame;
	unsigned long long _dumpFrameAtSeconds;
	NSString* _dumpPath;
	BOOL _dumpFirstFrame;
	BOOL _drawOffscreen;
	long long _forceOrientation;
	double _startTime;
	unsigned _frameNum;
	BOOL _enableSetNeedsDisplay;
	BOOL _autoResizeDrawable;
	BOOL _paused;
	unsigned _clearStencil;
	id<MTKViewDelegate> _delegate;
	id<MTLDevice> _device;
	unsigned long long _depthStencilPixelFormat;
	unsigned long long _sampleCount;
	double _clearDepth;
	long long _preferredFramesPerSecond;
	CGSize _drawableSize;
	SCD_Struct_MT13 _clearColor;

}

@property (assign,nonatomic,__weak) id<MTKViewDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<MTLDevice> device;                                                 //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) id<CAMetalDrawable> currentDrawable;                                //@synthesize currentDrawable=_currentDrawable - In the implementation block
@property (assign,nonatomic) BOOL framebufferOnly; 
@property (assign,nonatomic) BOOL presentsWithTransaction; 
@property (assign,nonatomic) unsigned long long colorPixelFormat; 
@property (assign,nonatomic) unsigned long long depthStencilPixelFormat;                           //@synthesize depthStencilPixelFormat=_depthStencilPixelFormat - In the implementation block
@property (assign,nonatomic) unsigned long long sampleCount;                                       //@synthesize sampleCount=_sampleCount - In the implementation block
@property (assign,nonatomic) SCD_Struct_MT13 clearColor;                                           //@synthesize clearColor=_clearColor - In the implementation block
@property (assign,nonatomic) double clearDepth;                                                    //@synthesize clearDepth=_clearDepth - In the implementation block
@property (assign,nonatomic) unsigned clearStencil;                                                //@synthesize clearStencil=_clearStencil - In the implementation block
@property (nonatomic,readonly) id<MTLTexture> depthStencilTexture; 
@property (nonatomic,readonly) id<MTLTexture> multisampleColorTexture; 
@property (nonatomic,readonly) MTLRenderPassDescriptor * currentRenderPassDescriptor; 
@property (assign,nonatomic) long long preferredFramesPerSecond;                                   //@synthesize preferredFramesPerSecond=_preferredFramesPerSecond - In the implementation block
@property (assign,nonatomic) BOOL enableSetNeedsDisplay;                                           //@synthesize enableSetNeedsDisplay=_enableSetNeedsDisplay - In the implementation block
@property (assign,nonatomic) BOOL autoResizeDrawable;                                              //@synthesize autoResizeDrawable=_autoResizeDrawable - In the implementation block
@property (assign,nonatomic) CGSize drawableSize;                                                  //@synthesize drawableSize=_drawableSize - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                          //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic) CGColorSpaceRef colorspace; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
-(BOOL)framebufferOnly;
-(unsigned)clearStencil;
-(CGColorSpaceRef)colorspace;
-(void)setColorspace:(CGColorSpaceRef)arg1 ;
-(double)clearDepth;
-(BOOL)enableSetNeedsDisplay;
-(void)_createDisplayLinkForScreen:(id)arg1 ;
-(void)setPresentsWithTransaction:(BOOL)arg1 ;
-(void)draw;
-(void)getEnvironmentSettings;
-(void)setColorPixelFormat:(unsigned long long)arg1 ;
-(void)_resizeDrawable;
-(void)setColorPixelFormat:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_resizeMetalLayerDrawable;
-(const id*)colorTextures;
-(id<CAMetalDrawable>)currentDrawable;
-(const id*)multisampleColorTextures;
-(long long)_calculateRefeshesPerSecond;
-(void)setNominalFramesPerSecond:(long long)arg1 ;
-(void)_updateToNativeScale;
-(void)releaseDrawables;
-(void)__initCommon;
-(id)initWithFrame:(CGRect)arg1 device:(id)arg2 ;
-(void)setDrawableAttachmentIndex:(unsigned long long)arg1 ;
-(void)setDepthStencilPixelFormat:(unsigned long long)arg1 ;
-(void)setAutoResizeDrawable:(BOOL)arg1 ;
-(unsigned long long)drawableAttachmentIndex;
-(id<MTLTexture>)depthStencilTexture;
-(void)_dumpFrameImageWithFilename:(id)arg1 ;
-(void)_dumpFramerate:(double)arg1 withFilename:(id)arg2 ;
-(CGSize)_pixelSizeFromPointSize:(CGSize)arg1 ;
-(BOOL)exportToTargaAtLocation:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 size:(unsigned long long)arg4 bytes:(void*)arg5 ;
-(id<MTLTexture>)multisampleColorTexture;
-(long long)nominalFramesPerSecond;
-(unsigned long long)depthStencilPixelFormat;
-(BOOL)autoResizeDrawable;
-(CGSize)drawableSize;
-(void)setClearColor:(SCD_Struct_MT13)arg1 ;
-(void)setFramebufferOnly:(BOOL)arg1 ;
-(void)setClearDepth:(double)arg1 ;
-(void)setClearStencil:(unsigned)arg1 ;
-(MTLRenderPassDescriptor *)currentRenderPassDescriptor;
-(void)setDrawableSize:(CGSize)arg1 ;
-(unsigned long long)colorPixelFormat;
-(BOOL)presentsWithTransaction;
-(id<MTLDevice>)device;
-(void)setDevice:(id<MTLDevice>)arg1 ;
-(long long)preferredFramesPerSecond;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<MTKViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<MTKViewDelegate>)delegate;
-(SCD_Struct_MT13)clearColor;
-(void)didMoveToWindow;
-(void)setContentScaleFactor:(double)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(BOOL)_canDrawContent;
-(unsigned long long)sampleCount;
-(void)setSampleCount:(unsigned long long)arg1 ;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(void)setEnableSetNeedsDisplay:(BOOL)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(BOOL)isPaused;
-(BOOL)_controlsOwnScaleFactor;
@end

