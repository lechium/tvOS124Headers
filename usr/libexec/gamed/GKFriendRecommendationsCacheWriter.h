//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKDataWriter-Protocol.h"

@class GKDatabaseConnection, NSString;

@interface GKFriendRecommendationsCacheWriter : NSObject <GKDataWriter>
{
    GKDatabaseConnection *_connection;	// 8 = 0x8
    NSString *_language;	// 16 = 0x10
}

+ (id)writerWithLanguage:(id)arg1 databaseConnection:(id)arg2;	// IMP=0x00000001000c5600
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) GKDatabaseConnection *connection; // @synthesize connection=_connection;
- (void)writeResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c6060
- (void)writeToDatabase:(struct sqlite3 *)arg1 statementStore:(id)arg2 withInsertSQL:(id)arg3 updateSQL:(id)arg4 bindOperation:(CDUnknownBlockType)arg5;	// IMP=0x00000001000c5e3c
- (void)bindParametersForLocalizationStatement:(struct sqlite3_stmt *)arg1 resource:(id)arg2 relativeToPlayer:(id)arg3;	// IMP=0x00000001000c5d68
- (id)localizationUpdateSQL;	// IMP=0x00000001000c5d00
- (id)localizationInsertSQL;	// IMP=0x00000001000c5c98
- (void)bindParametersForRecommendationStatement:(struct sqlite3_stmt *)arg1 resource:(id)arg2 relativeToPlayer:(id)arg3;	// IMP=0x00000001000c5be4
- (id)recommendationUpdateSQL;	// IMP=0x00000001000c5b88
- (id)recommendationInsertSQL;	// IMP=0x00000001000c5b2c
- (void)bindParametersForRelationshipStatement:(struct sqlite3_stmt *)arg1 resource:(id)arg2 relativeToPlayer:(id)arg3;	// IMP=0x00000001000c5a84
- (id)recommendationRelationshipUpdateSQL;	// IMP=0x00000001000c5a28
- (id)recommendationRelationshipInsertSQL;	// IMP=0x00000001000c59cc
- (void)bindParametersForRecommendedPlayerStatement:(struct sqlite3_stmt *)arg1 resource:(id)arg2;	// IMP=0x00000001000c58f0
- (id)recommendedPlayerUpdateSQL;	// IMP=0x00000001000c5888
- (id)recommendedPlayerInsertSQL;	// IMP=0x00000001000c5820
- (void)bindParametersForListStatement:(struct sqlite3_stmt *)arg1 relativeToPlayer:(id)arg2 ttl:(double)arg3;	// IMP=0x00000001000c57d4
- (id)listExpirationDateUpdateSQL;	// IMP=0x00000001000c578c
- (id)listExpirationDateInsertSQL;	// IMP=0x00000001000c5744
- (void)dealloc;	// IMP=0x00000001000c56d4
- (id)initWithLanguage:(id)arg1 databaseConnection:(id)arg2;	// IMP=0x00000001000c5654

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
