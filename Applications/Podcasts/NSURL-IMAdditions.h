//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@interface NSURL (IMAdditions)
+ (id)dictionaryToEscapedQueryString:(id)arg1;	// IMP=0x00000001001c1d4c
+ (id)percentEncodedStringToDictionary:(id)arg1;	// IMP=0x00000001001c1a6c
- (id)cleanUrlToEpisodeGuid;	// IMP=0x00000001001c2e20
- (long long)cleanUrlToStoreTrackId;	// IMP=0x00000001001c2cfc
- (long long)cleanUrlToStoreId;	// IMP=0x00000001001c2af4
- (int)setXattr:(id)arg1 named:(id)arg2;	// IMP=0x00000001001c29fc
- (id)xattrNamed:(id)arg1;	// IMP=0x00000001001c281c
- (id)unescapedPath;	// IMP=0x00000001001c2780
- (id)lastModifiedDateOfResource;	// IMP=0x00000001001c2608
- (id)_lastModDateFormatter;	// IMP=0x00000001001c2450
- (id)URLByReplacingWithScheme:(id)arg1;	// IMP=0x00000001001c22cc
- (id)URLByAppendingQueryString:(id)arg1;	// IMP=0x00000001001c2194
- (id)URLByAppendingHashString:(id)arg1;	// IMP=0x00000001001c205c
- (id)href;	// IMP=0x00000001001c1fb0
@end
