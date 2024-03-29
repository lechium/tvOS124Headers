/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol OS_dispatch_group;
@class NSObject, NSMutableArray, _TVImageLoaderQueue, NSArray, NSString;

@interface TVScrollingParadeView : UIView <CAAnimationDelegate> {

	BOOL _animating;
	unsigned long long _additionalImageViewCount;
	NSObject*<OS_dispatch_group> _animationGroup;
	NSMutableArray* _imageViews;
	_TVImageLoaderQueue* _loaderQueue;
	BOOL _paused;
	NSArray* _imageProxies;

}

@property (nonatomic,copy) NSArray * imageProxies;                     //@synthesize imageProxies=_imageProxies - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;              //@synthesize paused=_paused - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_addImageToAnimationContainer:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)isPaused;
-(void)_stopAnimations;
-(void)_startAnimations;
-(NSArray *)imageProxies;
-(void)setImageProxies:(NSArray *)arg1 ;
@end

