//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UILabel;

@interface TVPSharedPSAlbumCreatorCell : UIView
{
    NSString *_creatorName;	// 8 = 0x8
    NSString *_dateCreated;	// 16 = 0x10
    UILabel *_creatorNameLabel;	// 24 = 0x18
    UILabel *_dateCreatedLabel;	// 32 = 0x20
    UIView *_lineDivider;	// 40 = 0x28
}

+ (double)maxCellHeightWithTitle:(id)arg1 subtitle:(id)arg2 maxWidth:(double)arg3;	// IMP=0x000000010002611c
@property(retain, nonatomic) UIView *lineDivider; // @synthesize lineDivider=_lineDivider;
@property(retain, nonatomic) UILabel *dateCreatedLabel; // @synthesize dateCreatedLabel=_dateCreatedLabel;
@property(retain, nonatomic) UILabel *creatorNameLabel; // @synthesize creatorNameLabel=_creatorNameLabel;
@property(copy, nonatomic) NSString *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(copy, nonatomic) NSString *creatorName; // @synthesize creatorName=_creatorName;
- (void).cxx_destruct;	// IMP=0x00000001000268d4
- (void)layoutSubviews;	// IMP=0x00000001000265cc

@end

