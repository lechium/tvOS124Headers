//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSArray, NSDate, NSString, UILabel;

@interface TVWiFiCertificateSummaryCell : UITableViewCell
{
    _Bool _trusted;	// 8 = 0x8
    NSString *_titleText;	// 16 = 0x10
    NSString *_issuer;	// 24 = 0x18
    NSDate *_expirationDate;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
    UILabel *_issuerLabel;	// 48 = 0x30
    UILabel *_trustLabel;	// 56 = 0x38
    UILabel *_isTrustedLabel;	// 64 = 0x40
    UILabel *_expiresByLabel;	// 72 = 0x48
    UILabel *_expiryDateLabel;	// 80 = 0x50
    NSArray *_constraints;	// 88 = 0x58
}

+ (id)dateFormatter;	// IMP=0x000000010007f2e8
@property(readonly, copy, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(readonly, nonatomic) UILabel *expiryDateLabel; // @synthesize expiryDateLabel=_expiryDateLabel;
@property(readonly, nonatomic) UILabel *expiresByLabel; // @synthesize expiresByLabel=_expiresByLabel;
@property(readonly, nonatomic) UILabel *isTrustedLabel; // @synthesize isTrustedLabel=_isTrustedLabel;
@property(readonly, nonatomic) UILabel *trustLabel; // @synthesize trustLabel=_trustLabel;
@property(readonly, nonatomic) UILabel *issuerLabel; // @synthesize issuerLabel=_issuerLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic, getter=isTrusted) _Bool trusted; // @synthesize trusted=_trusted;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSString *issuer; // @synthesize issuer=_issuer;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;	// IMP=0x0000000100080f74
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100080df0
- (void)_updateCellBackground;	// IMP=0x0000000100080d28
- (id)_newTitleLabel;	// IMP=0x0000000100080c7c
- (id)_newSubtitleLabel;	// IMP=0x0000000100080c14
- (id)_subtitleFont;	// IMP=0x0000000100080b8c
- (id)_titleFont;	// IMP=0x0000000100080b04
- (void)updateConstraints;	// IMP=0x000000010007fd10
- (_Bool)canBecomeFocused;	// IMP=0x000000010007fd08
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010007f368

@end
