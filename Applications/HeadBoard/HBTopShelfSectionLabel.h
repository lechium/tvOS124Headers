//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class NSString, UILabel, UIVisualEffectView;

@interface HBTopShelfSectionLabel : UICollectionReusableView
{
    UILabel *_label;	// 8 = 0x8
    UIVisualEffectView *_vibracyView;	// 16 = 0x10
}

+ (id)_font;	// IMP=0x000000010002e344
+ (struct CGSize)sizeForString:(id)arg1;	// IMP=0x000000010002e0e4
@property(nonatomic) __weak UIVisualEffectView *vibracyView; // @synthesize vibracyView=_vibracyView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;	// IMP=0x000000010002e5d0
@property(copy, nonatomic) NSString *title;
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x000000010002de3c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010002db04

@end
