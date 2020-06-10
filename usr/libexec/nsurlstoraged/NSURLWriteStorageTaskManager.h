//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSURLStorageTaskManager.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSURLWriteStorageTaskManager : NSURLStorageTaskManager
{
    NSMutableArray *_cachedKeyAndDataToWrite;	// 32 = 0x20
}

@property(retain, nonatomic) NSMutableArray *cachedKeyAndDataToWrite; // @synthesize cachedKeyAndDataToWrite=_cachedKeyAndDataToWrite;
- (void).cxx_destruct;	// IMP=0x000000010000b7b8
- (void)removeAllPendingWriteItems;	// IMP=0x000000010000b714
- (id)initWithPersistentPath:(id)arg1 maxSize:(long long)arg2 sandboxExtension:(id)arg3 auditToken:(CDStruct_4c969caf)arg4;	// IMP=0x000000010000b5e0

@end

