//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKDatabaseWriter-Protocol.h"

@class GKDatabaseConnection, NSDictionary, NSString;

@interface GKDelayedChallengeCacheWriter : NSObject <GKDatabaseWriter>
{
    int _requestType;	// 8 = 0x8
    GKDatabaseConnection *_connection;	// 16 = 0x10
    NSDictionary *_gameDescriptor;	// 24 = 0x18
}

+ (id)writerWithDatabaseConnection:(id)arg1 forChallengeRequestType:(int)arg2 gameDescriptor:(id)arg3;	// IMP=0x0000000100107734
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;
@property(retain, nonatomic) NSDictionary *gameDescriptor; // @synthesize gameDescriptor=_gameDescriptor;
@property(retain, nonatomic) GKDatabaseConnection *connection; // @synthesize connection=_connection;
- (void)writeResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100107df4
- (void)writeToDatabase:(struct sqlite3 *)arg1 statementStore:(id)arg2 withInsertSQL:(id)arg3 updateSQL:(id)arg4 bindOperation:(CDUnknownBlockType)arg5;	// IMP=0x0000000100107bd0
- (void)bindParametersForStatement:(struct sqlite3_stmt *)arg1 forAbortingChallenge:(id)arg2 requestsRowID:(long long)arg3;	// IMP=0x0000000100107b44
- (void)bindParametersForStatement:(struct sqlite3_stmt *)arg1 forIssuingChallenge:(id)arg2 requestsRowID:(long long)arg3;	// IMP=0x0000000100107a90
- (id)challengesInsertSQL;	// IMP=0x0000000100107a3c
- (void)bindParametersForRequestsStatement:(struct sqlite3_stmt *)arg1 playerID:(id)arg2;	// IMP=0x000000010010792c
- (id)requestsInsertSQL;	// IMP=0x00000001001078bc
@property(readonly, nonatomic) GKDatabaseConnection *databaseConnection;
- (void)dealloc;	// IMP=0x000000010010781c
- (id)initWithDatabaseConnection:(id)arg1 forChallengeRequestType:(int)arg2 gameDescriptor:(id)arg3;	// IMP=0x000000010010778c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

