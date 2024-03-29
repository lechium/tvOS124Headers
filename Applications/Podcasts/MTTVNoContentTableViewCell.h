//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString, UILabel;

@interface MTTVNoContentTableViewCell : UITableViewCell
{
    NSString *_message;	// 8 = 0x8
    UILabel *_messageLabel;	// 16 = 0x10
}

+ (id)messageFont;	// IMP=0x000000010009efcc
+ (double)marginBottomForStyle:(unsigned long long)arg1;	// IMP=0x000000010009efb8
+ (double)heightForStyle:(unsigned long long)arg1;	// IMP=0x000000010009ef38
+ (id)reuseIdentifier;	// IMP=0x000000010009ef0c
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;	// IMP=0x000000010009f69c
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010009f5f0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010009f520
- (void)layoutSubviews;	// IMP=0x000000010009f3e4
- (void)updateTextColors;	// IMP=0x000000010009f378
- (void)configureSubviews;	// IMP=0x000000010009f1a0
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010009f0c4
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x000000010009f0b0
- (id)initWithMessage:(id)arg1;	// IMP=0x000000010009f050
- (id)init;	// IMP=0x000000010009efec

@end

