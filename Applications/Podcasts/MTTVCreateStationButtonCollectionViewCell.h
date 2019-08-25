//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIButton;

@interface MTTVCreateStationButtonCollectionViewCell : UICollectionViewCell
{
    id <MTTVCreateStationButtonCollectionViewCellDelegate> _delegate;	// 8 = 0x8
    UIButton *_button;	// 16 = 0x10
}

+ (struct CGSize)sizeForWidth:(double)arg1;	// IMP=0x0000000100133e40
+ (id)reuseIdentifier;	// IMP=0x0000000100133e24
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic) __weak id <MTTVCreateStationButtonCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100134408
- (id)preferredFocusedView;	// IMP=0x00000001001343b4
- (_Bool)canBecomeFocused;	// IMP=0x00000001001343ac
- (void)layoutSubviews;	// IMP=0x0000000100134224
- (void)prepareForReuse;	// IMP=0x00000001001341d4
- (void)_buttonTapped:(id)arg1;	// IMP=0x0000000100134040
@property(readonly, nonatomic, getter=isButtonFocused) _Bool buttonFocused;
@property(nonatomic, getter=isButtonFocusable) _Bool buttonFocusable;
- (void)configureSubviews;	// IMP=0x0000000100133f14
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100133ebc
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000100133e4c

@end

