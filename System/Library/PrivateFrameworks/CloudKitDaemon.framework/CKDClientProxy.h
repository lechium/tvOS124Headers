/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKDSystemAvailabilityWatcher.h>

@protocol OS_dispatch_queue, NSObject;
@class CKDClientContext, NSOperationQueue, NSString, NSXPCConnection, NSObject, NSArray, NSMutableArray, NSMutableSet, NSDate, NSDictionary, NSMutableDictionary;

@interface CKDClientProxy : NSObject <CKDSystemAvailabilityWatcher> {

	CKDClientContext* _context;
	BOOL _sandboxed;
	BOOL _canUsePackages;
	BOOL _canOpenByID;
	BOOL _holdAllOperations;
	BOOL _hasFakeEntitlements;
	int _pid;
	NSOperationQueue* _operationQueue;
	NSOperationQueue* _cleanupOperationQueue;
	NSString* _procName;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _setupQueue;
	NSObject*<OS_dispatch_queue> _cancellationQueue;
	NSObject*<OS_dispatch_queue> _statusQueue;
	NSOperationQueue* _backgroundOperationThrottleQueue;
	NSString* _bundleIdentifier;
	NSString* _sourceApplicationBundleIdentifier;
	NSArray* _cachedSandboxExtensions;
	NSMutableArray* _pendingContexts;
	NSMutableSet* _pendingOperationIDs;
	NSDate* _connectionDate;
	long long _hasTCCAuthorizationTernary;
	NSDictionary* _connectionEntitlements;
	NSOperationQueue* _tccAuthOpQueue;
	NSObject*<OS_dispatch_queue> _tccAuthQueue;
	id<NSObject> _TCCDatabaseChangedNotificationObserver;
	NSMutableDictionary* _operationStatisticsByClassName;

}

