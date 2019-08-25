//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTSettingHeaderAction, NSArray, NSString;

@interface MTSettingsGroup : NSObject
{
    NSString *_groupTitle;	// 8 = 0x8
    NSString *_groupFooter;	// 16 = 0x10
    CDUnknownBlockType _settingsHandler;	// 24 = 0x18
    MTSettingHeaderAction *_headerAction;	// 32 = 0x20
    double _customHeaderHeight;	// 40 = 0x28
    NSArray *_groupSettings;	// 48 = 0x30
}

+ (id)groupWithTitle:(id)arg1 footerText:(id)arg2 settingsHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010011a240
+ (id)groupWithTitle:(id)arg1 footerText:(id)arg2 settings:(id)arg3;	// IMP=0x000000010011a064
@property(copy, nonatomic) NSArray *groupSettings; // @synthesize groupSettings=_groupSettings;
@property(nonatomic) double customHeaderHeight; // @synthesize customHeaderHeight=_customHeaderHeight;
@property(retain, nonatomic) MTSettingHeaderAction *headerAction; // @synthesize headerAction=_headerAction;
@property(copy, nonatomic) CDUnknownBlockType settingsHandler; // @synthesize settingsHandler=_settingsHandler;
@property(copy, nonatomic) NSString *groupFooter; // @synthesize groupFooter=_groupFooter;
@property(copy, nonatomic) NSString *groupTitle; // @synthesize groupTitle=_groupTitle;
- (void).cxx_destruct;	// IMP=0x000000010011a538

@end

