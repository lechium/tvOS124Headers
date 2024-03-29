//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SiriUIContentLabel, UIFont;

@interface SVSServerUtteranceView : UIView
{
    struct NSDirectionalEdgeInsets _edgeInsets;	// 8 = 0x8
    SiriUIContentLabel *_label;	// 40 = 0x28
    _Bool _chevronHasBeenShown;	// 48 = 0x30
    _Bool _blendEffectEnabled;	// 49 = 0x31
}

+ (double)insertionAnimatedZPosition;	// IMP=0x0000000100022338
- (void).cxx_destruct;	// IMP=0x0000000100022808
- (double)_scaledSiriCorrectionViewLeading;	// IMP=0x00000001000227a8
- (void)layoutSubviews;	// IMP=0x0000000100022650
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000225ec
@property(nonatomic, getter=isBlendEffectEnabled) _Bool blendEffectEnabled;
@property(retain, nonatomic) UIFont *font;
- (void)setAttributedText:(id)arg1;	// IMP=0x0000000100022484
- (void)setText:(id)arg1;	// IMP=0x0000000100022404
- (double)baselineOffsetFromBottom;	// IMP=0x00000001000223a4
- (double)firstLineBaselineOffsetFromTop;	// IMP=0x0000000100022344
- (_Bool)chevronHasBeenShown;	// IMP=0x0000000100022328
- (void)setChevronHidden:(_Bool)arg1;	// IMP=0x0000000100022308
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010002218c

@end

