/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/_UIStackedImageContainerView.h>
#import <TVMLKit/TVAuxiliaryViewSelecting.h>

@class TVLayeredImageProxy, UIView, UIImage, _UIStackedImageContainerLayer, NSString;

@interface _TVLayeredImageContainerView : _UIStackedImageContainerView <TVAuxiliaryViewSelecting> {

	TVLayeredImageProxy* _layeredImageProxy;
	BOOL _layeredImageLoaded;
	UIView* _overlayView;
	UIImage* _loadedImage;

}

@property (assign,getter=isLayeredImageLoaded,nonatomic) BOOL layeredImageLoaded;                       //@synthesize layeredImageLoaded=_layeredImageLoaded - In the implementation block
@property (nonatomic,retain) UIImage * loadedImage;                                                     //@synthesize loadedImage=_loadedImage - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                                      //@synthesize overlayView=_overlayView - In the implementation block
@property (assign,nonatomic) BOOL fixedFrameOverlayView; 
@property (nonatomic,retain) TVLayeredImageProxy * layeredImageProxy;                                   //@synthesize layeredImageProxy=_layeredImageProxy - In the implementation block
@property (nonatomic,readonly) _UIStackedImageContainerLayer * layeredImageContainerLayer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLayeredImageProxy:(TVLayeredImageProxy *)arg1 ;
-(id)initWithLayeredImageProxy:(id)arg1 ;
-(_UIStackedImageContainerLayer *)layeredImageContainerLayer;
-(void)setOverlayView:(id)arg1 masked:(BOOL)arg2 ;
-(void)setLayeredImageLoaded:(BOOL)arg1 ;
-(void)_loadLayeredImage;
-(BOOL)isLayeredImageLoaded;
-(void)setLoadedImage:(UIImage *)arg1 ;
-(void)setFixedFrameOverlayView:(BOOL)arg1 ;
-(BOOL)fixedFrameOverlayView;
-(TVLayeredImageProxy *)layeredImageProxy;
-(UIImage *)loadedImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPressed:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIView *)overlayView;
-(void)setOverlayView:(UIView *)arg1 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 focusAnimationCoordinator:(id)arg3 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(UIEdgeInsets)selectionMarginsForSize:(CGSize)arg1 ;
@end

