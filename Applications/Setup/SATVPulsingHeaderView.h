//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SATVHeaderView.h"

#import "SATVPulsingView.h"
#import "SATVPulsingViewImpl.h"

@class NSString;

@interface SATVPulsingHeaderView : SATVHeaderView <SATVPulsingViewImpl, SATVPulsingView>
{
    _Bool _opacityRunning;	// 8 = 0x8
    _Bool _scaleRunning;	// 9 = 0x9
    unsigned long long _mode;	// 16 = 0x10
    id <SATVPulsingAnimationDelegate> _animationDelegate;	// 24 = 0x18
}

@property(nonatomic) _Bool scaleRunning; // @synthesize scaleRunning=_scaleRunning;
@property(nonatomic) _Bool opacityRunning; // @synthesize opacityRunning=_opacityRunning;
@property(nonatomic) __weak id <SATVPulsingAnimationDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;	// IMP=0x000000010008ba60
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x000000010008b87c
- (void)pulseAtBeginTime:(double)arg1;	// IMP=0x000000010008b158
- (void)layoutSubviews;	// IMP=0x000000010008b050
- (id)initWithMode:(unsigned long long)arg1;	// IMP=0x000000010008aff0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
