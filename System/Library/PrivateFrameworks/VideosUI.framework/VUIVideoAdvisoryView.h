/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUIVideoAdvisoryViewLayout, _TVImageView, UIView, NSArray;

@interface VUIVideoAdvisoryView : UIView {

	VUIVideoAdvisoryViewLayout* _layout;
	_TVImageView* _logoImageView;
	UIView* _dividerView;
	NSArray* _legendViews;

}

@property (nonatomic,retain) VUIVideoAdvisoryViewLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) _TVImageView * logoImageView;                     //@synthesize logoImageView=_logoImageView - In the implementation block
@property (nonatomic,retain) UIView * dividerView;                             //@synthesize dividerView=_dividerView - In the implementation block
@property (nonatomic,copy) NSArray * legendViews;                              //@synthesize legendViews=_legendViews - In the implementation block
-(UIEdgeInsets)_margin;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(VUIVideoAdvisoryViewLayout *)layout;
-(void)setLayout:(VUIVideoAdvisoryViewLayout *)arg1 ;
-(CGSize)_logoSize;
-(id)initWithRatingInfoDictionary:(id)arg1 ;
-(void)show:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(_TVImageView *)logoImageView;
-(void)setLogoImageView:(_TVImageView *)arg1 ;
-(CGSize)_legendSize;
-(CGSize)_dividerSize;
-(UIEdgeInsets)_logoMargin;
-(UIEdgeInsets)_legendsMargin;
-(UIEdgeInsets)_dividerMargin;
-(void)_configureSubviewsWithDictionary:(id)arg1 ;
-(NSArray *)legendViews;
-(UIView *)dividerView;
-(void)setDividerView:(UIView *)arg1 ;
-(void)setLegendViews:(NSArray *)arg1 ;
-(BOOL)_isPortrait;
-(void)_showAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_hideAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_showWithAnimationWithCompletion:(/*^block*/id)arg1 ;
-(void)_hideWithAnimationWithCompletion:(/*^block*/id)arg1 ;
@end

