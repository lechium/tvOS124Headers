/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIColor;


@protocol _UIButtonBarAppearanceDelegate <NSObject>
@property (nonatomic,readonly) id appearanceStorage; 
@property (nonatomic,readonly) long long barType; 
@property (nonatomic,readonly) long long barMetrics; 
@property (nonatomic,readonly) BOOL isRTL; 
@property (nonatomic,readonly) BOOL barWantsLetterpress; 
@property (nonatomic,readonly) UIColor * tintColor; 
@property (nonatomic,readonly) BOOL centerTextButtons; 
@property (nonatomic,readonly) double defaultEdgeSpacing; 
@property (nonatomic,readonly) double defaultTextPadding; 
@property (nonatomic,readonly) double backButtonMargin; 
@property (nonatomic,readonly) double backButtonMaximumWidth; 
@required
-(UIColor *)tintColor;
-(BOOL)isRTL;
-(id)appearanceStorage;
-(long long)barType;
-(id)defaultFontDescriptor;
-(BOOL)barWantsLetterpress;
-(BOOL)centerTextButtons;
-(unsigned long long)edgesPaddingBarButtonItem:(id)arg1;
-(long long)barMetrics;
-(id)backIndicatorImage;
-(id)backIndicatorMaskImage;
-(double)backButtonMargin;
-(double)defaultEdgeSpacing;
-(double)absorptionForItem:(id)arg1;
-(double)defaultTextPadding;
-(double)backButtonMaximumWidth;

@end

