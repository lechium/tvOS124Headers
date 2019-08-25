/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIAtomTextViewAtomLayout.h>

@class UIColor, NSString;

@interface _UISearchAtomBackgroundView : UIView <_UIAtomTextViewAtomLayout> {

	long long _selectionStyle;
	SCD_Struct_UI20 _flags;
	UIColor* _defaultColor;

}

@property (nonatomic,retain) UIColor * defaultColor;                        //@synthesize defaultColor=_defaultColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) long long selectionStyle; 
@property (nonatomic,readonly) CGRect selectionBounds; 
@property (nonatomic,readonly) long long baseWritingDirection; 
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(long long)selectionStyle;
-(void)setSelectionStyle:(long long)arg1 ;
-(void)setSelectionStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(CGRect)selectionBounds;
-(void)setDefaultColor:(UIColor *)arg1 ;
-(void)_updateSelectionStyleMask;
-(void)_updateBackgroundColor;
-(UIColor *)defaultColor;
@end

