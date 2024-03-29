/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIColor, UIFont;


@protocol MKInfoCardTheme <NSObject>
@property (nonatomic,readonly) unsigned long long themeType; 
@property (nonatomic,readonly) BOOL isDarkTheme; 
@property (nonatomic,readonly) BOOL isVibrantTheme; 
@property (nonatomic,readonly) UIColor * textColor; 
@property (nonatomic,readonly) UIColor * lightTextColor; 
@property (nonatomic,readonly) UIColor * tintColor; 
@property (nonatomic,readonly) UIColor * highlightedTintColor; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) UIColor * separatorLineColor; 
@property (nonatomic,readonly) UIColor * rowColor; 
@property (nonatomic,readonly) UIColor * selectedRowColor; 
@property (nonatomic,readonly) UIColor * highlightedActionRowTextColor; 
@property (nonatomic,readonly) UIColor * disabledActionRowTextColor; 
@property (nonatomic,readonly) UIColor * disabledActionRowBackgroundColor; 
@property (nonatomic,readonly) UIColor * normalActionRowBackgroundColor; 
@property (nonatomic,readonly) UIColor * normalActionRowBackgroundPressedColor; 
@property (nonatomic,readonly) UIColor * headerPrimaryButtonNormalColor; 
@property (nonatomic,readonly) UIColor * headerPrimaryButtonHighlightedColor; 
@property (nonatomic,readonly) UIColor * headerSecondaryButtonNormalColor; 
@property (nonatomic,readonly) UIColor * headerSecondaryButtonHighlightedColor; 
@property (nonatomic,readonly) UIFont * largeTitleFontStatic; 
@property (nonatomic,readonly) UIFont * largeTitleFont; 
@property (nonatomic,readonly) UIFont * titleFont; 
@property (nonatomic,readonly) UIFont * brandTitleFont; 
@property (nonatomic,readonly) UIFont * bodyFont; 
@property (nonatomic,readonly) UIFont * boldBodyFont; 
@property (nonatomic,readonly) UIFont * mediumBodyFont; 
@property (nonatomic,readonly) UIFont * sectionHeaderFont; 
@property (nonatomic,readonly) UIFont * sectionHeaderButtonFont; 
@property (nonatomic,readonly) UIFont * attributionFont; 
@property (nonatomic,readonly) UIFont * smallAttributionFont; 
@property (nonatomic,readonly) UIFont * rowButtonFont; 
@property (nonatomic,readonly) UIFont * rowGlyphButtonFont; 
@required
-(id)iconFontToMatch:(id)arg1;
-(unsigned long long)themeType;
-(BOOL)isDarkTheme;
-(BOOL)isVibrantTheme;
-(UIColor *)highlightedTintColor;
-(UIColor *)separatorLineColor;
-(UIColor *)rowColor;
-(UIColor *)selectedRowColor;
-(UIColor *)highlightedActionRowTextColor;
-(UIColor *)disabledActionRowTextColor;
-(UIColor *)disabledActionRowBackgroundColor;
-(UIColor *)normalActionRowBackgroundColor;
-(UIColor *)normalActionRowBackgroundPressedColor;
-(UIColor *)headerPrimaryButtonNormalColor;
-(UIColor *)headerPrimaryButtonHighlightedColor;
-(UIColor *)headerSecondaryButtonNormalColor;
-(UIColor *)headerSecondaryButtonHighlightedColor;
-(UIFont *)largeTitleFontStatic;
-(UIFont *)largeTitleFont;
-(UIFont *)brandTitleFont;
-(UIFont *)bodyFont;
-(UIFont *)boldBodyFont;
-(UIFont *)mediumBodyFont;
-(UIFont *)sectionHeaderFont;
-(UIFont *)sectionHeaderButtonFont;
-(UIFont *)attributionFont;
-(UIFont *)smallAttributionFont;
-(UIFont *)rowButtonFont;
-(UIFont *)rowGlyphButtonFont;
-(UIColor *)tintColor;
-(UIColor *)backgroundColor;
-(UIColor *)textColor;
-(UIColor *)lightTextColor;
-(UIFont *)titleFont;

@end

