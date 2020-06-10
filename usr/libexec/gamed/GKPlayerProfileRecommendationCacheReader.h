//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKPlayerProfileCacheReader.h"

@interface GKPlayerProfileRecommendationCacheReader : GKPlayerProfileCacheReader
{
}

- (id)processAvailableResource:(id)arg1 retrievedWithStatement:(struct sqlite3_stmt *)arg2 fromDatabase:(struct sqlite3 *)arg3 statementStore:(id)arg4;	// IMP=0x000000010008f6b4
- (_Bool)recommendationWasDisplayedForStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x000000010008f690
- (double)recommendationTTLForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x000000010008f684
- (double)TTLForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x000000010008f678
- (int)availablePiecesForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x000000010008f66c
- (id)playerForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x000000010008f1b4
- (void)bindParametersForProfileStatement:(struct sqlite3_stmt *)arg1 playerGCID:(id)arg2;	// IMP=0x000000010008f144
- (id)playerProfileSQLString;	// IMP=0x000000010008eff4
- (id)initWithFamiliarity:(int)arg1 toPlayer:(id)arg2 language:(id)arg3 databaseConnection:(id)arg4;	// IMP=0x000000010008efb4

@end

