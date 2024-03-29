//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface TVHNowPlayingBarsView : UIView
{
    float _repeatCount;	// 8 = 0x8
    NSArray *_barViews;	// 16 = 0x10
}

@property(nonatomic) float repeatCount; // @synthesize repeatCount=_repeatCount;
@property(copy, nonatomic) NSArray *barViews; // @synthesize barViews=_barViews;
- (void).cxx_destruct;	// IMP=0x00000001000355a8
- (void)_addAnimationsWithRepeatCount:(float)arg1;	// IMP=0x00000001000350e0
- (void)_removeAnimations;	// IMP=0x0000000100034f94
- (void)_addAnimations;	// IMP=0x0000000100034f80
- (void)_setBarViewHeights:(double)arg1;	// IMP=0x0000000100034dfc
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000100034da8
- (void)updateColorsWithUserInterfaceStyle:(long long)arg1 andFocus:(_Bool)arg2;	// IMP=0x0000000100034bc4
- (void)resumeAnimating;	// IMP=0x0000000100034b40
- (void)stopAnimating;	// IMP=0x0000000100034ab0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010003485c

@end

