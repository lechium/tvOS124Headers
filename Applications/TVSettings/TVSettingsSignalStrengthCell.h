//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView;

@interface TVSettingsSignalStrengthCell : UITableViewCell
{
    float _signalStrength;	// 8 = 0x8
    UIImageView *_signalStrengthAccessoryView;	// 16 = 0x10
}

@property(retain, nonatomic) UIImageView *signalStrengthAccessoryView; // @synthesize signalStrengthAccessoryView=_signalStrengthAccessoryView;
@property(nonatomic) float signalStrength; // @synthesize signalStrength=_signalStrength;
- (void).cxx_destruct;	// IMP=0x00000001000bdaf0
- (void)prepareForReuse;	// IMP=0x00000001000bda60
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000001000bd784

@end

