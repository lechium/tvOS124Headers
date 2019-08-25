//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UILabel;

@interface TVMusicNoMusicView : UIView
{
    NSString *_message;	// 8 = 0x8
    UIView *_containerView;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_messageLabel;	// 32 = 0x20
}

+ (struct CGSize)getAttributedTextSize:(id)arg1 font:(id)arg2 maxWidth:(double)arg3;	// IMP=0x000000010001bd0c
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;	// IMP=0x000000010001bea4
- (void)_configureUIControls;	// IMP=0x000000010001ba04
- (void)_updateColorsForUserInterfaceStyle:(long long)arg1;	// IMP=0x000000010001b920
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010001b854
- (void)layoutSubviews;	// IMP=0x000000010001b590
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010001b4a4

@end
