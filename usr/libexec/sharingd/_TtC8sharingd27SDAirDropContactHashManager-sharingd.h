//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC8sharingd27SDAirDropContactHashManager.h"

@interface _TtC8sharingd27SDAirDropContactHashManager (sharingd)
+ (id)ContactHashableKeysToFetch;	// IMP=0x00000001001e26d8
+ (id)GeneralContactKeysToFetch;	// IMP=0x00000001001e2534
- (id)contactOrFakeMeCardWithIdentifier:(id)arg1;	// IMP=0x00000001001e1f4c
- (_Bool)contactsContainsShortHashes:(id)arg1;	// IMP=0x00000001001e1a94
- (id)contactIdentifierForMediumHashes:(id)arg1;	// IMP=0x00000001001e126c
- (id)addressOrNumForHash:(id)arg1;	// IMP=0x00000001001e0d68
- (id)contactForCombinedHash:(id)arg1;	// IMP=0x00000001001e09a4
- (void)updateMeCard:(id)arg1;	// IMP=0x00000001001e0470
- (void)forcePersistNow;	// IMP=0x00000001001dfbe4
- (void)hashesNeedUpdating;	// IMP=0x00000001001df44c
- (void)activate;	// IMP=0x00000001001df030
@end

