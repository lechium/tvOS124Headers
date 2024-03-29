/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarSignalView.h>

@class _UIStatusBarCycleAnimation;

@interface _UIStatusBarWifiSignalView : _UIStatusBarSignalView {

	BOOL _needsCycleAnimationUpdate;
	_UIStatusBarCycleAnimation* _cycleAnimation;

}

@property (assign,nonatomic) BOOL needsCycleAnimationUpdate;                           //@synthesize needsCycleAnimationUpdate=_needsCycleAnimationUpdate - In the implementation block
@property (nonatomic,retain) _UIStatusBarCycleAnimation * cycleAnimation;              //@synthesize cycleAnimation=_cycleAnimation - In the implementation block
+(double)_interspaceForIconSize:(long long)arg1 ;
+(CGSize)_intrinsicContentSizeForNumberOfBars:(long long)arg1 iconSize:(long long)arg2 ;
+(double)_barThicknessAtIndex:(unsigned long long)arg1 iconSize:(long long)arg2 ;
+(double)_totalWidthForIconSize:(long long)arg1 ;
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
-(void)didMoveToWindow;
-(id)accessibilityHUDRepresentation;
-(_UIStatusBarCycleAnimation *)cycleAnimation;
-(void)setCycleAnimation:(_UIStatusBarCycleAnimation *)arg1 ;
-(void)_updateBars;
-(void)_setNeedsUpdateCycleAnimation;
-(void)_updateCycleAnimationNow;
-(void)_updateActiveBars;
-(void)_updateCycleAnimationIfNeeded;
-(void)_colorsDidChange;
-(void)_iconSizeDidChange;
-(void)_updateFromMode:(long long)arg1 ;
-(BOOL)needsCycleAnimationUpdate;
-(void)setNeedsCycleAnimationUpdate:(BOOL)arg1 ;
-(double)_barCornerRadius;
@end

