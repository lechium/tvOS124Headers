//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HBCloudSyncDatabaseServices, HBRawFolder, NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOperation, PendingChanges;

@interface HBCloudSyncDatabaseFacade : NSObject
{
    struct {
        unsigned int delegateOperationWillBegin:1;
        unsigned int delegateOperationDidFailWithError:1;
        unsigned int delegateOperationDidCompleteSuccessfully:1;
    } _flags;	// 8 = 0x8
    _Bool _syncStateIsDirtyForDevice;	// 12 = 0xc
    id <HBCloudSyncOperationDelegate> _cloudSyncOperationDelegate;	// 16 = 0x10
    HBCloudSyncDatabaseServices *_cloudSyncDBServices;	// 24 = 0x18
    HBRawFolder *_rootFolder;	// 32 = 0x20
    PendingChanges *_pendingChangesToBeProcessed;	// 40 = 0x28
    NSDictionary *_syncedItemsToParentMapping;	// 48 = 0x30
    NSDictionary *_syncedFolderIdsToDisplayNamesMapping;	// 56 = 0x38
    NSMutableDictionary *_appIdentifiersToSyncedAlternateIconNames;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_cloudSyncFacadeSerialQueue;	// 72 = 0x48
}

+ (id)sharedCloudSyncDatabaseFacade;	// IMP=0x0000000100007324
+ (void)initialize;	// IMP=0x00000001000072b8
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cloudSyncFacadeSerialQueue; // @synthesize cloudSyncFacadeSerialQueue=_cloudSyncFacadeSerialQueue;
@property(nonatomic) _Bool syncStateIsDirtyForDevice; // @synthesize syncStateIsDirtyForDevice=_syncStateIsDirtyForDevice;
@property(retain, nonatomic) NSMutableDictionary *appIdentifiersToSyncedAlternateIconNames; // @synthesize appIdentifiersToSyncedAlternateIconNames=_appIdentifiersToSyncedAlternateIconNames;
@property(copy, nonatomic) NSDictionary *syncedFolderIdsToDisplayNamesMapping; // @synthesize syncedFolderIdsToDisplayNamesMapping=_syncedFolderIdsToDisplayNamesMapping;
@property(copy, nonatomic) NSDictionary *syncedItemsToParentMapping; // @synthesize syncedItemsToParentMapping=_syncedItemsToParentMapping;
@property(retain, nonatomic) PendingChanges *pendingChangesToBeProcessed; // @synthesize pendingChangesToBeProcessed=_pendingChangesToBeProcessed;
@property(retain, nonatomic) HBRawFolder *rootFolder; // @synthesize rootFolder=_rootFolder;
@property(retain, nonatomic) HBCloudSyncDatabaseServices *cloudSyncDBServices; // @synthesize cloudSyncDBServices=_cloudSyncDBServices;
@property(nonatomic) __weak id <HBCloudSyncOperationDelegate> cloudSyncOperationDelegate; // @synthesize cloudSyncOperationDelegate=_cloudSyncOperationDelegate;
- (void).cxx_destruct;	// IMP=0x0000000100010524
- (void)_generateUUIDForAddedFoldersInList:(id)arg1;	// IMP=0x0000000100010168
- (id)_applicationsToBeUninstalledFromDeletedRecordIDs:(id)arg1 oldFolder:(id)arg2;	// IMP=0x000000010000fcc4
- (id)_installableAppRecordsFromNewFolder:(id)arg1 changedRecords:(id)arg2;	// IMP=0x000000010000f834
- (void)_updateInstallableRecordsList:(id)arg1 fromInstallingProxies:(id)arg2;	// IMP=0x000000010000f508
- (id)_deletableItemsListWithHashedIdsFromList:(id)arg1;	// IMP=0x000000010000f2a0
- (void)_createAndSaveRecordsToCloudWithFolder:(id)arg1;	// IMP=0x000000010000ec64
- (void)_registerForNotificationsToListenForZoneChangesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010000ebb0
- (void)_setAlternateIconNamesForApps:(id)arg1 rootFolder:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000e378
- (_Bool)_saveFolder:(id)arg1 shouldSendNotification:(_Bool)arg2;	// IMP=0x000000010000e06c
- (void)_finishAndSaveFolderIfRequired:(id)arg1 operationError:(id)arg2 userInfo:(id)arg3;	// IMP=0x000000010000dd28
- (_Bool)_doDeviceChangesNeedToBeSyncedToCloudBasedOffCloudRecords:(id)arg1 rootFolder:(id)arg2;	// IMP=0x000000010000d27c
- (void)_syncDeviceChangesToCloud;	// IMP=0x000000010000c438
- (void)_updateLocalDeviceStateWithChangedCloudRecords:(id)arg1 deletedRecordIDs:(id)arg2 shouldPerformMigration:(_Bool)arg3;	// IMP=0x000000010000b6b8
- (void)_deleteOldZonesPostMigration;	// IMP=0x000000010000b31c
- (void)_saveSubscriptionsPostMigration;	// IMP=0x000000010000af68
- (void)_updateDeviceByFetchingChangesForZoneID:(id)arg1;	// IMP=0x000000010000aa50
- (void)_fetchOneHomeScreenZoneDeletionStatus:(CDUnknownBlockType)arg1;	// IMP=0x000000010000a2b4
- (id)_validInstallableAppRecordsFromRecords:(id)arg1;	// IMP=0x000000010000a0d0
- (id)_deserializeRootFolder;	// IMP=0x0000000100009e30
- (void)_unarchiveLastKnownCloudSyncedState;	// IMP=0x0000000100009980
- (void)_archiveLastKnownCloudSyncedState;	// IMP=0x0000000100009718
- (void)appInstallsBeganPostSync:(id)arg1;	// IMP=0x000000010000943c
- (void)discardOneHomeScreenZone;	// IMP=0x0000000100009098
- (void)syncDeviceFolderStructureToCloud;	// IMP=0x0000000100008fcc
@property(readonly, nonatomic) NSOperation *currentOperation;
- (void)beginMigrationCheck;	// IMP=0x0000000100008834
- (void)migrateCloudData;	// IMP=0x0000000100008198
- (void)updateCloudStateFromDevice;	// IMP=0x0000000100008128
- (void)updateDeviceStateFromCloud;	// IMP=0x0000000100007808
- (void)resetSyncParameters;	// IMP=0x0000000100007718
- (void)dealloc;	// IMP=0x00000001000074e8
- (id)init;	// IMP=0x00000001000073a4

@end
