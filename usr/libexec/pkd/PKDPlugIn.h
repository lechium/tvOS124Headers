//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PKPlugInCore.h"

@class NSDictionary, NSNumber, NSString, NSURL, NSUUID;

@interface PKDPlugIn : PKPlugInCore
{
    _Bool _ageRestricted;	// 8 = 0x8
    NSString *_localizedName;	// 16 = 0x10
    NSString *_localizedShortName;	// 24 = 0x18
    NSString *_localizedContainingName;	// 32 = 0x20
    NSDictionary *_localizedFileProviderActionNames;	// 40 = 0x28
    NSDictionary *_entitlements;	// 48 = 0x30
    NSString *_originalIdentifier;	// 56 = 0x38
    NSURL *_dataContainerURL;	// 64 = 0x40
    NSDictionary *_infoPlist;	// 72 = 0x48
    NSNumber *_containerAgeRestriction;	// 80 = 0x50
    NSNumber *_vNode;	// 88 = 0x58
    NSUUID *_lsKnowledgeUUID;	// 96 = 0x60
}

@property(readonly) NSUUID *lsKnowledgeUUID; // @synthesize lsKnowledgeUUID=_lsKnowledgeUUID;
@property(readonly) NSNumber *vNode; // @synthesize vNode=_vNode;
@property(readonly) _Bool ageRestricted; // @synthesize ageRestricted=_ageRestricted;
@property(readonly) NSNumber *containerAgeRestriction; // @synthesize containerAgeRestriction=_containerAgeRestriction;
@property(readonly) NSDictionary *infoPlist; // @synthesize infoPlist=_infoPlist;
- (id)dataContainerURL;	// IMP=0x0000000100008c70
- (void)setLocalizedFileProviderActionNames:(id)arg1;	// IMP=0x0000000100008c64
- (void)setLocalizedContainingName:(id)arg1;	// IMP=0x0000000100008c58
- (void)setLocalizedShortName:(id)arg1;	// IMP=0x0000000100008c4c
- (void)setLocalizedName:(id)arg1;	// IMP=0x0000000100008c40
- (void).cxx_destruct;	// IMP=0x0000000100008cd4
- (id)checkBusy;	// IMP=0x0000000100008924
- (id)enableForClient:(id)arg1 environment:(id)arg2;	// IMP=0x00000001000075e8
- (id)allowedTCCServices;	// IMP=0x0000000100007354
- (id)allowForClient:(id)arg1;	// IMP=0x00000001000071fc
- (_Bool)matchDictionary:(id)arg1 pattern:(id)arg2;	// IMP=0x00000001000070f4
- (_Bool)matchValue:(id)arg1 pattern:(id)arg2;	// IMP=0x0000000100006d4c
- (_Bool)matchValue:(id)arg1 patterns:(id)arg2;	// IMP=0x0000000100006b68
- (_Bool)matchKey:(id)arg1 pattern:(id)arg2;	// IMP=0x0000000100006588
- (_Bool)match:(id)arg1;	// IMP=0x00000001000063f4
- (id)diagnose;	// IMP=0x00000001000062ac
@property(readonly) NSString *annotationKey;
- (_Bool)hasEntitlement:(id)arg1;	// IMP=0x0000000100006178
- (id)valueForEntitlement:(id)arg1;	// IMP=0x00000001000060f4
- (id)issueResourceExtensions:(id)arg1;	// IMP=0x0000000100005d34
- (void)augmentForm:(id)arg1;	// IMP=0x0000000100005aa4
- (id)entitlements;	// IMP=0x0000000100005a94
- (id)originalIdentifier;	// IMP=0x0000000100005a84
- (id)localizedFileProviderActionNames;	// IMP=0x0000000100005818
- (id)localizedContainingName;	// IMP=0x00000001000055b8
- (id)localizedShortName;	// IMP=0x0000000100005378
- (id)localizedName;	// IMP=0x0000000100005138
- (id)prunedInfoDictionaryFor:(id)arg1;	// IMP=0x0000000100004f88
- (_Bool)isStillValid;	// IMP=0x0000000100004f80
- (id)initWithLSData:(id)arg1;	// IMP=0x0000000100004a14
- (id)bundleInfoDictionary;	// IMP=0x00000001000047e0
- (id)attribute:(id)arg1;	// IMP=0x0000000100004754
- (id)pluginKey:(id)arg1;	// IMP=0x00000001000046c8
- (id)infoKey:(id)arg1;	// IMP=0x0000000100004644
- (id)getProxy;	// IMP=0x000000010000446c
- (void)dealloc;	// IMP=0x0000000100004438

@end
