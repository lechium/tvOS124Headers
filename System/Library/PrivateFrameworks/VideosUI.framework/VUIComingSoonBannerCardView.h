/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUIComingSoonCardLayout, VUILabel, VUIButton, UIVisualEffectView;

@interface VUIComingSoonBannerCardView : UIView {

	VUIComingSoonCardLayout* _layout;
	VUILabel* _titleLabel;
	VUILabel* _textLabel;
	VUIButton* _button;
	UIVisualEffectView* _vibrantEffectView;

}

@property (nonatomic,retain) VUIComingSoonCardLayout * layout;                    //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VUILabel * textLabel;                                //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) VUIButton * button;                                  //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * vibrantEffectView;              //@synthesize vibrantEffectView=_vibrantEffectView - In the implementation block
+(id)configureViewWithDataDictionary:(id)arg1 andButtonViewElement:(id)arg2 existingView:(id)arg3 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(VUILabel *)titleLabel;
-(VUIComingSoonCardLayout *)layout;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(VUILabel *)textLabel;
-(void)setLayout:(VUIComingSoonCardLayout *)arg1 ;
-(void)setTextLabel:(VUILabel *)arg1 ;
-(VUIButton *)button;
-(void)setButton:(VUIButton *)arg1 ;
-(UIVisualEffectView *)vibrantEffectView;
-(void)setVibrantEffectView:(UIVisualEffectView *)arg1 ;
@end

