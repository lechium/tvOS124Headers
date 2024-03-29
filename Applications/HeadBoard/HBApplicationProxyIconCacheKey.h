//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface HBApplicationProxyIconCacheKey : NSObject <NSCopying>
{
    NSString *_applicationIdentifier;	// 8 = 0x8
    double _displayScale;	// 16 = 0x10
    NSString *_lifetimeCacheKeyString;	// 24 = 0x18
    NSString *_applicationIconName;	// 32 = 0x20
}

+ (id)iconCacheKeyForApp:(id)arg1;	// IMP=0x000000010005b2f0
+ (id)iconCacheKeyForProxy:(id)arg1;	// IMP=0x000000010005b0a8
@property(copy, nonatomic) NSString *applicationIconName; // @synthesize applicationIconName=_applicationIconName;
@property(copy, nonatomic) NSString *lifetimeCacheKeyString; // @synthesize lifetimeCacheKeyString=_lifetimeCacheKeyString;
@property double displayScale; // @synthesize displayScale=_displayScale;
@property(readonly, copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (void).cxx_destruct;	// IMP=0x000000010005b874
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010005b734
- (unsigned long long)hash;	// IMP=0x000000010005b71c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010005b5f0
@property(readonly, copy, nonatomic) NSString *filesystemSafeKeyName;
- (id)_init;	// IMP=0x000000010005b074
- (id)init;	// IMP=0x000000010005b05c

@end

