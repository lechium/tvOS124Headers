//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData;

@interface TVIMetadata : NSObject
{
    unsigned long long _version;	// 8 = 0x8
    unsigned long long _initialAssetCount;	// 16 = 0x10
    NSArray *_assets;	// 24 = 0x18
    NSData *_sha1Hash;	// 32 = 0x20
}

@property(retain, nonatomic) NSData *sha1Hash; // @synthesize sha1Hash=_sha1Hash;
@property(retain, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property(nonatomic) unsigned long long initialAssetCount; // @synthesize initialAssetCount=_initialAssetCount;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
- (void).cxx_destruct;	// IMP=0x0000000100011ae0
- (_Bool)isEqualToMetadata:(id)arg1;	// IMP=0x00000001000119b8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010001192c
- (unsigned long long)hash;	// IMP=0x0000000100011914

@end

