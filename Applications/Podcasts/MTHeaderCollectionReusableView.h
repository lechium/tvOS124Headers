//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class NSString, UILabel, UIView;

@interface MTHeaderCollectionReusableView : UICollectionReusableView
{
    UILabel *_headerLabel;	// 8 = 0x8
}

+ (id)reuseIdentifier;	// IMP=0x00000001000ff094
+ (double)height;	// IMP=0x00000001000ff088
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
- (void).cxx_destruct;	// IMP=0x00000001000ff4f0
- (void)setupSubviews;	// IMP=0x00000001000ff450
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000ff3c8
- (void)prepareForReuse;	// IMP=0x00000001000ff374
- (void)layoutSubviews;	// IMP=0x00000001000ff2c4
@property(copy, nonatomic) NSString *title;
@property(readonly, nonatomic) UIView *titleView;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000ff0b0

@end

