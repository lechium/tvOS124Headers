/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKeyboardLayout.h>

@class UIKBBackgroundView, UIKBTree;

@interface UIKeyboardLayoutDictation : UIKeyboardLayout {

	UIKBBackgroundView* _backgroundView;
	UIKBTree* _keyplane;

}
+(id)activeInstance;
+(CGSize)keyboardSizeForInputMode:(id)arg1 screenTraits:(id)arg2 keyboardType:(long long)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setRenderConfig:(id)arg1 ;
-(id)currentKeyplane;
-(void)_moveWithEvent:(id)arg1 ;
-(BOOL)visible;
-(int)_clipCornersOfView:(id)arg1 ;
-(BOOL)usesAutoShift;
-(void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3 ;
-(CGRect)dragGestureRectInView:(id)arg1 ;
-(CGSize)splitLeftSize;
-(void)setupBackgroundViewForNewSplitTraits:(id)arg1 ;
-(BOOL)shouldFadeFromLayout;
-(BOOL)shouldFadeToLayout;
@end
