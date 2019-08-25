/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUIAppInstallView, UILabel, UIStackView, UIImage, NSString, VUITextBadge;

@interface VUIAppInstallLockup : UIView {

	VUIAppInstallView* _iconView;
	UILabel* _nameLabel;
	UILabel* _iAPLabel;
	UILabel* _subtitleLabel;
	UIStackView* _nameAndRatingStack;
	UIStackView* _containerStack;
	BOOL _canFocus;
	UIImage* _icon;
	NSString* _name;
	NSString* _ageRating;
	NSString* _iAP;
	NSString* _subtitle;
	UIStackView* _metadataStackView;
	VUITextBadge* _ageRatingBadge;
	UILabel* _ageRatingLabel;

}

@property (nonatomic,retain) VUITextBadge * ageRatingBadge;                  //@synthesize ageRatingBadge=_ageRatingBadge - In the implementation block
@property (nonatomic,retain) UILabel * ageRatingLabel;                       //@synthesize ageRatingLabel=_ageRatingLabel - In the implementation block
@property (nonatomic,retain) UIImage * icon;                                 //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * ageRating;                             //@synthesize ageRating=_ageRating - In the implementation block
@property (nonatomic,copy) NSString * iAP;                                   //@synthesize iAP=_iAP - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) VUIAppInstallView * installView; 
@property (nonatomic,retain) UIStackView * metadataStackView;                //@synthesize metadataStackView=_metadataStackView - In the implementation block
@property (assign,nonatomic) BOOL canFocus;                                  //@synthesize canFocus=_canFocus - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(BOOL)canBecomeFocused;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(VUIAppInstallView *)installView;
-(UIStackView *)metadataStackView;
-(void)setAgeRating:(NSString *)arg1 ;
-(void)setIAP:(NSString *)arg1 ;
-(void)_layoutForTvos;
-(void)_layoutForIos;
-(void)setCanFocus:(BOOL)arg1 ;
-(void)_configureLabels;
-(VUITextBadge *)ageRatingBadge;
-(UILabel *)ageRatingLabel;
-(id)_textColorForDarkMode;
-(void)_configureAgeRatingBadge;
-(NSString *)ageRating;
-(NSString *)iAP;
-(void)setMetadataStackView:(UIStackView *)arg1 ;
-(BOOL)canFocus;
-(void)setAgeRatingBadge:(VUITextBadge *)arg1 ;
-(void)setAgeRatingLabel:(UILabel *)arg1 ;
@end

