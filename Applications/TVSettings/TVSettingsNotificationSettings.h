//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface TVSettingsNotificationSettings : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSArray *_sectionInfos;	// 16 = 0x10
    NSString *_displayName;	// 24 = 0x18
}

@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSArray *sectionInfos; // @synthesize sectionInfos=_sectionInfos;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;	// IMP=0x0000000100005f64
@property(nonatomic) _Bool allowsNotifications;
- (unsigned long long)hash;	// IMP=0x0000000100005c84
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100005bb8

@end

