//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SiriUIContentCollectionViewCell.h"

@class NSString, SiriUITextContainerView;

@interface SVSGuideDetailSectionHeaderCollectionViewCell : SiriUIContentCollectionViewCell
{
    SiriUITextContainerView *_textContainerView;	// 8 = 0x8
}

+ (double)_trailingHorizontalOffsetWithLayoutMargins:(struct UIEdgeInsets)arg1;	// IMP=0x0000000100077df4
+ (double)_leadingHorizontalOffsetWithLayoutMargins:(struct UIEdgeInsets)arg1;	// IMP=0x0000000100077dc8
+ (id)_font;	// IMP=0x0000000100077d08
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 text:(id)arg2;	// IMP=0x0000000100077810
- (void).cxx_destruct;	// IMP=0x0000000100077e20
@property(copy, nonatomic) NSString *text;
- (void)prepareForReuse;	// IMP=0x0000000100077c7c
- (void)layoutSubviews;	// IMP=0x0000000100077b50
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100077950

@end
