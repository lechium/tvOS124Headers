//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SVSUtteranceCorrectionTextViewDelegate.h"

@class NSString, SVSSpeechRecognizedCorrectionTextView, UIVisualEffectView;

@interface SVSEditableTextView : UIView <SVSUtteranceCorrectionTextViewDelegate>
{
    struct NSDirectionalEdgeInsets _edgeInsets;	// 8 = 0x8
    SVSSpeechRecognizedCorrectionTextView *_textView;	// 40 = 0x28
    UIVisualEffectView *_blurView;	// 48 = 0x30
    double _topOffsetForTextView;	// 56 = 0x38
    double _heightOffsetForTextView;	// 64 = 0x40
    _Bool _editable;	// 72 = 0x48
    _Bool _didCorrect;	// 73 = 0x49
    id <SVSEditableTextViewDelegate> _delegate;	// 80 = 0x50
    long long _textAlignment;	// 88 = 0x58
}

+ (double)insertionAnimatedZPosition;	// IMP=0x00000001000032b4
@property(nonatomic) _Bool didCorrect; // @synthesize didCorrect=_didCorrect;
@property(nonatomic) _Bool editable; // @synthesize editable=_editable;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) __weak id <SVSEditableTextViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100003d4c
- (void)utteranceTextDidReceiveReturnKey:(id)arg1;	// IMP=0x0000000100003bf8
- (void)utteranceTextDidResignFirstResponder:(id)arg1;	// IMP=0x0000000100003ba0
- (void)utteranceTextDidBecomeFirstResponder:(id)arg1;	// IMP=0x0000000100003b94
- (double)_indentWidth;	// IMP=0x0000000100003b60
- (void)textViewDidChange:(id)arg1;	// IMP=0x0000000100003abc
- (void)textViewDidEndEditing:(id)arg1;	// IMP=0x0000000100003a94
- (_Bool)textViewShouldBeginEditing:(id)arg1;	// IMP=0x00000001000039e0
- (void)setDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;	// IMP=0x000000010000392c
- (void)_adjustLineSpacing;	// IMP=0x0000000100003800
- (void)endEditingAndCorrect:(_Bool)arg1;	// IMP=0x0000000100003730
- (void)beginEditing;	// IMP=0x0000000100003718
- (void)_handleTap:(id)arg1;	// IMP=0x00000001000036cc
- (_Bool)isFirstResponder;	// IMP=0x00000001000036b4
- (_Bool)resignFirstResponder;	// IMP=0x000000010000365c
- (_Bool)canResignFirstResponder;	// IMP=0x0000000100003644
- (void)layoutSubviews;	// IMP=0x0000000100003508
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000001000034d4
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010000346c
@property(copy, nonatomic) NSString *text;
- (double)baselineOffsetFromBottom;	// IMP=0x000000010000331c
- (double)firstLineBaselineOffsetFromTop;	// IMP=0x00000001000032c0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100002e0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

