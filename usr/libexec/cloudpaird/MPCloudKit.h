//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSConnectionDelegate-Protocol.h"

@class APSConnection, CKContainer, CKDatabase, CKRecordZone, CKSubscription, NSMutableData, NSString, NSTimer;
@protocol OS_dispatch_queue;

@interface MPCloudKit : NSObject <APSConnectionDelegate>
{
    NSObject<OS_dispatch_queue> *_ckWorkQueue;	// 8 = 0x8
    struct __SCNetworkReachability *_reachabilityRef;	// 16 = 0x10
    _Bool _reinitAfterBuddy;	// 24 = 0x18
    _Bool _sentAccountActive;	// 25 = 0x19
    _Bool _isAccountActive;	// 26 = 0x1a
    _Bool _isWriteProgress;	// 27 = 0x1b
    _Bool _isWriteMasterKeysInProgress;	// 28 = 0x1c
    _Bool _processingPush;	// 29 = 0x1d
    _Bool _processingSecurePush;	// 30 = 0x1e
    _Bool _pushReceived;	// 31 = 0x1f
    CKContainer *_cloudKitContainer;	// 32 = 0x20
    CKDatabase *_cloudKitDatabase;	// 40 = 0x28
    CKRecordZone *_recordZoneBlob;	// 48 = 0x30
    CKRecordZone *_recordZoneAccessoryDatabase;	// 56 = 0x38
    APSConnection *_pushConnection;	// 64 = 0x40
    CKSubscription *_cloudSubscription;	// 72 = 0x48
    NSTimer *_countdownTimer;	// 80 = 0x50
    NSTimer *_pushTimer;	// 88 = 0x58
    NSMutableData *_masterBlob;	// 96 = 0x60
}

+ (id)sharedInstance;	// IMP=0x000000010000a130
@property(retain) NSMutableData *masterBlob; // @synthesize masterBlob=_masterBlob;
@property(retain) NSTimer *pushTimer; // @synthesize pushTimer=_pushTimer;
@property(retain) NSTimer *countdownTimer; // @synthesize countdownTimer=_countdownTimer;
@property(retain, nonatomic) CKSubscription *cloudSubscription; // @synthesize cloudSubscription=_cloudSubscription;
@property(retain, nonatomic) APSConnection *pushConnection; // @synthesize pushConnection=_pushConnection;
@property(retain, nonatomic) CKRecordZone *recordZoneAccessoryDatabase; // @synthesize recordZoneAccessoryDatabase=_recordZoneAccessoryDatabase;
@property(retain, nonatomic) CKRecordZone *recordZoneBlob; // @synthesize recordZoneBlob=_recordZoneBlob;
@property(retain, nonatomic) CKDatabase *cloudKitDatabase; // @synthesize cloudKitDatabase=_cloudKitDatabase;
@property(retain, nonatomic) CKContainer *cloudKitContainer; // @synthesize cloudKitContainer=_cloudKitContainer;
@property(nonatomic) _Bool pushReceived; // @synthesize pushReceived=_pushReceived;
@property(nonatomic) _Bool processingSecurePush; // @synthesize processingSecurePush=_processingSecurePush;
@property(nonatomic) _Bool processingPush; // @synthesize processingPush=_processingPush;
@property(nonatomic) _Bool isWriteMasterKeysInProgress; // @synthesize isWriteMasterKeysInProgress=_isWriteMasterKeysInProgress;
@property(nonatomic) _Bool isWriteProgress; // @synthesize isWriteProgress=_isWriteProgress;
@property(nonatomic) _Bool isAccountActive; // @synthesize isAccountActive=_isAccountActive;
- (void).cxx_destruct;	// IMP=0x0000000100014194
- (void)stopNotifier;	// IMP=0x0000000100013f74
- (_Bool)startNotifier;	// IMP=0x0000000100013e8c
- (void)fetchAccessoryKeyUpdate:(unsigned long long)arg1;	// IMP=0x0000000100013480
- (void)pushDisable;	// IMP=0x000000010001343c
- (void)pushEnable;	// IMP=0x0000000100013208
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x0000000100012cc4
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;	// IMP=0x0000000100012b8c
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x0000000100012a9c
- (id)apsEnvironmentString;	// IMP=0x0000000100012558
- (void)removeSubscritionForRecordType:(id)arg1;	// IMP=0x0000000100012170
- (void)createSubscritionForRecordType:(id)arg1;	// IMP=0x0000000100011d90
- (void)deleteCloudKitAccessoryZone;	// IMP=0x00000001000119f0
- (void)deleteCloudKitBlobZone:(unsigned long long)arg1;	// IMP=0x000000010001118c
- (void)writeAccessoryBlob:(id)arg1 withRetryCount:(unsigned long long)arg2;	// IMP=0x00000001000106d8
- (void)updateCloudKitAccessoryZone:(id)arg1 delete:(_Bool)arg2;	// IMP=0x00000001000102f8
- (void)writeKeyBlob:(id)arg1 withRetryCount:(unsigned long long)arg2;	// IMP=0x000000010000f3a0
- (void)updateCloudKitBlobZone:(id)arg1;	// IMP=0x000000010000f05c
- (void)fetchAccessoryKeyBlob:(unsigned long long)arg1;	// IMP=0x000000010000dd6c
- (void)checkAccountStatusWithCompletionHandler:(CDUnknownBlockType)arg1 withRetryCount:(unsigned long long)arg2;	// IMP=0x000000010000da64
- (void)checkAccountStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000da54
- (void)fetchKeyBlob:(unsigned long long)arg1;	// IMP=0x000000010000c488
- (void)_pushTimerFired:(id)arg1;	// IMP=0x000000010000c3f0
- (void)_countdownTimerFired:(id)arg1;	// IMP=0x000000010000c338
- (void)accountStatusDidChange:(id)arg1;	// IMP=0x000000010000bdd0
- (void)readMasterZone;	// IMP=0x000000010000b4c0
- (void)readAccessoryZone;	// IMP=0x000000010000af10
- (void)removeuserPreference:(id)arg1 sync:(_Bool)arg2;	// IMP=0x000000010000ae50
- (void)setuserPreference:(id)arg1 value:(in bycopy id)arg2 sync:(_Bool)arg3;	// IMP=0x000000010000acc8
- (id)readUserPreference:(id)arg1;	// IMP=0x000000010000ac8c
- (void)initializeCloudKit;	// IMP=0x000000010000a80c
- (void)buddySetupDone;	// IMP=0x000000010000a6d8
- (void)resetTimer;	// IMP=0x000000010000a534
- (void)getAccountStatus;	// IMP=0x000000010000a524
- (id)initWithRecordZoneName;	// IMP=0x000000010000a234
- (void)dealloc;	// IMP=0x000000010000a1bc
- (id)init;	// IMP=0x000000010000a1b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

