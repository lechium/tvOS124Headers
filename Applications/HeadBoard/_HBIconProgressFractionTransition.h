//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_HBIconProgressTransition.h"

@interface _HBIconProgressFractionTransition : _HBIconProgressTransition
{
    double _targetFraction;	// 8 = 0x8
}

+ (id)newTransitionToFraction:(double)arg1;	// IMP=0x0000000100041bdc
- (_Bool)isCompleteWithView:(id)arg1;	// IMP=0x0000000100041d5c
- (void)_updateView:(id)arg1 forDisplayedFraction:(double)arg2;	// IMP=0x0000000100041ce4
- (void)completeTransitionAndUpdateView:(id)arg1;	// IMP=0x0000000100041ccc
- (void)updateView:(id)arg1 withElapsedTime:(double)arg2;	// IMP=0x0000000100041c40
- (void)updateToFraction:(double)arg1;	// IMP=0x0000000100041c30

@end
