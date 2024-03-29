//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, SATVHeaderView, UITextField;

@interface SATVTimeZoneView : UIView
{
    _Bool _touchInputEnabled;	// 8 = 0x8
    UIView *_searchView;	// 16 = 0x10
    SATVHeaderView *_headerView;	// 24 = 0x18
    UITextField *_textField;	// 32 = 0x20
    UIView *_systemInputView;	// 40 = 0x28
    NSArray *_keyboardConstraints;	// 48 = 0x30
    NSArray *_headerConstraints;	// 56 = 0x38
    NSArray *_searchViewConstraints;	// 64 = 0x40
    NSArray *_textFieldConstraints;	// 72 = 0x48
}

@property(nonatomic) _Bool touchInputEnabled; // @synthesize touchInputEnabled=_touchInputEnabled;
@property(retain, nonatomic) NSArray *textFieldConstraints; // @synthesize textFieldConstraints=_textFieldConstraints;
@property(retain, nonatomic) NSArray *searchViewConstraints; // @synthesize searchViewConstraints=_searchViewConstraints;
@property(retain, nonatomic) NSArray *headerConstraints; // @synthesize headerConstraints=_headerConstraints;
@property(retain, nonatomic) NSArray *keyboardConstraints; // @synthesize keyboardConstraints=_keyboardConstraints;
@property(readonly, nonatomic) UIView *systemInputView; // @synthesize systemInputView=_systemInputView;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(readonly, nonatomic) SATVHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *searchView; // @synthesize searchView=_searchView;
- (void).cxx_destruct;	// IMP=0x000000010004e7cc
- (void)_gridAlignFrame:(struct CGRect *)arg1;	// IMP=0x000000010004e698
- (void)setSystemInputView:(id)arg1 touchInputEnabled:(_Bool)arg2;	// IMP=0x000000010004e50c
- (void)layoutSubviews;	// IMP=0x000000010004e110
- (void)updateConstraints;	// IMP=0x000000010004dd88
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010004db70

@end

