//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface MTChevronView : UIView
{
    UIImageView *_imageView;	// 8 = 0x8
}

+ (id)chevronImage;	// IMP=0x00000001001283c8
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;	// IMP=0x0000000100128740
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001001286b0
- (void)layoutSubviews;	// IMP=0x0000000100128594
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100128468

@end

