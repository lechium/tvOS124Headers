//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKInternalRepresentation.h"

@class NSNumber, NSString;

@interface GKGameDescriptor : GKInternalRepresentation
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSString *_bundleVersion;	// 16 = 0x10
    NSNumber *_adamID;	// 24 = 0x18
    NSNumber *_externalVersion;	// 32 = 0x20
    NSString *_shortBundleVersion;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000d497c
+ (id)secureCodedPropertyKeys;	// IMP=0x00000001000d4820
+ (id)gameDescriptorWithBundleID:(id)arg1 bundleVersion:(id)arg2 shortBundleVersion:(id)arg3 adamID:(id)arg4;	// IMP=0x00000001000d43e8
+ (id)gameDescriptorWithBundleID:(id)arg1 bundleVersion:(id)arg2 adamID:(id)arg3;	// IMP=0x00000001000d4350
+ (id)gameDescriptorWithBundleID:(id)arg1 adamID:(id)arg2;	// IMP=0x00000001000d42d0
+ (id)gameDescriptorWithBundleID:(id)arg1;	// IMP=0x00000001000d4270
@property(copy, nonatomic) NSString *shortBundleVersion; // @synthesize shortBundleVersion=_shortBundleVersion;
@property(retain, nonatomic) NSNumber *externalVersion; // @synthesize externalVersion=_externalVersion;
@property(retain, nonatomic) NSNumber *adamID; // @synthesize adamID=_adamID;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)description;	// IMP=0x00000001000d4c38
- (void)setDictionary:(id)arg1;	// IMP=0x00000001000d4b44
- (id)dictionaryForRequest;	// IMP=0x00000001000d4a30
- (void)dealloc;	// IMP=0x00000001000d4984
- (id)initWithPushDictionary:(id)arg1;	// IMP=0x00000001000d4560
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000001000d4434

@end

