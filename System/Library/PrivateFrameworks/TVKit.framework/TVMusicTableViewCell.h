/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVTableViewCell.h>

@class UIImage, UIView;

@interface TVMusicTableViewCell : TVTableViewCell {

	UIImage* _accessoryImage;
	UIView* _badgeView;
	long long _placeholderAssetType;

}

@property (nonatomic,retain) UIView * badgeView;                          //@synthesize badgeView=_badgeView - In the implementation block
@property (assign,nonatomic) long long placeholderAssetType;              //@synthesize placeholderAssetType=_placeholderAssetType - In the implementation block
-(id)_textLabelColor;
-(id)_detailTextLabelColor;
-(void)_updateColorsWithTextLabelColor:(id)arg1 detailTextLabelColor:(id)arg2 ;
-(void)_setAccessoryViewColor;
-(void)_setAccessoryViewWithTextLabelColor:(id)arg1 detailTextLabelColor:(id)arg2 ;
-(BOOL)_isFocusedInDarkMode;
-(id)_focusedInDarkModeTextLabelColor;
-(id)_defaultTextLabelColor;
-(id)_defaultDetailTextLabelColor;
-(void)setPlaceholderAssetType:(long long)arg1 ;
-(void)_updatePlaceholderImageIfNeeded;
-(long long)placeholderAssetType;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setAccessoryView:(id)arg1 ;
-(UIView *)badgeView;
-(void)_updateColors;
-(void)setBadgeView:(UIView *)arg1 ;
@end

