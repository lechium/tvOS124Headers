/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class TVImageStackView, UIImage, UILabel, UIView, UIMotionEffectGroup, NSString;

@interface _TVMusicNowPlayingCollectionViewCell : UICollectionViewCell {

	TVImageStackView* _imageStackView;
	UIImage* _placeholderImage;
	UILabel* _songTitleLabel;
	UILabel* _artistNameLabel;
	BOOL _focused;
	UIView* _topAccessoryView;
	UIView* _bottomAccessoryView;
	BOOL _subheadingsVisible;
	UIMotionEffectGroup* _motionEffectGroup;
	BOOL _animatesAccessoryViews;
	NSString* _songTitle;
	NSString* _artistName;

}

@property (nonatomic,retain) NSString * songTitle;                                              //@synthesize songTitle=_songTitle - In the implementation block
@property (nonatomic,retain) NSString * artistName;                                             //@synthesize artistName=_artistName - In the implementation block
@property (assign,getter=areSubheadingsVisible,nonatomic) BOOL subheadingsVisible; 
@property (nonatomic,retain) UIView * topAccessoryView; 
@property (nonatomic,retain) UIView * bottomAccessoryView; 
@property (assign,nonatomic) BOOL animatesAccessoryViews;                                       //@synthesize animatesAccessoryViews=_animatesAccessoryViews - In the implementation block
-(void)setSongTitle:(NSString *)arg1 ;
-(NSString *)songTitle;
-(void)setArtistName:(NSString *)arg1 ;
-(NSString *)artistName;
-(void)setTopAccessoryView:(UIView *)arg1 ;
-(void)setBottomAccessoryView:(UIView *)arg1 ;
-(UIView *)topAccessoryView;
-(UIView *)bottomAccessoryView;
-(void)_attachMotionEffects;
-(void)_detachMotionEffects;
-(id)_addSubheadLabelWithFont:(id)arg1 textColor:(id)arg2 ;
-(void)_setTopAccessoryViewPositionWithOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)_setBottomAccessoryViewPositionWithOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)setSubheadingsVisible:(BOOL)arg1 ;
-(BOOL)areSubheadingsVisible;
-(void)setAnimatesAccessoryViews:(BOOL)arg1 ;
-(BOOL)animatesAccessoryViews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2 ;
-(BOOL)_unapplyMotionEffect:(id)arg1 ;
-(void)setImageProxy:(id)arg1 ;
@end

