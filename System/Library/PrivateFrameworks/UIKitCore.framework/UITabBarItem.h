/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIBarItem.h>

@class NSString, UIImage, UITabBarButton, _UITabBarItemAppearanceStorage, UIColor;

@interface UITabBarItem : UIBarItem {

	NSString* _title;
	SEL _action;
	id _target;
	UIImage* _templateImage;
	UIImage* _selectedTemplateImage;
	UIImage* _selectedImage;
	UIImage* _unselectedImage;
	UIEdgeInsets _imageInsets;
	UIImage* _landscapeTemplateImage;
	UIImage* _landscapeSelectedTemplateImage;
	UIImage* _landscapeSelectedImage;
	UIEdgeInsets _landscapeImageInsets;
	NSString* _badgeValue;
	UITabBarButton* _view;
	_UITabBarItemAppearanceStorage* _appearanceStorage;
	struct {
		unsigned enabled : 1;
		unsigned style : 3;
		unsigned isSystemItem : 1;
		unsigned systemItem : 7;
		unsigned customSelectedImage : 1;
		unsigned customUnselectedImage : 1;
	}  _tabBarItemFlags;
	BOOL _springLoaded;
	long long __barMetrics;
	long long __imageStyle;
	UIColor* __tintColor;

}

@property (assign,setter=_setBarMetrics:,nonatomic) long long _barMetrics;                        //@synthesize _barMetrics=__barMetrics - In the implementation block
@property (assign,setter=_setImageStyle:,nonatomic) long long _imageStyle;                        //@synthesize _imageStyle=__imageStyle - In the implementation block
@property (setter=_setTintColor:,nonatomic,retain) UIColor * _tintColor;                          //@synthesize _tintColor=__tintColor - In the implementation block
@property (assign,setter=_setSelected:,getter=_isSelected,nonatomic) BOOL _selected; 
@property (nonatomic,readonly) UIImage * _internalLandscapeSelectedImagePhone; 
@property (nonatomic,retain) UIImage * selectedImage; 
@property (nonatomic,copy) NSString * badgeValue;                                                 //@synthesize badgeValue=_badgeValue - In the implementation block
@property (assign,nonatomic) UIOffset titlePositionAdjustment; 
@property (nonatomic,copy) UIColor * badgeColor; 
+(id)_appearanceBlindViewClasses;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)view;
-(void)setTitle:(id)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(id)_internalTitle;
-(id)_internalLargeContentSizeImage;
-(UIEdgeInsets)largeContentSizeImageInsets;
-(id)_internalTemplateImage;
-(id)resolvedTitle;
-(id)image;
-(id)title;
-(UIEdgeInsets)imageInsets;
-(void)setView:(id)arg1 ;
-(SEL)action;
-(UIColor *)_tintColor;
-(BOOL)hasTitle;
-(void)setAction:(SEL)arg1 ;
-(id)titleTextAttributesForState:(unsigned long long)arg1 ;
-(id)_imageForState:(unsigned long long)arg1 metrics:(long long)arg2 position:(long long)arg3 type:(long long)arg4 ;
-(UIEdgeInsets)landscapeImagePhoneInsets;
-(long long)systemItem;
-(BOOL)isSystemItem;
-(void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setTintColor:(id)arg1 ;
-(void)setLandscapeImagePhone:(id)arg1 ;
-(void)_updateView;
-(id)largeContentSizeImage;
-(void)setLargeContentSizeImage:(id)arg1 ;
-(void)setLargeContentSizeImageInsets:(UIEdgeInsets)arg1 ;
-(id)landscapeImagePhone;
-(void)setLandscapeImagePhoneInsets:(UIEdgeInsets)arg1 ;
-(long long)_barMetrics;
-(id)_createViewForTabBar:(id)arg1 asProxyView:(BOOL)arg2 ;
-(void)_setSelected:(BOOL)arg1 ;
-(BOOL)_isSelected;
-(void)_setTitleTextAttributeValue:(id)arg1 forAttributeKey:(id)arg2 state:(unsigned long long)arg3 ;
-(void)_setBarMetrics:(long long)arg1 ;
-(void)_setImageStyle:(long long)arg1 ;
-(void)_showSelectedIndicator:(BOOL)arg1 changeSelection:(BOOL)arg2 ;
-(void)_updateButtonForTintColor:(id)arg1 selected:(BOOL)arg2 ;
-(long long)_imageStyle;
-(void)_updateToMatchCurrentState;
-(id)_internalTemplateImagesForTabBarDisplayStyle:(long long)arg1 ;
-(void)setSelectedImage:(UIImage *)arg1 ;
-(void)setBadgeColor:(UIColor *)arg1 ;
-(void)setTitlePositionAdjustment:(UIOffset)arg1 ;
-(UIColor *)badgeColor;
-(UIOffset)titlePositionAdjustment;
-(void)_setInternalTitle:(id)arg1 ;
-(void)_setInternalTemplateImage:(id)arg1 ;
-(void)_setInternalLandscapeTemplateImage:(id)arg1 ;
-(id)_internalTemplateImages;
-(id)_internalLandscapeTemplateImages;
-(id)badgeTextAttributesForState:(unsigned long long)arg1 ;
-(void)setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)_internalTitleForTabBarDisplayStyle:(long long)arg1 ;
-(id)_updateImageWithTintColor:(id)arg1 isSelected:(BOOL)arg2 getImageOffset:(UIOffset*)arg3 ;
-(id)unselectedImage;
-(UIImage *)selectedImage;
-(id)landscapeSelectedImagePhone;
-(void)_updateViewBadge;
-(void)_updateViewAndPositionItems:(BOOL)arg1 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 tag:(long long)arg3 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 selectedImage:(id)arg3 ;
-(id)initWithTabBarSystemItem:(long long)arg1 tag:(long long)arg2 ;
-(void)setBadgeValue:(NSString *)arg1 ;
-(UIImage *)_internalLandscapeSelectedImagePhone;
-(void)setLandscapeSelectedImagePhone:(id)arg1 ;
-(void)setFinishedSelectedImage:(id)arg1 withFinishedUnselectedImage:(id)arg2 ;
-(id)finishedSelectedImage;
-(id)finishedUnselectedImage;
-(void)setAnimatedBadge:(BOOL)arg1 ;
-(BOOL)animatedBadge;
-(void)setUnselectedImage:(id)arg1 ;
-(id)_internalLandscapeTemplateImage;
-(NSString *)badgeValue;
@end
