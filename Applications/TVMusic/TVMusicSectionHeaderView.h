//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class NSString, UILabel;

@interface TVMusicSectionHeaderView : UICollectionReusableView
{
    NSString *_headerText;	// 8 = 0x8
    UILabel *_headingLabel;	// 16 = 0x10
}

@property(retain, nonatomic) UILabel *headingLabel; // @synthesize headingLabel=_headingLabel;
@property(retain, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
- (void).cxx_destruct;	// IMP=0x000000010001c308
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010001c1f8
- (void)_addHeadingLabel;	// IMP=0x000000010001c034
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010001bf0c

@end
