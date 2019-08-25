/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface CAMetalLayer : CALayer {

	CAMetalLayerPrivate* _priv;

}

@property (assign) BOOL fenceEnabled; 
@property (assign) BOOL serverSyncEnabled; 
@property (assign) BOOL lowLatency; 
@property (assign) double inputTime; 
@property (assign) BOOL nonDefaultColorspace; 
@property (assign) double drawableTimeoutSeconds; 
@property (readonly) unsigned long long displayCompositingInternalStatus; 
@property (retain) id<MTLDevice> device; 
@property (assign) unsigned long long pixelFormat; 
@property (assign) BOOL framebufferOnly; 
@property (assign) CGSize drawableSize; 
@property (assign) unsigned long long maximumDrawableCount; 
@property (assign) BOOL presentsWithTransaction; 
@property (assign) BOOL allowsNextDrawableTimeout; 
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
-(BOOL)framebufferOnly;
-(BOOL)shouldArchiveValueForKey:(id)arg1 ;
-(void)_didCommitLayer:(Transaction*)arg1 ;
-(void)setDrawableTimeoutSeconds:(double)arg1 ;
-(double)drawableTimeoutSeconds;
-(void)setMaximumDrawableCount:(unsigned long long)arg1 ;
-(CGColorSpaceRef)colorspace;
-(void)setColorspace:(CGColorSpaceRef)arg1 ;
-(void)setColorspace:(CGColorSpaceRef)arg1 nonDefault:(BOOL)arg2 ;
-(id)newDrawable;
-(BOOL)displaySyncEnabled;
-(void)setDisplaySyncEnabled:(BOOL)arg1 ;
-(BOOL)allowsNextDrawableTimeout;
-(void)setAllowsNextDrawableTimeout:(BOOL)arg1 ;
-(void)setNonDefaultColorspace:(BOOL)arg1 ;
-(BOOL)nonDefaultColorspace;
-(BOOL)serverSyncEnabled;
-(BOOL)fenceEnabled;
-(unsigned long long)displayCompositingInternalStatus;
-(void)setServerSyncEnabled:(BOOL)arg1 ;
-(double)inputTime;
-(unsigned long long)pixelFormat;
-(void)setPixelFormat:(unsigned long long)arg1 ;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(void)setPresentsWithTransaction:(BOOL)arg1 ;
-(CGSize)drawableSize;
-(void)setFramebufferOnly:(BOOL)arg1 ;
-(unsigned long long)maximumDrawableCount;
-(id)nextDrawable;
-(void)setDrawableSize:(CGSize)arg1 ;
-(void)setFenceEnabled:(BOOL)arg1 ;
-(BOOL)isDrawableAvailable;
-(void)discardContents;
-(BOOL)presentsWithTransaction;
-(id<MTLDevice>)device;
-(void)setDevice:(id<MTLDevice>)arg1 ;
-(id)init;
-(void)dealloc;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)_display;
-(void)setInputTime:(double)arg1 ;
-(void)setLowLatency:(BOOL)arg1 ;
-(BOOL)lowLatency;
@end

