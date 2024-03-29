/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UILabel.h>

@class _UITabBarItemAppearanceStorage, UIColor, UITabBarButton;

@interface UITabBarButtonLabel : UILabel {

	double _boundsWidth;
	_UITabBarItemAppearanceStorage* _appearanceStorage;
	BOOL _isSelected;
	BOOL _isHighlighted;
	BOOL _hasSeenIdiom;
	Class _appearanceGuideClass;
	UIColor* _unselectedTintColor;
	UITabBarButton* _tabBarButton;

}

@property (setter=_setAppearanceGuideClass:,nonatomic,retain) Class _appearanceGuideClass;                                           //@synthesize appearanceGuideClass=_appearanceGuideClass - In the implementation block
@property (setter=_setUnselectedTintColor:,getter=_unselectedTintColor,nonatomic,retain) UIColor * unselectedTintColor;              //@synthesize unselectedTintColor=_unselectedTintColor - In the implementation block
@property (assign,setter=_setTabBarButton:,getter=_tabBarButton,nonatomic,__weak) UITabBarButton * tabBarButton;                     //@synthesize tabBarButton=_tabBarButton - In the implementation block
+(double)_fontPointSizeForIdiom:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)tintColorDidChange;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3 ;
-(void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)_titleTextAttributesForState:(unsigned long long)arg1 ;
-(Class)_appearanceGuideClass;
-(void)_setAppearanceGuideClass:(Class)arg1 ;
-(void)_setUnselectedTintColor:(id)arg1 ;
-(void)_setBadgeColor:(id)arg1 ;
-(void)_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_applyTabBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2 ;
-(id)_fontForIdiom:(long long)arg1 ;
-(id)_fontForIdiom:(long long)arg1 forTabBarDisplayStyle:(long long)arg2 ;
-(void)updateTextColorsForState;
-(void)_updateLabelsVibrancy;
-(void)_updateForFontChangeWithIdiom:(long long)arg1 ;
-(id)_unselectedTintColor;
-(id)_tabBarButton;
-(long long)_idiomForFontGivenIdiom:(long long)arg1 ;
-(BOOL)_shouldCeilSizeToViewScale;
-(id)initWithTabBarDisplayStyle:(long long)arg1 ;
-(void)sizeToFitBounds:(CGRect)arg1 ;
-(void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)arg1 ;
-(void)_setTitlePositionAdjustment:(UIOffset)arg1 ;
-(void)_UIAppearance_setBadgeColor:(id)arg1 ;
-(void)_UIAppearance_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setTabBarButton:(id)arg1 ;
@end

