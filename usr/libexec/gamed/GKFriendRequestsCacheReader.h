//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKCacheReader.h"

@interface GKFriendRequestsCacheReader : GKCacheReader
{
}

+ (id)readerWithDatabaseConnection:(id)arg1;	// IMP=0x00000001000c952c
- (void)readResources:(id)arg1 inDatabase:(struct sqlite3 *)arg2 statementStore:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000c9674
- (void)bindParametersForStatement:(struct sqlite3_stmt *)arg1 withPlayer:(id)arg2;	// IMP=0x00000001000c9634
- (id)getExpirationDateStatement;	// IMP=0x00000001000c95dc
- (id)getRequestingPlayerGCIDsStatement;	// IMP=0x00000001000c9578

@end

