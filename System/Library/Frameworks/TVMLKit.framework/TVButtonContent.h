/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/_UIFloatingContentView.h>

@class UIColor, UIView, UIVisualEffectView, NSString, _TVImageView, UILabel, IKViewElement;

@interface TVButtonContent : _UIFloatingContentView {

	UIColor* __backgroundColor;
	BOOL _focused;
	BOOL _blurEnabled;
	BOOL _disabled;
	BOOL _imageTrailsTextContent;
	double _cornerRadius;
	UIView* _overlayView;
	UIVisualEffectView* _backdropView;
	long long _backdropStyle;
	NSString* _groupName;
	double _focusSizeIncrease;
	_TVImageView* _imageView;
	UILabel* _textContentView;
	_TVImageView* _accessoryView;
	UIColor* _highlightColor;
	IKViewElement* _viewElement;

}

@property (getter=isFocused,nonatomic,readonly) BOOL focused;                  //@synthesize focused=_focused - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * backdropView;              //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,readonly) UIView * overlayView;                           //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,readonly) long long backdropStyle;                        //@synthesize backdropStyle=_backdropStyle - In the implementation block
@property (nonatomic,readonly) BOOL blurEnabled;                               //@synthesize blurEnabled=_blurEnabled - In the implementation block
@property (assign,nonatomic) double cornerRadius;                              //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                  //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,retain) NSString * groupName;                             //@synthesize groupName=_groupName - In the implementation block
@property (assign,nonatomic) double focusSizeIncrease;                         //@synthesize focusSizeIncrease=_focusSizeIncrease - In the implementation block
@property (assign,nonatomic) BOOL imageTrailsTextContent;                      //@synthesize imageTrailsTextContent=_imageTrailsTextContent - In the implementation block
@property (nonatomic,retain) _TVImageView * imageView;                         //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * textContentView;                        //@synthesize textContentView=_textContentView - In the implementation block
@property (nonatomic,retain) _TVImageView * accessoryView;                     //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,copy) UIColor * highlightColor;                           //@synthesize highlightColor=_highlightColor - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                      //@synthesize viewElement=_viewElement - In the implementation block
-(BOOL)isDisabled;
-(void)setFocusSizeIncrease:(double)arg1 ;
-(double)focusSizeIncrease;
-(void)_updateBackgroundColorForState:(unsigned long long)arg1 ;
-(void)_updateFocusStateWithCoordinator:(id)arg1 ;
-(void)_updateFloaingViewFocusState:(BOOL)arg1 coordinator:(id)arg2 ;
-(BOOL)blurEnabled;
-(void)_setFocused:(BOOL)arg1 animationCoordinator:(id)arg2 ;
-(void)pressesBegan;
-(void)pressesCancelled;
-(void)pressesEnded;
-(double)_imageMarginFromText;
-(BOOL)imageTrailsTextContent;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(_TVImageView *)imageView;
-(BOOL)isFocused;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)backgroundColor;
-(BOOL)canBecomeFocused;
-(UIVisualEffectView *)backdropView;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(void)setSelected:(BOOL)arg1 ;
-(double)cornerRadius;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(void)setAccessoryView:(_TVImageView *)arg1 ;
-(_TVImageView *)accessoryView;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setImageView:(_TVImageView *)arg1 ;
-(long long)backdropStyle;
-(UIColor *)highlightColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(UIView *)overlayView;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(UILabel *)textContentView;
-(void)setTextContentView:(UILabel *)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(void)setImageTrailsTextContent:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 blurEffectStyle:(long long)arg2 blurEnabled:(BOOL)arg3 ;
@end
