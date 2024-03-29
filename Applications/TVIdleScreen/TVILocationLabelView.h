//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UILabel;

@interface TVILocationLabelView : UIView
{
    NSString *_titleLabelText;	// 8 = 0x8
    NSString *_subtitleLabelText;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_subtitleLabel;	// 32 = 0x20
}

@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *subtitleLabelText; // @synthesize subtitleLabelText=_subtitleLabelText;
@property(retain, nonatomic) NSString *titleLabelText; // @synthesize titleLabelText=_titleLabelText;
- (void).cxx_destruct;	// IMP=0x0000000100010f30
- (void)_setText:(id)arg1 onLabel:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000100010c70
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100010b20
- (void)setSubtitle:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100010b14
- (void)setTitle:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100010b08
- (void)setSubtitleLabelText:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100010a54
- (void)setTitleLabelText:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000109a0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000102e8

@end

