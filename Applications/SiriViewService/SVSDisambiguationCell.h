//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SiriUIContentCollectionViewCell.h"

@class NSLayoutConstraint, SiriUIContentLabel, SiriUIDisambiguationItem, UIImageView;

@interface SVSDisambiguationCell : SiriUIContentCollectionViewCell
{
    _Bool _hasStarColumn;	// 8 = 0x8
    _Bool _lastRow;	// 9 = 0x9
    _Bool _constraintsCreated;	// 10 = 0xa
    SiriUIDisambiguationItem *_item;	// 16 = 0x10
    SiriUIContentLabel *_titleLabel;	// 24 = 0x18
    SiriUIContentLabel *_secondaryTitleLabel;	// 32 = 0x20
    SiriUIContentLabel *_extraDisambiguationLabel;	// 40 = 0x28
    SiriUIContentLabel *_extraDisambiguationSubTextLabel;	// 48 = 0x30
    UIImageView *_imageView;	// 56 = 0x38
    UIImageView *_starView;	// 64 = 0x40
    NSLayoutConstraint *_titleLeadingOffsetConstraint;	// 72 = 0x48
    NSLayoutConstraint *_imageLeadingOffsetConstraint;	// 80 = 0x50
    NSLayoutConstraint *_titleBaselineConstraint;	// 88 = 0x58
    NSLayoutConstraint *_secondaryTitleBaselineConstraint;	// 96 = 0x60
    NSLayoutConstraint *_extraTitleBaselineConstraint;	// 104 = 0x68
}

+ (double)defaultHeightWithImageView;	// IMP=0x000000010007a4b0
+ (double)defaultHeightWithSubtitle;	// IMP=0x000000010007a4a4
+ (double)defaultHeightWithHeading;	// IMP=0x000000010007a498
+ (double)defaultHeight;	// IMP=0x000000010007a48c
@property(nonatomic) _Bool constraintsCreated; // @synthesize constraintsCreated=_constraintsCreated;
@property(retain, nonatomic) NSLayoutConstraint *extraTitleBaselineConstraint; // @synthesize extraTitleBaselineConstraint=_extraTitleBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *secondaryTitleBaselineConstraint; // @synthesize secondaryTitleBaselineConstraint=_secondaryTitleBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleBaselineConstraint; // @synthesize titleBaselineConstraint=_titleBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageLeadingOffsetConstraint; // @synthesize imageLeadingOffsetConstraint=_imageLeadingOffsetConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLeadingOffsetConstraint; // @synthesize titleLeadingOffsetConstraint=_titleLeadingOffsetConstraint;
@property(retain, nonatomic) UIImageView *starView; // @synthesize starView=_starView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) SiriUIContentLabel *extraDisambiguationSubTextLabel; // @synthesize extraDisambiguationSubTextLabel=_extraDisambiguationSubTextLabel;
@property(retain, nonatomic) SiriUIContentLabel *extraDisambiguationLabel; // @synthesize extraDisambiguationLabel=_extraDisambiguationLabel;
@property(retain, nonatomic) SiriUIContentLabel *secondaryTitleLabel; // @synthesize secondaryTitleLabel=_secondaryTitleLabel;
@property(retain, nonatomic) SiriUIContentLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic, getter=isLastRow) _Bool lastRow; // @synthesize lastRow=_lastRow;
@property(nonatomic) _Bool hasStarColumn; // @synthesize hasStarColumn=_hasStarColumn;
@property(retain, nonatomic) SiriUIDisambiguationItem *item; // @synthesize item=_item;
- (void).cxx_destruct;	// IMP=0x000000010007a6a4
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x000000010007a390
- (void)prepareForReuse;	// IMP=0x0000000100079c40
- (void)updateConstraintConstants;	// IMP=0x00000001000799fc
- (void)updateConstraints;	// IMP=0x000000010007917c
- (void)layoutSubviews;	// IMP=0x0000000100078fa8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100078b0c

@end

