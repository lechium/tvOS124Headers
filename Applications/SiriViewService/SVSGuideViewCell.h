//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SiriUIContentCollectionViewCell.h"

@class NSString, SiriUIContentLabel, UIImage, UIImageView;

@interface SVSGuideViewCell : SiriUIContentCollectionViewCell
{
    UIImageView *_iconImageView;	// 8 = 0x8
    SiriUIContentLabel *_nameLabel;	// 16 = 0x10
    SiriUIContentLabel *_tagPhraseLabel;	// 24 = 0x18
    _Bool _hasCreatedConstraints;	// 32 = 0x20
    UIImage *_iconImage;	// 40 = 0x28
    NSString *_name;	// 48 = 0x30
    NSString *_tagPhrase;	// 56 = 0x38
    NSString *_aceId;	// 64 = 0x40
}

+ (_Bool)chevronBlendEffectEnabled;	// IMP=0x0000000100051038
+ (struct UIEdgeInsets)defaultInsets;	// IMP=0x0000000100050fdc
+ (double)heightOfCellWithName:(id)arg1 tagPhrase:(id)arg2 width:(double)arg3;	// IMP=0x0000000100050c50
+ (_Bool)placesImageAboveText;	// IMP=0x00000001000504e8
+ (_Bool)_allowsTextToWrap;	// IMP=0x0000000100050474
+ (id)_tagPhraseLabelFont;	// IMP=0x0000000100050460
+ (id)_nameLabelFont;	// IMP=0x000000010005044c
@property(copy, nonatomic) NSString *aceId; // @synthesize aceId=_aceId;
@property(copy, nonatomic) NSString *tagPhrase; // @synthesize tagPhrase=_tagPhrase;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
- (void).cxx_destruct;	// IMP=0x0000000100051118
- (void)updateConstraints;	// IMP=0x000000010005055c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000500a8

@end

