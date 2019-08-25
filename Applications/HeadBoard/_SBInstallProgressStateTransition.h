//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_HBIconProgressTransition.h"

@class CAMediaTimingFunction;

@interface _SBInstallProgressStateTransition : _HBIconProgressTransition
{
    double _totalElapsedTime;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    CAMediaTimingFunction *_timingFunction;	// 24 = 0x18
    long long _fromState;	// 32 = 0x20
    long long _toState;	// 40 = 0x28
    double _fraction;	// 48 = 0x30
}

+ (Class)_classForTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x0000000100041178
+ (id)newTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x0000000100041130
- (void).cxx_destruct;	// IMP=0x00000001000414c8
- (void)_updateView:(id)arg1;	// IMP=0x0000000100041444
- (_Bool)isCompleteWithView:(id)arg1;	// IMP=0x0000000100041428
- (void)completeTransitionAndUpdateView:(id)arg1;	// IMP=0x000000010004140c
- (void)updateView:(id)arg1 withElapsedTime:(double)arg2;	// IMP=0x0000000100041360
- (id)_initWithFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x0000000100041274

@end

