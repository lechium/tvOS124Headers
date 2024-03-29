/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, VUIProductMetadataLayout, UIView, VUIProductInfoAiringView, VUISeparatorView;

@interface VUIProductMetadataView : UIView {

	NSArray* _sectionViews;
	VUIProductMetadataLayout* _viewLayout;
	UIView* _defaultFocusView;
	VUIProductInfoAiringView* _airingView;
	VUISeparatorView* _separatorView;

}

@property (nonatomic,retain) NSArray * sectionViews;                             //@synthesize sectionViews=_sectionViews - In the implementation block
@property (nonatomic,retain) VUIProductMetadataLayout * viewLayout;              //@synthesize viewLayout=_viewLayout - In the implementation block
@property (nonatomic,retain) UIView * defaultFocusView;                          //@synthesize defaultFocusView=_defaultFocusView - In the implementation block
@property (nonatomic,retain) VUIProductInfoAiringView * airingView;              //@synthesize airingView=_airingView - In the implementation block
@property (nonatomic,retain) VUISeparatorView * separatorView;                   //@synthesize separatorView=_separatorView - In the implementation block
+(id)configureViewWithElement:(id)arg1 existingView:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)preferredFocusEnvironments;
-(BOOL)canBecomeFocused;
-(VUISeparatorView *)separatorView;
-(void)setSeparatorView:(VUISeparatorView *)arg1 ;
-(void)setDefaultFocusView:(UIView *)arg1 ;
-(UIView *)defaultFocusView;
-(VUIProductMetadataLayout *)viewLayout;
-(void)setViewLayout:(VUIProductMetadataLayout *)arg1 ;
-(VUIProductInfoAiringView *)airingView;
-(id)_generateSectionViewFromElement:(id)arg1 ;
-(void)updateViewWithSections:(id)arg1 ;
-(void)setAiringView:(VUIProductInfoAiringView *)arg1 ;
-(NSArray *)sectionViews;
-(void)setSectionViews:(NSArray *)arg1 ;
@end

