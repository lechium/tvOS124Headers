//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKRecordID, CKServerChangeToken, GKCloudPlayer, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface GKSessionCache : NSObject
{
    NSObject<OS_dispatch_queue> *_cacheQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_cacheUserQueue;	// 16 = 0x10
    _Bool _userHasSubscription;	// 24 = 0x18
    _Bool _friendRecordNeedsUpdate;	// 25 = 0x19
    CKRecordID *_userRecordID;	// 32 = 0x20
    double _lastSaveTimeStamp;	// 40 = 0x28
    NSMutableDictionary *_bundleIDsByContainerName;	// 48 = 0x30
    NSMutableDictionary *_bundleIDExpirations;	// 56 = 0x38
    struct sqlite3 *_database;	// 64 = 0x40
    NSString *_databasePath;	// 72 = 0x48
    NSDate *_expiration;	// 80 = 0x50
}

@property(retain, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
@property(retain, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(nonatomic) struct sqlite3 *database; // @synthesize database=_database;
@property(retain, nonatomic) NSMutableDictionary *bundleIDExpirations; // @synthesize bundleIDExpirations=_bundleIDExpirations;
@property(retain, nonatomic) NSMutableDictionary *bundleIDsByContainerName; // @synthesize bundleIDsByContainerName=_bundleIDsByContainerName;
@property(retain, nonatomic) CKRecordID *userRecordID; // @synthesize userRecordID=_userRecordID;
- (void).cxx_destruct;	// IMP=0x000000010018a528
- (double)doubleFromRowStatement:(struct sqlite3_stmt *)arg1 column:(int)arg2;	// IMP=0x000000010018a458
- (int)intFromRowStatement:(struct sqlite3_stmt *)arg1 column:(int)arg2;	// IMP=0x000000010018a44c
- (id)stringFromRowStatement:(struct sqlite3_stmt *)arg1 column:(int)arg2;	// IMP=0x000000010018a41c
- (id)dataFromRowStatement:(struct sqlite3_stmt *)arg1 column:(int)arg2;	// IMP=0x000000010018a3c0
- (_Bool)stepStatement:(id)arg1 parameters:(id)arg2 rowHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001899f0
- (_Bool)executeStatement:(id)arg1;	// IMP=0x00000001001896d8
- (void)closeDatabase;	// IMP=0x00000001001896a8
- (_Bool)openDatabase;	// IMP=0x000000010018965c
- (id)sessionWithIdentifier:(id)arg1;	// IMP=0x0000000100189408
- (id)sessionsInContainer:(id)arg1 ownerName:(id)arg2;	// IMP=0x00000001001890cc
- (id)sessionsInContainer:(id)arg1;	// IMP=0x00000001001890bc
- (id)sessionWithRecordID:(id)arg1;	// IMP=0x0000000100189054
- (id)sessionFromData:(id)arg1;	// IMP=0x0000000100188f90
- (void)updateWithChangedSessions:(id)arg1 removedSessions:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100187e7c
- (void)setFriendPlayers:(id)arg1 withEmails:(id)arg2;	// IMP=0x00000001001878b8
@property(readonly, nonatomic) NSDictionary *friendEmailsByID; // @dynamic friendEmailsByID;
@property(readonly, nonatomic) NSArray *friendPlayers; // @dynamic friendPlayers;
- (void)_setToken:(id)arg1 forContainerName:(id)arg2 ownerName:(id)arg3;	// IMP=0x0000000100186f28
- (void)updateWithChangedTokens:(id)arg1 removedTokenZoneIDs:(id)arg2;	// IMP=0x0000000100186b80
- (void)setToken:(id)arg1 forContainerName:(id)arg2 ownerName:(id)arg3;	// IMP=0x0000000100186a20
- (id)tokenForContainerName:(id)arg1 ownerName:(id)arg2;	// IMP=0x00000001001866fc
@property(retain, nonatomic) CKServerChangeToken *sharedDBToken; // @dynamic sharedDBToken;
@property(retain, nonatomic) CKServerChangeToken *privateDBToken; // @dynamic privateDBToken;
- (void)setToken:(id)arg1 forZoneID:(id)arg2;	// IMP=0x00000001001865d0
- (id)tokenForZoneID:(id)arg1;	// IMP=0x0000000100186520
- (id)tokenFromData:(id)arg1;	// IMP=0x000000010018645c
@property(nonatomic) double lastSaveTimeStamp; // @synthesize lastSaveTimeStamp=_lastSaveTimeStamp;
@property(nonatomic) _Bool friendRecordNeedsUpdate; // @synthesize friendRecordNeedsUpdate=_friendRecordNeedsUpdate;
@property(nonatomic) _Bool userHasSubscription; // @synthesize userHasSubscription=_userHasSubscription;
- (_Bool)saveUserInfo;	// IMP=0x0000000100185ce0
- (void)readUserInfoFromDatabase;	// IMP=0x0000000100185b48
- (void)writeBundleIDsToDisk;	// IMP=0x00000001001859cc
- (void)readBundleIDsFromDisk;	// IMP=0x000000010018584c
- (id)bundleIDCacheURL;	// IMP=0x000000010018579c
- (void)updateBundleIDs:(id)arg1 forContainerName:(id)arg2;	// IMP=0x00000001001855dc
- (id)bundleIDsForContainerName:(id)arg1;	// IMP=0x0000000100185390
- (void)updateUserWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100184de8
@property(readonly, nonatomic) GKCloudPlayer *userPlayer; // @dynamic userPlayer;
- (void)createDatabaseIfNeeded;	// IMP=0x000000010018472c
- (void)updateDatabasePath;	// IMP=0x00000001001845ec
@property(nonatomic) _Bool isValid; // @dynamic isValid;
- (void)clearWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001842b4
- (id)init;	// IMP=0x00000001001841a8

@end

