//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SRDownsampleEntry;

@interface FilterTier : NSObject
{
    NSMutableDictionary *_childTiers;	// 8 = 0x8
    SRDownsampleEntry *_downsampleEntry;	// 16 = 0x10
}

@property(retain) SRDownsampleEntry *downsampleEntry; // @synthesize downsampleEntry=_downsampleEntry;
@property(retain) NSMutableDictionary *childTiers; // @synthesize childTiers=_childTiers;
- (void).cxx_destruct;	// IMP=0x000000010000335c
- (void)setCap:(unsigned long long)arg1 downsampleRatio:(unsigned long long)arg2 forQuery:(id)arg3;	// IMP=0x00000001000031b0
- (id)newChildInstance;	// IMP=0x0000000100003188
- (id)keyForChildren:(id)arg1;	// IMP=0x0000000100003158
- (id)entryForQuery:(id)arg1;	// IMP=0x000000010000305c

@end

