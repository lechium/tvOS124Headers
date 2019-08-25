/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@class VUITextLayout, VUILabel, UISwitch, UITextField, VUIDebugViewDefaults, VUISeparatorView, NSString;

@interface VUIDebugCollectionViewDefaultsCell : UICollectionViewCell <UITextFieldDelegate> {

	VUITextLayout* _titleLayout;
	VUILabel* _titleLabel;
	VUITextLayout* _subtitleLayout;
	VUILabel* _subtitleLabel;
	UISwitch* _defaultsSwitch;
	UITextField* _textField;
	VUIDebugViewDefaults* _defaults;
	VUISeparatorView* _separatorView;

}

@property (nonatomic,retain) VUITextLayout * titleLayout;                   //@synthesize titleLayout=_titleLayout - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VUITextLayout * subtitleLayout;                //@synthesize subtitleLayout=_subtitleLayout - In the implementation block
@property (nonatomic,retain) VUILabel * subtitleLabel;                      //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UISwitch * defaultsSwitch;                     //@synthesize defaultsSwitch=_defaultsSwitch - In the implementation block
@property (nonatomic,retain) UITextField * textField;                       //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) VUIDebugViewDefaults * defaults;               //@synthesize defaults=_defaults - In the implementation block
@property (nonatomic,retain) VUISeparatorView * separatorView;              //@synthesize separatorView=_separatorView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(VUIDebugViewDefaults *)defaults;
-(void)setDefaults:(VUIDebugViewDefaults *)arg1 ;
-(VUILabel *)subtitleLabel;
-(void)setSubtitleLabel:(VUILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(VUILabel *)titleLabel;
-(UITextField *)textField;
-(VUISeparatorView *)separatorView;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(void)setSeparatorView:(VUISeparatorView *)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(VUITextLayout *)titleLayout;
-(void)setTitleLayout:(VUITextLayout *)arg1 ;
-(VUITextLayout *)subtitleLayout;
-(void)setSubtitleLayout:(VUITextLayout *)arg1 ;
-(void)configureCellWithDefaults:(id)arg1 ;
-(void)_defaultsSwitchPressed:(id)arg1 ;
-(UISwitch *)defaultsSwitch;
-(void)setDefaultsSwitch:(UISwitch *)arg1 ;
-(void)setTextField:(UITextField *)arg1 ;
@end

