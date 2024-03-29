//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@interface TVPLabel : UILabel
{
    long long _previousNumberOfLines;	// 8 = 0x8
    struct CGSize _cachedSizeThatFits;	// 16 = 0x10
    struct CGSize _previousTargetSize;	// 32 = 0x20
    struct CGRect _cachedTextRectForBounds;	// 48 = 0x30
    struct CGRect _previousBounds;	// 80 = 0x50
}

@property(nonatomic) struct CGSize previousTargetSize; // @synthesize previousTargetSize=_previousTargetSize;
@property(nonatomic) struct CGSize cachedSizeThatFits; // @synthesize cachedSizeThatFits=_cachedSizeThatFits;
@property(nonatomic) long long previousNumberOfLines; // @synthesize previousNumberOfLines=_previousNumberOfLines;
@property(nonatomic) struct CGRect previousBounds; // @synthesize previousBounds=_previousBounds;
@property(nonatomic) struct CGRect cachedTextRectForBounds; // @synthesize cachedTextRectForBounds=_cachedTextRectForBounds;
- (void)_clearCachedValues;	// IMP=0x0000000100083494
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000833c4
- (struct CGRect)textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(long long)arg2;	// IMP=0x0000000100083284
- (void)setBaselineAdjustment:(long long)arg1;	// IMP=0x0000000100083234
- (void)setAdjustsFontSizeToFitWidth:(_Bool)arg1;	// IMP=0x00000001000831e4
- (void)setNumberOfLines:(long long)arg1;	// IMP=0x0000000100083194
- (void)setLineBreakMode:(long long)arg1;	// IMP=0x0000000100083144
- (void)setFont:(id)arg1;	// IMP=0x00000001000830f4
- (void)setText:(id)arg1;	// IMP=0x00000001000830a4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100082fdc

@end

