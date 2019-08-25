/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class TVLHeadToHeadBannerView, TVLItemTitleView, TVLHockeyScoreboardView;

@interface TVLHockeyPreviewView : UIView {

	TVLHeadToHeadBannerView* _bannerView;
	TVLItemTitleView* _titleView;
	TVLHockeyScoreboardView* _scoreboardView;

}

@property (nonatomic,retain) TVLHeadToHeadBannerView * bannerView;                  //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) TVLItemTitleView * titleView;                          //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) TVLHockeyScoreboardView * scoreboardView;              //@synthesize scoreboardView=_scoreboardView - In the implementation block
-(TVLHeadToHeadBannerView *)bannerView;
-(void)setBannerView:(TVLHeadToHeadBannerView *)arg1 ;
-(TVLHockeyScoreboardView *)scoreboardView;
-(void)setScoreboardView:(TVLHockeyScoreboardView *)arg1 ;
-(void)layoutSubviews;
-(TVLItemTitleView *)titleView;
-(void)setTitleView:(TVLItemTitleView *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
@end
