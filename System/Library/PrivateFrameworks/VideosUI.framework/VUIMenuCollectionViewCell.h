/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSString, VUITextLayout, UILabel, _UIFloatingContentView, UIVisualEffectView;

@interface VUIMenuCollectionViewCell : UICollectionViewCell {

	BOOL _shouldAppearSelected;
	NSString* _title;
	VUITextLayout* _titleLayout;
	UILabel* _titleLabel;
	_UIFloatingContentView* _floatingView;
	UIVisualEffectView* _backgroundVisualEffectView;

}

@property (nonatomic,retain) VUITextLayout * titleLayout;                                  //@synthesize titleLayout=_titleLayout - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) _UIFloatingContentView * floatingView;                        //@synthesize floatingView=_floatingView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * backgroundVisualEffectView;              //@synthesize backgroundVisualEffectView=_backgroundVisualEffectView - In the implementation block
@property (nonatomic,retain) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL shouldAppearSelected;                                    //@synthesize shouldAppearSelected=_shouldAppearSelected - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(_UIFloatingContentView *)floatingView;
-(void)setFloatingView:(_UIFloatingContentView *)arg1 ;
-(VUITextLayout *)titleLayout;
-(void)setTitleLayout:(VUITextLayout *)arg1 ;
-(void)_updateSelectedBackgroundColor;
-(void)updateFloatingViewControlState;
-(void)_updateTitleTextColor;
-(unsigned long long)_floatingViewControlState;
-(void)setShouldAppearSelected:(BOOL)arg1 ;
-(BOOL)shouldAppearSelected;
-(UIVisualEffectView *)backgroundVisualEffectView;
-(void)setBackgroundVisualEffectView:(UIVisualEffectView *)arg1 ;
@end

