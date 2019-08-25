/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIBarBackgroundImageView.h>
#import <UIKitCore/_UIBarPositioningInternal.h>

@class UIColor, NSMutableDictionary, UIImage, NSString;

@interface UISearchBarBackground : _UIBarBackgroundImageView <_UIBarPositioningInternal> {

	UIColor* _barTintColor;
	NSMutableDictionary* _customBackgroundImages;
	NSMutableDictionary* _generatedBackgroundImages;
	long long _barPosition;
	unsigned long long _searchBarStyle;
	unsigned _barStyle : 3;
	unsigned _barTranslucence : 3;
	unsigned _usesEmbeddedAppearance : 1;
	unsigned _actingAsNavBar : 1;
	unsigned _usesContiguousBarBackground : 1;
	unsigned _barHasController;

}

@property (assign,nonatomic) long long barStyle; 
@property (assign,nonatomic) unsigned long long searchBarStyle; 
@property (nonatomic,retain) UIColor * barTintColor;                             //@synthesize barTintColor=_barTintColor - In the implementation block
@property (assign,getter=isTranslucent,nonatomic) BOOL translucent; 
@property (assign,nonatomic) BOOL usesEmbeddedAppearance; 
@property (nonatomic,readonly) UIImage * backgroundImage; 
@property (nonatomic,readonly) UIImage * backgroundImagePrompt; 
@property (assign,nonatomic) BOOL usesContiguousBarBackground; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setBarStyle:(long long)arg1 ;
-(long long)barStyle;
-(long long)_barPosition;
-(BOOL)isTranslucent;
-(void)setTranslucent:(BOOL)arg1 ;
-(UIImage *)backgroundImage;
-(void)_setBarPosition:(long long)arg1 ;
-(void)setBarTintColor:(UIColor *)arg1 ;
-(UIColor *)barTintColor;
-(void)setUsesEmbeddedAppearance:(BOOL)arg1 ;
-(void)setSearchBarStyle:(unsigned long long)arg1 ;
-(void)_setBehavesAsIfSearchBarHasController:(BOOL)arg1 ;
-(BOOL)_hasCustomBackgroundImage;
-(void)_updateBackgroundImage;
-(void)setUsesContiguousBarBackground:(BOOL)arg1 ;
-(void)_setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3 ;
-(id)_backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2 ;
-(BOOL)usesEmbeddedAppearance;
-(unsigned long long)searchBarStyle;
-(void)_updateBackgroundImageIfPossible;
-(id)_createBackgroundImageForBarStyle:(long long)arg1 alpha:(double)arg2 ;
-(UIImage *)backgroundImagePrompt;
-(BOOL)usesContiguousBarBackground;
@end

