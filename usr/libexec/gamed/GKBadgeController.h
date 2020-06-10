//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface GKBadgeController : NSObject
{
    NSMutableDictionary *_badgeDictionaries[4];	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_syncQueue;	// 40 = 0x28
    _Bool _dirty;	// 48 = 0x30
}

+ (id)sharedController;	// IMP=0x00000001000dbd9c
- (void)registerBadgePermissionForBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000de668
- (void)unbadgeAllApplications;	// IMP=0x00000001000de3e8
- (void)badgeAllApplications;	// IMP=0x00000001000de144
- (void)setBadgeCount:(unsigned long long)arg1 forBundleID:(id)arg2 badgeType:(unsigned long long)arg3;	// IMP=0x00000001000ddb04
- (unsigned long long)_totalBadgeCountForBundleID:(id)arg1;	// IMP=0x00000001000dd980
- (unsigned long long)badgeCountForBundleID:(id)arg1 badgeType:(unsigned long long)arg2;	// IMP=0x00000001000dd780
- (unsigned long long)_badgeCountForBundleID:(id)arg1 badgeType:(unsigned long long)arg2;	// IMP=0x00000001000dd614
- (id)_dictionaryForBadgeType:(unsigned long long)arg1;	// IMP=0x00000001000dd4d0
- (void)badgeBundleID:(id)arg1 badgeCount:(unsigned long long)arg2;	// IMP=0x00000001000dceec
- (void)badgeApplicationWithBundleID:(id)arg1 badgeCount:(unsigned long long)arg2;	// IMP=0x00000001000dc8fc
- (_Bool)isBadgingEnabledForBundleID:(id)arg1;	// IMP=0x00000001000dc890
- (void)synchronize;	// IMP=0x00000001000dbf90
- (id)_plistKeyForBadgeType:(unsigned long long)arg1;	// IMP=0x00000001000dbf58
- (void)dealloc;	// IMP=0x00000001000dbedc
- (id)init;	// IMP=0x00000001000dbe68
- (id)_badgeCountURL;	// IMP=0x00000001000dbe14

@end
