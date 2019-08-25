/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUITVEpisodeInformationLayout, VUILabel, VUIMediaTagsView, UIView, _TVAnimatedLabel, VUIEpisodeLockupFloatingContentView;

@interface VUITVEpisodeInformationView : UIView {

	unsigned long long _state;
	VUITVEpisodeInformationLayout* _layout;
	VUILabel* _episodeLabel;
	VUILabel* _titleLabel;
	VUILabel* _descriptionLabel;
	VUIMediaTagsView* _metadataView;
	UIView* _separatorView;
	_TVAnimatedLabel* _animatedTitleLabel;
	VUIEpisodeLockupFloatingContentView* _floatingContentView;
	UIView* _dataContentView;

}

@property (nonatomic,retain) UIView * separatorView;                                                 //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) _TVAnimatedLabel * animatedTitleLabel;                                  //@synthesize animatedTitleLabel=_animatedTitleLabel - In the implementation block
@property (nonatomic,retain) VUIEpisodeLockupFloatingContentView * floatingContentView;              //@synthesize floatingContentView=_floatingContentView - In the implementation block
@property (nonatomic,retain) UIView * dataContentView;                                               //@synthesize dataContentView=_dataContentView - In the implementation block
@property (nonatomic,retain) VUITVEpisodeInformationLayout * layout;                                 //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) VUILabel * episodeLabel;                                                //@synthesize episodeLabel=_episodeLabel - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                                                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VUILabel * descriptionLabel;                                            //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) VUIMediaTagsView * metadataView;                                        //@synthesize metadataView=_metadataView - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                               //@synthesize state=_state - In the implementation block
-(VUILabel *)descriptionLabel;
-(id)initWithLayout:(id)arg1 ;
-(void)setDescriptionLabel:(VUILabel *)arg1 ;
-(unsigned long long)state;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(VUILabel *)titleLabel;
-(VUITVEpisodeInformationLayout *)layout;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(void)setState:(unsigned long long)arg1 ;
-(UIView *)separatorView;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(void)setSeparatorView:(UIView *)arg1 ;
-(void)setLayout:(VUITVEpisodeInformationLayout *)arg1 ;
-(VUIEpisodeLockupFloatingContentView *)floatingContentView;
-(CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(void)prepareForCellReuse;
-(void)setFloatingContentView:(VUIEpisodeLockupFloatingContentView *)arg1 ;
-(void)setDataContentView:(UIView *)arg1 ;
-(void)_updateVisualsAppearance;
-(BOOL)_containsData;
-(_TVAnimatedLabel *)animatedTitleLabel;
-(void)_updateTextsAppearance;
-(void)setEpisodeLabel:(VUILabel *)arg1 ;
-(void)setMetadataView:(VUIMediaTagsView *)arg1 ;
-(VUILabel *)episodeLabel;
-(VUIMediaTagsView *)metadataView;
-(void)setAnimatedTitleLabel:(_TVAnimatedLabel *)arg1 ;
-(UIView *)dataContentView;
@end
