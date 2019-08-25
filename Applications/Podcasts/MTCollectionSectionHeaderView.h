//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTCollectionReusableView.h"

@class MTSectionHeaderView, NSString, UILabel;

@interface MTCollectionSectionHeaderView : MTCollectionReusableView
{
    MTSectionHeaderView *_sectionHeaderView;	// 8 = 0x8
}

+ (id)font;	// IMP=0x000000010002b7a0
+ (double)height;	// IMP=0x000000010002b78c
@property(retain, nonatomic) MTSectionHeaderView *sectionHeaderView; // @synthesize sectionHeaderView=_sectionHeaderView;
- (void).cxx_destruct;	// IMP=0x000000010002bd9c
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x000000010002bc98
- (void)prepareForReuse;	// IMP=0x000000010002bb6c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010002babc
@property(retain, nonatomic) NSString *backdropGroupName;
@property(readonly, nonatomic) UILabel *textLabel;
@property(nonatomic) double maxWidth;
- (_Bool)isFloating;	// IMP=0x000000010002b958
- (void)setNeedsLayout;	// IMP=0x000000010002b900
- (void)layoutSubviews;	// IMP=0x000000010002b898
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010002b7b4

@end

