//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, SATVButton, UIFocusGuide, UILabel, UITextField;

@interface SATVTextEntryView : UIView
{
    _Bool _touchInputEnabled;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_subtitleLabel;	// 24 = 0x18
    UITextField *_textField;	// 32 = 0x20
    SATVButton *_continueButton;	// 40 = 0x28
    UIView *_systemInputView;	// 48 = 0x30
    NSArray *_keyboardConstraints;	// 56 = 0x38
    UIFocusGuide *_gridFocusGuide;	// 64 = 0x40
}

@property(retain, nonatomic) UIFocusGuide *gridFocusGuide; // @synthesize gridFocusGuide=_gridFocusGuide;
@property(nonatomic) _Bool touchInputEnabled; // @synthesize touchInputEnabled=_touchInputEnabled;
@property(retain, nonatomic) NSArray *keyboardConstraints; // @synthesize keyboardConstraints=_keyboardConstraints;
@property(readonly, nonatomic) UIView *systemInputView; // @synthesize systemInputView=_systemInputView;
@property(readonly, nonatomic) SATVButton *continueButton; // @synthesize continueButton=_continueButton;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;	// IMP=0x0000000100024240
- (void)_setSystemInputView:(id)arg1;	// IMP=0x000000010002407c
- (void)_gridAlignFrame:(struct CGRect *)arg1;	// IMP=0x000000010002403c
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100023f4c
- (void)layoutSubviews;	// IMP=0x0000000100023a7c
- (void)updateConstraints;	// IMP=0x00000001000236f4
- (void)setSystemInputView:(id)arg1 touchInputEnabled:(_Bool)arg2;	// IMP=0x00000001000235b8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100023184

@end

