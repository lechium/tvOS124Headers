/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout, VUITextBadgeLayout, TVImageLayout, VUIProgressBarLayout;

@interface VUIOverlayLayout : TVViewLayout {

	BOOL _isDarkTheme;
	long long _overlayType;
	VUITextLayout* _titleLayout;
	VUITextBadgeLayout* _textBadgeLayout;
	TVImageLayout* _badgeLayout;
	VUIProgressBarLayout* _progressBarLayout;

}

@property (assign,nonatomic) long long overlayType;                                 //@synthesize overlayType=_overlayType - In the implementation block
@property (nonatomic,retain) VUITextLayout * titleLayout;                           //@synthesize titleLayout=_titleLayout - In the implementation block
@property (nonatomic,retain) VUITextBadgeLayout * textBadgeLayout;                  //@synthesize textBadgeLayout=_textBadgeLayout - In the implementation block
@property (nonatomic,retain) TVImageLayout * badgeLayout;                           //@synthesize badgeLayout=_badgeLayout - In the implementation block
@property (nonatomic,retain) VUIProgressBarLayout * progressBarLayout;              //@synthesize progressBarLayout=_progressBarLayout - In the implementation block
+(id)layoutWithLayout:(id)arg1 overlayType:(long long)arg2 element:(id)arg3 ;
-(VUITextBadgeLayout *)textBadgeLayout;
-(TVImageLayout *)badgeLayout;
-(VUITextLayout *)titleLayout;
-(VUIProgressBarLayout *)progressBarLayout;
-(long long)overlayType;
-(void)setTextBadgeLayout:(VUITextBadgeLayout *)arg1 ;
-(void)setProgressBarLayout:(VUIProgressBarLayout *)arg1 ;
-(void)setBadgeLayout:(TVImageLayout *)arg1 ;
-(void)setTitleLayout:(VUITextLayout *)arg1 ;
-(void)_updateLayoutWithElement:(id)arg1 andType:(long long)arg2 ;
-(id)_navBrickTitleLayout;
-(id)_editorialTitleLayout;
-(id)_spotlightTitleLayout;
-(id)_ribbonTitleLayout;
-(void)setOverlayType:(long long)arg1 ;
@end

