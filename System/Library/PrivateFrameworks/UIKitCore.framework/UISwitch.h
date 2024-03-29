/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UISwitchControl.h>
#import <UIKit/UISwitchVisualElementProvider.h>
#import <libobjc.A.dylib/NSCoding.h>

@class UIColor, UIImage, UISwitchVisualElement, NSString;

@interface UISwitch : UIControl <UISwitchControl, UISwitchVisualElementProvider, NSCoding> {

	BOOL _on;
	BOOL _alwaysShowOnOffLabel;
	UIColor* _onTintColor;
	UIColor* _tintColor;
	UIColor* _thumbTintColor;
	UIImage* _onImage;
	UIImage* _offImage;
	UISwitchVisualElement* _visualElement;

}

@property (nonatomic,retain) UISwitchVisualElement * visualElement;                                                                 //@synthesize visualElement=_visualElement - In the implementation block
@property (assign,setter=_setAlwaysShowsOnOffLabel:,getter=_alwaysShowOnOffLabel,nonatomic) BOOL alwaysShowOnOffLabel;              //@synthesize alwaysShowOnOffLabel=_alwaysShowOnOffLabel - In the implementation block
@property (nonatomic,retain) UIColor * onTintColor;                                                                                 //@synthesize onTintColor=_onTintColor - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                                                                   //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) UIColor * thumbTintColor;                                                                              //@synthesize thumbTintColor=_thumbTintColor - In the implementation block
@property (nonatomic,retain) UIImage * onImage;                                                                                     //@synthesize onImage=_onImage - In the implementation block
@property (nonatomic,retain) UIImage * offImage;                                                                                    //@synthesize offImage=_offImage - In the implementation block
@property (assign,getter=isOn,nonatomic) BOOL on;                                                                                   //@synthesize on=_on - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)visualElementForTraitCollection:(id)arg1 ;
+(void)setVisualElementProvider:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)defaultAccessibilityTraits;
-(BOOL)isAccessibilityElementByDefault;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIColor *)tintColor;
-(UIEdgeInsets)alignmentRectInsets;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(unsigned long long)_controlEventsForActionTriggered;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(void)setThumbTintColor:(UIColor *)arg1 ;
-(UIColor *)thumbTintColor;
-(void)setOn:(BOOL)arg1 ;
-(void)setOnTintColor:(UIColor *)arg1 ;
-(void)setOnImage:(UIImage *)arg1 ;
-(void)setOffImage:(UIImage *)arg1 ;
-(BOOL)_shouldAlterCodedFrame;
-(BOOL)isOn;
-(UIColor *)onTintColor;
-(UIImage *)onImage;
-(UIImage *)offImage;
-(UISwitchVisualElement *)visualElement;
-(void)_encodeFrameWithCoder:(id)arg1 ;
-(void)_refreshVisualElementForTraitCollection:(id)arg1 ;
-(void)_refreshVisualElementForTraitCollection:(id)arg1 populatingAPIProperties:(BOOL)arg2 ;
-(void)setVisualElement:(UISwitchVisualElement *)arg1 ;
-(void)setOn:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_shouldShowOnOffLabels;
-(void)setOn:(BOOL)arg1 animated:(BOOL)arg2 notifyingVisualElement:(BOOL)arg3 ;
-(BOOL)_alwaysShowOnOffLabel;
-(void)visualElement:(id)arg1 transitionedToOn:(BOOL)arg2 ;
-(void)visualElementHadTouchUpInside:(id)arg1 ;
-(BOOL)pointMostlyInside:(CGPoint)arg1 ;
-(void)_refreshVisualElement;
-(void)_setAlwaysShowsOnOffLabel:(BOOL)arg1 ;
-(void)_showingOnOffLabelChanged;
@end

