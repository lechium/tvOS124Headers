//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSString;

__attribute__((visibility("hidden")))
@interface NSURLStorageDB : NSObject
{
    struct sqlite3 *_dbReadConnection;	// 8 = 0x8
    struct sqlite3 *_dbWriteConnection;	// 16 = 0x10
    NSLock *_dbReadConnectionLock;	// 24 = 0x18
    NSLock *_dbWriteConnectionLock;	// 32 = 0x20
    _Bool _isDBOpen;	// 40 = 0x28
    NSString *_dbPathDirectory;	// 48 = 0x30
    NSString *_dbPathFile;	// 56 = 0x38
    long long _maxDBSize;	// 64 = 0x40
    CDStruct_4c969caf _auditToken;	// 72 = 0x48
}

@property CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
@property long long maxDBSize; // @synthesize maxDBSize=_maxDBSize;
@property _Bool isDBOpen; // @synthesize isDBOpen=_isDBOpen;
@property(retain) NSString *dbPathFile; // @synthesize dbPathFile=_dbPathFile;
@property(retain) NSString *dbPathDirectory; // @synthesize dbPathDirectory=_dbPathDirectory;
- (void).cxx_destruct;	// IMP=0x0000000100006cf0
- (void)_closeDBReadConnections;	// IMP=0x0000000100006b9c
- (void)_closeDBWriteConnections;	// IMP=0x00000001000068f4
- (void)_closeDB;	// IMP=0x00000001000068c0
- (void)closeConnection:(struct sqlite3 *)arg1;	// IMP=0x00000001000068b0
- (struct sqlite3 *)openReadWriteConnection;	// IMP=0x00000001000067f8
- (_Bool)_openDBReadConnections;	// IMP=0x00000001000066c4
- (_Bool)_openDBWriteConnections;	// IMP=0x00000001000065f8
- (_Bool)checkAccessToDatabaseFile;	// IMP=0x0000000100006430
- (void)dealloc;	// IMP=0x00000001000063a8
- (id)initWithDBPath:(id)arg1 maxSize:(long long)arg2 auditToken:(CDStruct_4c969caf)arg3 schemaCheck:(_Bool)arg4;	// IMP=0x0000000100006378
- (id)initWithDBPath:(id)arg1 maxSize:(long long)arg2 auditToken:(CDStruct_4c969caf)arg3;	// IMP=0x0000000100006158
- (id)init;	// IMP=0x000000010000602c

@end

