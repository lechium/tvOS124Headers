/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UIColor, UIView;

@interface _UIParallaxDimmingView : UIView {

	UIImageView* leftEdgeFade;
	BOOL _backgroundIsDimmed;
	UIColor* _dimmingColor;
	UIView* _addingSubview;

}

@property (nonatomic,retain) UIColor * dimmingColor;               //@synthesize dimmingColor=_dimmingColor - In the implementation block
@property (assign,nonatomic) BOOL backgroundIsDimmed;              //@synthesize backgroundIsDimmed=_backgroundIsDimmed - In the implementation block
@property (nonatomic,retain) UIView * addingSubview;               //@synthesize addingSubview=_addingSubview - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)setDimmingColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 overrideDimmingColor:(id)arg2 ;
-(void)setBackgroundIsDimmed:(BOOL)arg1 ;
-(id)initViewWrappingView:(id)arg1 withLeftBorder:(double)arg2 shouldReverseLayoutDirection:(BOOL)arg3 ;
-(void)_updateLeftEdgeFade:(BOOL)arg1 ;
-(void)crossFade;
-(UIColor *)dimmingColor;
-(void)setAddingSubview:(UIView *)arg1 ;
-(UIView *)addingSubview;
-(BOOL)backgroundIsDimmed;
-(id)defaultBorderColor;
-(id)_basicAnimationWithKeyPath:(id)arg1 ;
@end

