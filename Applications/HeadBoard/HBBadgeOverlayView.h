//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class HBBadgeView, NSString;

@interface HBBadgeOverlayView : UIView
{
    NSString *_badgeValue;	// 8 = 0x8
    double _maximumBadgeWidth;	// 16 = 0x10
    HBBadgeView *_badgeView;	// 24 = 0x18
}

@property(retain, nonatomic) HBBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(nonatomic) double maximumBadgeWidth; // @synthesize maximumBadgeWidth=_maximumBadgeWidth;
@property(copy, nonatomic) NSString *badgeValue; // @synthesize badgeValue=_badgeValue;
- (void).cxx_destruct;	// IMP=0x000000010001c69c
- (void)layoutSubviews;	// IMP=0x000000010001c39c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010001c2d0

@end