@property (assign,nonatomic,__weak) NSXPCConnection * connection;                               //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> setupQueue;                           //@synthesize setupQueue=_setupQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cancellationQueue;                    //@synthesize cancellationQueue=_cancellationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> statusQueue;                          //@synthesize statusQueue=_statusQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * backgroundOperationThrottleQueue;               //@synthesize backgroundOperationThrottleQueue=_backgroundOperationThrottleQueue - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                                       //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * sourceApplicationBundleIdentifier;                      //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * cachedSandboxExtensions;                                 //@synthesize cachedSandboxExtensions=_cachedSandboxExtensions - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingContexts;                                  //@synthesize pendingContexts=_pendingContexts - In the implementation block
@property (assign,getter=isSandboxed,nonatomic) BOOL sandboxed;                                 //@synthesize sandboxed=_sandboxed - In the implementation block
@property (assign,nonatomic) BOOL canUsePackages;                                               //@synthesize canUsePackages=_canUsePackages - In the implementation block
@property (assign,nonatomic) BOOL canOpenByID;                                                  //@synthesize canOpenByID=_canOpenByID - In the implementation block
@property (assign,nonatomic) BOOL holdAllOperations;                                            //@synthesize holdAllOperations=_holdAllOperations - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingOperationIDs;                                //@synthesize pendingOperationIDs=_pendingOperationIDs - In the implementation block
@property (nonatomic,retain) NSDate * connectionDate;                                           //@synthesize connectionDate=_connectionDate - In the implementation block
@property (assign,nonatomic) long long hasTCCAuthorizationTernary;                              //@synthesize hasTCCAuthorizationTernary=_hasTCCAuthorizationTernary - In the implementation block
@property (nonatomic,retain) NSDictionary * connectionEntitlements;                             //@synthesize connectionEntitlements=_connectionEntitlements - In the implementation block
@property (assign,nonatomic) BOOL hasFakeEntitlements;                                          //@synthesize hasFakeEntitlements=_hasFakeEntitlements - In the implementation block
@property (nonatomic,retain) NSOperationQueue * tccAuthOpQueue;                                 //@synthesize tccAuthOpQueue=_tccAuthOpQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> tccAuthQueue;                         //@synthesize tccAuthQueue=_tccAuthQueue - In the implementation block
@property (nonatomic,retain) id<NSObject> TCCDatabaseChangedNotificationObserver;               //@synthesize TCCDatabaseChangedNotificationObserver=_TCCDatabaseChangedNotificationObserver - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * operationStatisticsByClassName;              //@synthesize operationStatisticsByClassName=_operationStatisticsByClassName - In the implementation block
@property (nonatomic,retain) CKDClientContext * context; 
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                 //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * cleanupOperationQueue;                          //@synthesize cleanupOperationQueue=_cleanupOperationQueue - In the implementation block
@property (nonatomic,readonly) int pid;                                                         //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) NSString * procName;                                             //@synthesize procName=_procName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedClientThrottlingOperationQueue;
+(id)operationStatusReport:(id)arg1 ;
-(NSString *)procName;
-(void)tearDown;
-(id)valueForEntitlement:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(NSString *)sourceApplicationBundleIdentifier;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(BOOL)hasOutOfProcessUIEntitlement;
-(BOOL)hasParticipantPIIEntitlement;
-(id)CKPropertiesDescription;
-(id)CKStatusReportArray;
-(void)cancelOperationWithIdentifier:(id)arg1 ;
-(void)accountStatusWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)accountInfoWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)importantUserIDsWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)statusForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)requestApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getSandboxExtensionsWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performDiscoverUserIdentitiesOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performDiscoverAllIdentitiesOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchShareParticipantsOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchRecordsOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performModifyRecordsOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchRecordChangesOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchRecordZoneChangesOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchRecordVersionsOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchArchivedRecordsOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performArchiveRecordsOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performPublishAssetsOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performModifyWebSharingOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)getNewWebSharingIdentityWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getNewWebSharingIdentityDataWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performModifyRecordAccessOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performQueryOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performModifySubscriptionsOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchSubscriptionsOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performModifyRecordZonesOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchRecordZonesOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchDatabaseChangesOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performModifyBadgeOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchNotificationChangesOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performMarkNotificationsReadOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performAcceptSharesOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performCompleteParticipantVettingOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchShareMetadataOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchShareParticipantKeyOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)decryptPersonalInfoOnShare:(id)arg1 setupInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)performInitiateParticipantVettingOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchUserQuotaOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchWebAuthTokenOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchWhitelistedBundleIDsOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performCodeFunctionInvokeOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)fetchLongLivedOperationsWithIDs:(id)arg1 setupInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchAllLongLivedOperationIDsWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)serverPreferredPushEnvironmentWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)serverEnvironmentWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)currentDeviceIDWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)displayInfoOnAccountWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)currentUserBoundaryKeyWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performAggregateZonePCSOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)dumpAllClientsStatusReportToFileHandle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dumpDaemonStatusReportToFileHandle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2 setupInfo:(id)arg3 ;
-(void)setFakeResponseOperationResult:(id)arg1 forNextRequestOfClassName:(id)arg2 forItemID:(id)arg3 withLifetime:(int)arg4 setupInfo:(id)arg5 ;
-(void)clearAssetCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)showAssetCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2 ;
-(void)clearRecordCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2 ;
-(void)clearAuthTokensWithSetupInfo:(id)arg1 recordID:(id)arg2 databaseScope:(long long)arg3 ;
-(void)clearCachesWithSetupInfo:(id)arg1 options:(unsigned long long)arg2 databaseScope:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)clearCachesForRecordWithSetupInfo:(id)arg1 recordID:(id)arg2 databaseScope:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)clearCachesForZoneWithSetupInfo:(id)arg1 zoneID:(id)arg2 databaseScope:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)wipeAllCachedLongLivedProxiesWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getOutstandingOperationCountWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)clearPCSCachesForKnownContextsWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getBehaviorOptionForKey:(id)arg1 isContainerOption:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)accountsDidGrantAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2 ;
-(void)accountsDidRevokeAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2 ;
-(void)accountsWillDeleteAccount:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)accountChangedWithID:(id)arg1 ;
-(void)setApplicationPermission:(unsigned long long)arg1 enabled:(BOOL)arg2 setupInfo:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)resetAllApplicationPermissionsWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)statusGroupsForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)wipeAllCachesAndDie;
-(void)clearContextFromMetadataCache;
-(void)clearPILSCacheForLookupInfos:(id)arg1 ;
-(void)updatePushTokens;
-(void)dataclassEnabled:(id)arg1 withSetupInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)flushOperationMetricsToPowerLog;
-(void)triggerAutoBugCaptureSnapshot;
-(void)submitClientEventMetric:(id)arg1 withSetupInfo:(id)arg2 ;
-(void)getPCSDiagnosticsForZonesWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getRecordPCSDiagnosticsForZonesWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)repairZonePCSWithOperationInfo:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)tossConfigWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_dumpStatusReportArrayToOsTrace:(id)arg1 ;
-(void)forceFinishClientSetupWithClientContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isSandboxed;
-(void)_setupOperationQueues;
-(BOOL)hasAllowAccessDuringBuddyEntitlement;
-(BOOL)canRunGivenAvailabilityState:(unsigned long long)arg1 ;
-(void)setClientProxyAvailable:(BOOL)arg1 ;
-(void)_lockedSetHasTCCAuthorizationTernary:(long long)arg1 ;
-(void)setTCCDatabaseChangedNotificationObserver:(id<NSObject>)arg1 ;
-(BOOL)holdAllOperations;
-(NSOperationQueue *)cleanupOperationQueue;
-(NSOperationQueue *)backgroundOperationThrottleQueue;
-(BOOL)_lockedHasTCCAuthorization;
-(NSObject*<OS_dispatch_queue>)tccAuthQueue;
-(BOOL)_hasEntitlementForKey:(id)arg1 ;
-(NSDictionary *)connectionEntitlements;
-(void)setConnectionEntitlements:(NSDictionary *)arg1 ;
-(void)setHasFakeEntitlements:(BOOL)arg1 ;
-(BOOL)hasMasqueradingEntitlement;
-(id)_clientPrefixEntitlement;
-(NSMutableSet *)pendingOperationIDs;
-(NSObject*<OS_dispatch_queue>)setupQueue;
-(void)_startClientSetupWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)cancellationQueue;
-(void)_handleStatisticsForOperation:(id)arg1 withArguments:(id)arg2 ;
-(BOOL)_isConnectionAuthorizedForOperation:(id)arg1 error:(id*)arg2 ;
-(BOOL)isLongLived;
-(void)handleCheckpointForOperationWithID:(id)arg1 withArguments:(id)arg2 ;
-(void)_accountStatusWithClientContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setupClientWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)_applicationPermissionStatusFromUserPrivacySetting:(long long)arg1 ;
-(void)_addOperationWithOperationInfo:(id)arg1 factoryBlock:(/*^block*/id)arg2 ;
-(void)_globalStatusForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_setApplicationPermission:(unsigned long long)arg1 enabled:(BOOL)arg2 setupInfo:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_handleProgressForOperationWithID:(id)arg1 withArguments:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)operationStatisticsByClassName;
-(void)_handleProgressForOperation:(id)arg1 withArguments:(id)arg2 ;
-(void)_handleCompletionForOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_handleProgressForOperation:(id)arg1 withArguments:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_performFetchCurrentUserRecordOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_reallyPerformFetchRecordsOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)statusQueue;
-(id)_locked_eligiblePendingContextForSetupInfo:(id)arg1 ;
-(BOOL)_updateConnectionEntitlementsWithFakeEntitlements:(id)arg1 ;
-(BOOL)_hasCustomAccountsEntitlement;
-(void)setHoldAllOperations:(BOOL)arg1 ;
-(void)systemAvailabilityChanged:(unsigned long long)arg1 ;
-(BOOL)_hasEnvironmentEntitlement;
-(BOOL)hasFakeEntitlements;
-(void)setCachedSandboxExtensions:(NSArray *)arg1 ;
-(void)_finishClientSetupWithClientContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)cachedSandboxExtensions;
-(NSDate *)connectionDate;
-(BOOL)canUsePackages;
-(BOOL)hasTCCAuthorization;
-(void)getTCCAuthorizationWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)hasProtectionDataEntitlement;
-(BOOL)hasZoneProtectionDataEntitlement;
-(BOOL)hasDeviceIdentifierEntitlement;
-(BOOL)hasCloudKitSystemServiceEntitlement;
-(BOOL)hasDarkWakeNetworkReachabilityEnabledEntitlement;
-(BOOL)hasLightweightPCSEntitlement;
-(BOOL)hasDisplaysSystemAcceptPromptEntitlement;
-(BOOL)hasNonLegacyShareURLEntitlement;
-(id)serviceNameForContainerMapEntitlement;
-(unsigned long long)_outstandingOperationCount;
-(id)apsEnvironmentEntitlement;
-(BOOL)darkWakeEnabledEntitlement;
-(id)openFileWithOpenInfo:(id)arg1 error:(id*)arg2 ;
-(id)getFileMetadataWithFileHandle:(id)arg1 openInfo:(id)arg2 error:(id*)arg3 ;
-(BOOL)canOpenFileAtURL:(id)arg1 ;
-(BOOL)canUsePackagesWithError:(id*)arg1 ;
-(void)setCleanupOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setSandboxed:(BOOL)arg1 ;
-(void)setSetupQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCancellationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setStatusQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setBackgroundOperationThrottleQueue:(NSOperationQueue *)arg1 ;
-(void)setCanUsePackages:(BOOL)arg1 ;
-(BOOL)canOpenByID;
-(void)setCanOpenByID:(BOOL)arg1 ;
-(void)setPendingOperationIDs:(NSMutableSet *)arg1 ;
-(void)setConnectionDate:(NSDate *)arg1 ;
-(long long)hasTCCAuthorizationTernary;
-(void)setHasTCCAuthorizationTernary:(long long)arg1 ;
-(NSOperationQueue *)tccAuthOpQueue;
-(void)setTccAuthOpQueue:(NSOperationQueue *)arg1 ;
-(void)setTccAuthQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<NSObject>)TCCDatabaseChangedNotificationObserver;
-(void)setOperationStatisticsByClassName:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)pendingContexts;
-(void)setPendingContexts:(NSMutableArray *)arg1 ;
-(int)pid;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(NSString *)description;
-(void)setContext:(CKDClientContext *)arg1 ;
-(CKDClientContext *)context;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)cancelAllOperations;
-(id)applicationIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end

