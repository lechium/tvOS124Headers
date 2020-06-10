//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface Cache : NSObject
{
    unsigned long long _capacity;	// 8 = 0x8
    NSMutableDictionary *_cache;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_cacheLock;	// 24 = 0x18
}

@property(retain) NSObject<OS_dispatch_queue> *cacheLock; // @synthesize cacheLock=_cacheLock;
@property(retain) NSMutableDictionary *cache; // @synthesize cache=_cache;
@property unsigned long long capacity; // @synthesize capacity=_capacity;
- (void).cxx_destruct;	// IMP=0x00000001000078c8
- (void)evictRandom;	// IMP=0x0000000100007790
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x0000000100007478
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x0000000100007298
- (void)flush;	// IMP=0x0000000100007150
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000100007078

@end
