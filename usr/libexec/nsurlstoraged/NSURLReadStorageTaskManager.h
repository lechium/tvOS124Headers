//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSURLStorageTaskManager.h"

@class NSLock;

__attribute__((visibility("hidden")))
@interface NSURLReadStorageTaskManager : NSURLStorageTaskManager
{
    struct sqlite3 *_dbReadConnection;	// 32 = 0x20
    NSLock *_dbReadConnectionLock;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010000be64
- (void)dealloc;	// IMP=0x000000010000bdb4
- (id)initWithPersistentPath:(id)arg1 maxSize:(long long)arg2 sandboxExtension:(id)arg3 auditToken:(CDStruct_4c969caf)arg4;	// IMP=0x000000010000bbe0

@end

