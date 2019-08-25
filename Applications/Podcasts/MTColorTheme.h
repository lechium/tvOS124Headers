//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor;

@interface MTColorTheme : NSObject
{
    _Bool _isBackgroundLight;	// 8 = 0x8
    UIColor *_backgroundColor;	// 16 = 0x10
    UIColor *_primaryTextColor;	// 24 = 0x18
    UIColor *_secondaryTextColor;	// 32 = 0x20
}

@property(nonatomic) _Bool isBackgroundLight; // @synthesize isBackgroundLight=_isBackgroundLight;
@property(retain, nonatomic) UIColor *secondaryTextColor; // @synthesize secondaryTextColor=_secondaryTextColor;
@property(retain, nonatomic) UIColor *primaryTextColor; // @synthesize primaryTextColor=_primaryTextColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;	// IMP=0x000000010008a4a0
- (_Bool)isBackgroundDark;	// IMP=0x000000010008a3f4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010008a188

@end

