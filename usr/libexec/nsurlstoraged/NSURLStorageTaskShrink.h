//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSURLStorageTask.h"

@class NSURLStorageURLCacheDB;

__attribute__((visibility("hidden")))
@interface NSURLStorageTaskShrink : NSURLStorageTask
{
    NSURLStorageURLCacheDB *_cacheDBInstanceToUpdate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010000b44c
- (void)setCacheDBInstanceToUpdateAfterShrink:(id)arg1;	// IMP=0x000000010000b438
- (void)run;	// IMP=0x000000010000b110
- (id)initWithTaskManager:(id)arg1;	// IMP=0x000000010000b058

@end
