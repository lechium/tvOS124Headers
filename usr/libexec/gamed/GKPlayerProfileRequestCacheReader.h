//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKPlayerProfileCacheReader.h"

@interface GKPlayerProfileRequestCacheReader : GKPlayerProfileCacheReader
{
}

- (id)processAvailableResource:(id)arg1 retrievedWithStatement:(struct sqlite3_stmt *)arg2 fromDatabase:(struct sqlite3 *)arg3 statementStore:(id)arg4;	// IMP=0x00000001001687d4
- (double)requestDetailsTTLProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x00000001001687c8
- (double)TTLForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x00000001001687bc
- (int)availablePiecesForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x00000001001687b0
- (id)playerForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x0000000100168338
- (void)bindParametersForProfileStatement:(struct sqlite3_stmt *)arg1 playerGCID:(id)arg2;	// IMP=0x00000001001682e8
- (id)playerProfileSQLString;	// IMP=0x00000001001681a4

@end

