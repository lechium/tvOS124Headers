/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, _TVImageLoaderQueue, UIImageView, NSTimer;

@interface TVLegacyImageCrossfadeView : UIView {

	NSArray* _imageProxies;
	double _crossfadePeriod;
	double _crossfadeDuration;
	double _rotationAngleDegrees;
	_TVImageLoaderQueue* _loaderQueue;
	UIImageView* _imageView;
	NSTimer* _crossfadeTimer;

}

@property (nonatomic,retain) _TVImageLoaderQueue * loaderQueue;              //@synthesize loaderQueue=_loaderQueue - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                        //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) NSTimer * crossfadeTimer;                       //@synthesize crossfadeTimer=_crossfadeTimer - In the implementation block
@property (nonatomic,copy) NSArray * imageProxies;                           //@synthesize imageProxies=_imageProxies - In the implementation block
@property (assign,nonatomic) double crossfadePeriod;                         //@synthesize crossfadePeriod=_crossfadePeriod - In the implementation block
@property (assign,nonatomic) double crossfadeDuration;                       //@synthesize crossfadeDuration=_crossfadeDuration - In the implementation block
@property (assign,nonatomic) double rotationAngleDegrees;                    //@synthesize rotationAngleDegrees=_rotationAngleDegrees - In the implementation block
-(void)_loadNextImage:(id)arg1 ;
-(void)_crossfadeToImage:(id)arg1 ;
-(double)crossfadePeriod;
-(void)setCrossfadePeriod:(double)arg1 ;
-(double)crossfadeDuration;
-(void)setCrossfadeDuration:(double)arg1 ;
-(CGSize)_maximumImageSize;
-(void)setRotationAngleDegrees:(double)arg1 ;
-(double)rotationAngleDegrees;
-(_TVImageLoaderQueue *)loaderQueue;
-(void)setLoaderQueue:(_TVImageLoaderQueue *)arg1 ;
-(NSTimer *)crossfadeTimer;
-(void)setCrossfadeTimer:(NSTimer *)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)didMoveToSuperview;
-(void)_startTimer;
-(void)setImageView:(UIImageView *)arg1 ;
-(NSArray *)imageProxies;
-(void)setImageProxies:(NSArray *)arg1 ;
@end

