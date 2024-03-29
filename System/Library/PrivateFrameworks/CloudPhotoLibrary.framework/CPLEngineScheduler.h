/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CPLAbstractObject.h>
#import <libobjc.A.dylib/CPLEngineComponent.h>

@protocol OS_dispatch_queue;
@class NSDate, NSObject, NSCountedSet, NSMutableDictionary, NSMutableSet, CPLPlatformObject, CPLEngineLibrary, NSString;

@interface CPLEngineScheduler : NSObject <CPLAbstractObject, CPLEngineComponent> {

	unsigned long long _requiredFirstState;
	unsigned long long _lastRequestGeneration;
	unsigned long long _currentRequestGeneration;
	NSDate* _nextScheduledDate;
	double _intervalForRetry;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _currentSyncState;
	BOOL _needsToUpdateScopeList;
	BOOL _shouldNoteServerHasChanges;
	BOOL _opened;
	NSDate* _unavailabilityLimitDate;
	unsigned long long _foregroundCalls;
	NSCountedSet* _disablingReasons;
	NSCountedSet* _blockingElements;
	NSMutableDictionary* _blockedElements;
	NSMutableSet* _blockWaiters;
	NSCountedSet* _unblockOnceElements;
	NSObject*<OS_dispatch_queue> _blockingLock;
	unsigned long long _significantWorkCalls;
	unsigned long long _disablingMinglingCount;
	NSDate* _lastSyncSessionDateCausedByForeground;
	BOOL _protectAgainstFastRelaunch;
	BOOL _didWriteFirstSyncMarker;
	BOOL _delayedFirstSyncBecauseOfRapidLaunch;
	CPLPlatformObject* _platformObject;
	CPLEngineLibrary* _engineLibrary;
	/*^block*/id _requiredStateObserverBlock;
	/*^block*/id _shouldBackOffOnErrorBlock;

}

@property (nonatomic,__weak,readonly) CPLEngineLibrary * engineLibrary;              //@synthesize engineLibrary=_engineLibrary - In the implementation block
@property (nonatomic,copy) id requiredStateObserverBlock;                            //@synthesize requiredStateObserverBlock=_requiredStateObserverBlock - In the implementation block
@property (nonatomic,copy) id shouldBackOffOnErrorBlock;                             //@synthesize shouldBackOffOnErrorBlock=_shouldBackOffOnErrorBlock - In the implementation block
@property (nonatomic,readonly) unsigned long long requiredState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject;                   //@synthesize platformObject=_platformObject - In the implementation block
+(id)platformImplementationProtocol;
+(id)validElements;
-(CPLEngineLibrary *)engineLibrary;
-(CPLPlatformObject *)platformObject;
-(void)noteScopeListNeedsUpdate;
-(void)noteStoreNeedsSetup;
-(void)noteStoreNeedsToUpdateDisabledFeatures;
-(void)closeAndDeactivate:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getStatusDictionaryWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithEngineLibrary:(id)arg1 ;
-(void)noteClientNeedsToPull;
-(void)_writeFirstSynchronizationMarker;
-(void)_disableRetryAfterLocked;
-(BOOL)_syncSessionIsPossible;
-(void)_reallyUnscheduleSession;
-(void)_startSyncSessionWithMinimalPhase:(unsigned long long)arg1 ;
-(void)_scheduleNextSyncSession;
-(void)_reallyStartSyncSession;
-(id)_minimalDateForFirstSync;
-(void)_setRequiredFirstState:(unsigned long long)arg1 ;
-(void)_startRequiredSyncSession;
-(void)kickOffSyncSession;
-(void)_noteSyncSessionNeededFromState:(unsigned long long)arg1 ;
-(void)_disableFastRelaunchProtection;
-(void)noteScopeNeedsToPushToTransport;
-(void)noteServerHasChanges;
-(void)_unscheduleNextSyncSession;
-(void)_reallyNoteServerHasChangesLocked;
-(void)_disableSynchronizationWithReasonLocked:(id)arg1 ;
-(void)_enableSynchronizationWithReasonLocked:(id)arg1 ;
-(void)_backOff;
-(void)_noteServerIsUnavailableWithErrorLocked:(id)arg1 ;
-(void)_resetFirstSynchronizationMarker;
-(void)noteSyncSessionSucceeded;
-(void)_handleResetClientCacheWithError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleResetGlobalAnchorWithError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleResetCloudCacheWithError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleResetAnchorWithError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_pathToFirstSynchronizationMarker;
-(void)startRequiredSyncSessionNow;
-(void)noteStoreNeedsCleanup;
-(void)noteTransportNeedsUpdate;
-(void)noteScopeNeedsUpdate;
-(void)noteScopeNeedsToPushHighPriorityToTransport;
-(void)noteScopeNeedsToPullFromTransport;
-(void)noteClientIsInSyncWithClientCache;
-(void)noteClientIsNotInSyncWithClientCache;
-(void)noteResourceDownloadQueueIsFull;
-(BOOL)isClientInForeground;
-(void)disableSynchronizationWithReason:(id)arg1 ;
-(void)enableSynchronizationWithReason:(id)arg1 ;
-(void)blockEngineElement:(id)arg1 ;
-(void)unblockEngineElement:(id)arg1 ;
-(void)willRunEngineElement:(id)arg1 ;
-(void)waitForEngineElementToBeBlocked:(id)arg1 ;
-(void)unblockEngineElementOnce:(id)arg1 ;
-(void)disableMingling;
-(void)enableMingling;
-(BOOL)isMinglingEnabled;
-(BOOL)isSynchronizationDisabledWithReasonError:(id*)arg1 ;
-(void)noteServerIsUnavailableWithError:(id)arg1 ;
-(void)noteNetworkStateDidChange;
-(void)noteSyncSessionStateWillBeAttempted:(unsigned long long)arg1 ;
-(void)noteSyncSessionFailedDuringPhase:(unsigned long long)arg1 withError:(id)arg2 ;
-(void)resetBackoffInterval;
-(unsigned long long)requiredState;
-(id)requiredStateObserverBlock;
-(void)setRequiredStateObserverBlock:(id)arg1 ;
-(id)shouldBackOffOnErrorBlock;
-(void)setShouldBackOffOnErrorBlock:(id)arg1 ;
-(void)noteClientIsBeginningSignificantWork;
-(void)noteClientIsEndingSignificantWork;
-(void)noteClientIsInForeground;
-(void)noteClientIsInBackground;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)componentName;
@end

