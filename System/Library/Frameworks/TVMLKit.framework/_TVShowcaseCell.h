/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class _UIFloatingContentView, _TVImageView;

@interface _TVShowcaseCell : UICollectionViewCell {

	_UIFloatingContentView* _floatingView;
	_TVImageView* _imageView;
	CGSize _imageSize;

}

@property (assign,nonatomic,__weak) _UIFloatingContentView * floatingView;              //@synthesize floatingView=_floatingView - In the implementation block
@property (assign,nonatomic,__weak) _TVImageView * imageView;                           //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                                          //@synthesize imageSize=_imageSize - In the implementation block
-(void)setImageSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(_TVImageView *)imageView;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(void)prepareForReuse;
-(CGSize)imageSize;
-(void)setImageView:(_TVImageView *)arg1 ;
-(_UIFloatingContentView *)floatingView;
-(void)setFloatingView:(_UIFloatingContentView *)arg1 ;
@end
