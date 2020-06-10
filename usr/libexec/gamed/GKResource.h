//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSMutableDictionary;
@protocol NSObject><NSCopying;

@interface GKResource : NSObject <NSCopying, NSMutableCopying>
{
    _Bool _invalid;	// 8 = 0x8
    NSMutableDictionary *_metadataLookup;	// 16 = 0x10
    id <NSObject><NSCopying> _resourceID;	// 24 = 0x18
    id _representedItem;	// 32 = 0x20
    double _TTL;	// 40 = 0x28
}

+ (id)resourceWithID:(id)arg1 representedItem:(id)arg2 TTL:(double)arg3;	// IMP=0x000000010014a5d4
+ (id)resourceWithID:(id)arg1 representedItem:(id)arg2;	// IMP=0x000000010014a5c4
+ (id)resourceWithID:(id)arg1;	// IMP=0x000000010014a5b0
+ (id)resourceForSubmitRating:(id)arg1 forBundleID:(id)arg2;	// IMP=0x000000010005c3d8
+ (id)resourceForRemoveGames:(id)arg1;	// IMP=0x00000001000aa78c
+ (id)resourceForSubmitAchievement:(id)arg1 forBundleID:(id)arg2 shouldScreen:(_Bool)arg3 eligibleChallenges:(id)arg4;	// IMP=0x00000001000d5958
+ (id)resourceForPlayer:(id)arg1 TTL:(double)arg2;	// IMP=0x000000010014abe4
+ (id)resourceForPlayer:(id)arg1;	// IMP=0x000000010014abd4
+ (id)resourceForSubmitScore:(id)arg1 forBundleID:(id)arg2 shouldScreen:(_Bool)arg3 eligibleChallenges:(id)arg4;	// IMP=0x00000001001693ac
@property(retain, nonatomic) NSMutableDictionary *metadataLookup; // @synthesize metadataLookup=_metadataLookup;
@property(nonatomic, getter=isInvalid) _Bool invalid; // @synthesize invalid=_invalid;
@property(nonatomic) double TTL; // @synthesize TTL=_TTL;
@property(retain, nonatomic) id representedItem; // @synthesize representedItem=_representedItem;
@property(retain, nonatomic) id <NSObject><NSCopying> resourceID; // @synthesize resourceID=_resourceID;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x000000010014aaa0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010014aa1c
- (unsigned long long)hash;	// IMP=0x000000010014aa04
- (id)description;	// IMP=0x000000010014a8ac
- (void)dealloc;	// IMP=0x000000010014a828
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010014a76c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010014a740
- (id)init;	// IMP=0x000000010014a708
- (id)initWithResourceID:(id)arg1 representedItem:(id)arg2 TTL:(double)arg3;	// IMP=0x000000010014a638

@end
