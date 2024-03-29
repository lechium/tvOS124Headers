/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DACalDAV/DACalDAV-Structs.h>
#import <DataAccess/DAAccount.h>
#import <libobjc.A.dylib/CDBAccountInfo.h>

@class NSMutableDictionary, NSMutableSet, CalDAVServerVersion, MobileCalDAVPrincipal, CalDAVPrincipalSearchPropertySet, CalDAVRefreshContext, CoreDAVDiscoveryTaskGroup, MobileCalDAVAccountRefreshActor, DACoreDAVLogger, NSDictionary, DACoreDAVTaskManager, NSURL, NSString, NSSet, NSTimeZone, NSDate, NSArray;

@interface MobileCalDAVAccount : DAAccount <CDBAccountInfo> {

	int _wasMigrated;
	NSMutableDictionary* _principals;
	NSMutableDictionary* _itemIDsToMoveActions;
	NSMutableSet* _mMovedItemURLStrings;
	NSMutableSet* _calendars;
	CalDAVServerVersion* _serverVersion;
	BOOL _needsAccountPropertyRefresh;
	BOOL _isRefreshing;
	BOOL _searchQueriesShouldCancel;
	BOOL _isSpinning;
	BOOL _subscribedCalendarsChanged;
	int _preferredEventDaysToSync;
	int _preferredToDoDaysToSync;
	NSMutableSet* _movedItemURLStrings;
	MobileCalDAVPrincipal* _mainPrincipal;
	CalDAVPrincipalSearchPropertySet* _searchPropertySet;
	CalDAVRefreshContext* _refreshContext;
	CoreDAVDiscoveryTaskGroup* _checkValidityTaskGroup;
	MobileCalDAVAccountRefreshActor* _actor;
	NSMutableSet* _searchTaskSet;
	DACoreDAVLogger* _coreDAVLogger;

}

@property (nonatomic,retain) CoreDAVDiscoveryTaskGroup * checkValidityTaskGroup;                //@synthesize checkValidityTaskGroup=_checkValidityTaskGroup - In the implementation block
@property (nonatomic,retain) MobileCalDAVAccountRefreshActor * actor;                           //@synthesize actor=_actor - In the implementation block
@property (assign,nonatomic) BOOL isSpinning;                                                   //@synthesize isSpinning=_isSpinning - In the implementation block
@property (nonatomic,retain) NSMutableSet * searchTaskSet;                                      //@synthesize searchTaskSet=_searchTaskSet - In the implementation block
@property (nonatomic,retain) DACoreDAVLogger * coreDAVLogger;                                   //@synthesize coreDAVLogger=_coreDAVLogger - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mPrincipals;                                 //@synthesize principals=_principals - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mItemIDsToMoveActions;                       //@synthesize itemIDsToMoveActions=_itemIDsToMoveActions - In the implementation block
@property (nonatomic,retain) NSMutableSet * mMovedItemURLStrings;                               //@synthesize movedItemURLStrings=_movedItemURLStrings - In the implementation block
@property (nonatomic,retain) NSMutableSet * mCalendars;                                         //@synthesize calendars=_calendars - In the implementation block
@property (assign,nonatomic) BOOL subscribedCalendarsChanged;                                   //@synthesize subscribedCalendarsChanged=_subscribedCalendarsChanged - In the implementation block
@property (nonatomic,retain) MobileCalDAVPrincipal * mainPrincipal;                             //@synthesize mainPrincipal=_mainPrincipal - In the implementation block
@property (nonatomic,readonly) NSDictionary * principals; 
@property (nonatomic,readonly) DACoreDAVTaskManager * taskManager; 
@property (nonatomic,retain) NSURL * collectionSetURL; 
@property (nonatomic,retain) CalDAVPrincipalSearchPropertySet * searchPropertySet;              //@synthesize searchPropertySet=_searchPropertySet - In the implementation block
@property (nonatomic,retain) NSString * overriddenServer; 
@property (nonatomic,retain) NSString * overriddenScheme; 
@property (assign,nonatomic) int overriddenPort; 
@property (assign,nonatomic) BOOL isWritable; 
@property (assign,nonatomic) BOOL wasMigrated; 
@property (assign,nonatomic) BOOL needsAccountPropertyRefresh;                                  //@synthesize needsAccountPropertyRefresh=_needsAccountPropertyRefresh - In the implementation block
@property (assign,nonatomic) BOOL isRefreshing;                                                 //@synthesize isRefreshing=_isRefreshing - In the implementation block
@property (nonatomic,readonly) NSDictionary * itemIDsToMoveActions; 
@property (nonatomic,readonly) NSSet * movedItemURLStrings; 
@property (nonatomic,copy) NSString * calendarHomeSyncToken; 
@property (nonatomic,retain) CalDAVServerVersion * serverVersion;                               //@synthesize serverVersion=_serverVersion - In the implementation block
@property (assign,nonatomic) int preferredEventDaysToSync;                                      //@synthesize preferredEventDaysToSync=_preferredEventDaysToSync - In the implementation block
@property (assign,nonatomic) int preferredToDoDaysToSync;                                       //@synthesize preferredToDoDaysToSync=_preferredToDoDaysToSync - In the implementation block
@property (nonatomic,readonly) NSTimeZone * viewedTimeZone; 
@property (nonatomic,readonly) NSDate * ocurrenceCacheStartDate; 
@property (nonatomic,readonly) NSDate * ocurrenceCacheEndDate; 
@property (nonatomic,readonly) BOOL shouldFilterEventSyncTimeRange; 
@property (nonatomic,readonly) BOOL shouldFilterTodoSyncTimeRange; 
@property (nonatomic,readonly) BOOL shouldFilterSyncTimeRangeForInbox; 
@property (nonatomic,readonly) BOOL shouldUseCalendarHomeSyncReport; 
@property (nonatomic,readonly) BOOL supportsReminders; 
@property (nonatomic,readonly) BOOL supportsEvents; 
@property (nonatomic,retain) CalDAVRefreshContext * refreshContext;                             //@synthesize refreshContext=_refreshContext - In the implementation block
@property (nonatomic,readonly) NSURL * serverBaseURL; 
@property (nonatomic,readonly) NSArray * wellKnownPaths; 
@property (nonatomic,readonly) NSSet * calendars; 
@property (nonatomic,retain) NSDictionary * subscribedCalendars; 
@property (assign,nonatomic) BOOL searchQueriesShouldCancel;                                    //@synthesize searchQueriesShouldCancel=_searchQueriesShouldCancel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAccountDescription:(id)arg1 ;
-(void)releasePowerAssertion;
-(void)noteHomeSetOnDifferentHost:(id)arg1 ;
-(void)discoveryTask:(id)arg1 gotAccountInfo:(id)arg2 error:(id)arg3 ;
-(long long)coreDAVLogLevel;
-(long long)coreDAVOutputLevel;
-(void)coreDAVLogDiagnosticMessage:(id)arg1 atLevel:(long long)arg2 ;
-(BOOL)shouldLogTransmittedData;
-(void)coreDAVLogTransmittedDataPartial:(id)arg1 ;
-(void)coreDAVTransmittedDataFinished;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(BOOL)wasMigrated;
-(void)setWasMigrated:(BOOL)arg1 ;
-(void)retainPowerAssertion;
-(void)ingestBackingAccountInfoProperties;
-(id)principalPath;
-(void)setPrincipalPath:(id)arg1 ;
-(void)removeFromCoreDAVLoggingDelegates;
-(void)addToCoreDAVLoggingDelegates;
-(id)spinnerIdentifiers;
-(BOOL)saveModifiedPropertiesOnBackingAccount;
-(BOOL)isCalDAVAccount;
-(id)emailAddresses;
-(DACoreDAVTaskManager *)taskManager;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(BOOL)upgradeAccount;
-(BOOL)accountHasSignificantPropertyChangesFromOldAccountInfo:(id)arg1 ;
-(void)discoverInitialPropertiesWithConsumer:(id)arg1 ;
-(void)_reallyCancelSearchQuery:(id)arg1 ;
-(void)_reallyCancelAllSearchQueries;
-(void)_reallyPerformSearchQuery:(id)arg1 ;
-(BOOL)_reallySearchQueriesRunning;
-(id)localizedIdenticalAccountFailureMessage;
-(id)localizedInvalidPasswordMessage;
-(id)onBehalfOfBundleIdentifier;
-(void)setIsSpinning:(BOOL)arg1 ;
-(void)_setSpinning:(BOOL)arg1 ;
-(BOOL)isWritable;
-(void)setCollectionSetURL:(NSURL *)arg1 ;
-(void)setSearchPropertySet:(CalDAVPrincipalSearchPropertySet *)arg1 ;
-(void)setPrincipalURL:(id)arg1 ;
-(NSString *)calendarHomeSyncToken;
-(void)removeCalendar:(id)arg1 ;
-(void)setCalendarHomeSyncToken:(NSString *)arg1 ;
-(void)setMPrincipals:(NSMutableDictionary *)arg1 ;
-(MobileCalDAVPrincipal *)mainPrincipal;
-(void)setMainPrincipal:(MobileCalDAVPrincipal *)arg1 ;
-(NSMutableDictionary *)mPrincipals;
-(void)addPrincipal:(id)arg1 ;
-(void)setIsWritable:(BOOL)arg1 ;
-(void)setNeedsAccountPropertyRefresh:(BOOL)arg1 ;
-(void)setCoreDAVLogger:(DACoreDAVLogger *)arg1 ;
-(void)setSearchTaskSet:(NSMutableSet *)arg1 ;
-(NSDictionary *)subscribedCalendars;
-(void)setSubscribedCalendars:(NSDictionary *)arg1 ;
-(void)setSubscribedCalendarsChanged:(BOOL)arg1 ;
-(NSString *)overriddenServer;
-(int)overriddenPort;
-(NSString *)overriddenScheme;
-(void)_updateCalendarStore:(BOOL)arg1 ;
-(CalDAVPrincipalSearchPropertySet *)searchPropertySet;
-(void*)copyCalStore;
-(NSMutableSet *)mCalendars;
-(void)setMCalendars:(NSMutableSet *)arg1 ;
-(NSTimeZone *)viewedTimeZone;
-(int)preferredEventDaysToSync;
-(int)preferredToDoDaysToSync;
-(BOOL)shouldFilterEventSyncTimeRange;
-(BOOL)shouldFilterTodoSyncTimeRange;
-(id)_calendarConstraintsResource;
-(id)_calendarConstraintsPath;
-(BOOL)supportsReminders;
-(BOOL)supportsEvents;
-(BOOL)_updateCalendarStoreProperties:(void*)arg1 ;
-(BOOL)_updateCalendarStoreNoDBOpen:(BOOL)arg1 ;
-(MobileCalDAVAccountRefreshActor *)actor;
-(void)_clearOrphanedCalendarItemChangesOfType:(int)arg1 withContext:(id)arg2 goodCalendarIds:(id)arg3 ;
-(void)_clearOrphanedChangesWithChangesCall:(/*function pointer*/void*)arg1 entityType:(int)arg2 withContext:(id)arg3 ;
-(NSDictionary *)principals;
-(BOOL)_saveModifiedPrincipalsOnBackingAccount;
-(void)_syncEndedWithError:(id)arg1 ;
-(BOOL)subscribedCalendarsChanged;
-(BOOL)_saveModifiedSubscribedCalendarsOnBackingAccount;
-(CalDAVRefreshContext *)refreshContext;
-(void)_clearOrphanedChangesWithContext:(id)arg1 ;
-(NSMutableDictionary *)mItemIDsToMoveActions;
-(NSMutableSet *)mMovedItemURLStrings;
-(void)setRefreshContext:(CalDAVRefreshContext *)arg1 ;
-(void)setIsRefreshing:(BOOL)arg1 ;
-(void)setActor:(MobileCalDAVAccountRefreshActor *)arg1 ;
-(void)setMItemIDsToMoveActions:(NSMutableDictionary *)arg1 ;
-(void)setMMovedItemURLStrings:(NSMutableSet *)arg1 ;
-(id)_collectActionsFromMoveDictionary:(CFDictionaryRef)arg1 forDataclass:(id)arg2 outShouldSave:(BOOL*)arg3 ;
-(void)_collectMoveActions;
-(void)_syncStarted;
-(NSMutableSet *)searchTaskSet;
-(NSURL *)collectionSetURL;
-(CoreDAVDiscoveryTaskGroup *)checkValidityTaskGroup;
-(void)setCheckValidityTaskGroup:(CoreDAVDiscoveryTaskGroup *)arg1 ;
-(NSArray *)wellKnownPaths;
-(id)_powerAssertionContext;
-(id)_powerAssertionGroupIdentifier;
-(DACoreDAVLogger *)coreDAVLogger;
-(BOOL)addressIsAccountOwner:(id)arg1 ;
-(NSSet *)movedItemURLStrings;
-(NSDictionary *)itemIDsToMoveActions;
-(void)setOverriddenServer:(NSString *)arg1 ;
-(void)setOverriddenPort:(int)arg1 ;
-(void)setOverriddenScheme:(NSString *)arg1 ;
-(NSURL *)serverBaseURL;
-(void)addCalendar:(id)arg1 ;
-(void)removeCalendarWithURL:(id)arg1 ;
-(void)reloadCalendars;
-(void)removePrincipal:(id)arg1 ;
-(NSDate *)ocurrenceCacheStartDate;
-(NSDate *)ocurrenceCacheEndDate;
-(BOOL)shouldFilterSyncTimeRangeForInbox;
-(BOOL)shouldUseCalendarHomeSyncReport;
-(void)cancelRefreshWithCompletion:(/*^block*/id)arg1 ;
-(void)refreshActor:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)refreshWithContext:(id)arg1 ;
-(void)dropPowerAssertions;
-(void)reattainPowerAssertions;
-(void)setPreferredEventDaysToSync:(int)arg1 ;
-(void)setPreferredToDoDaysToSync:(int)arg1 ;
-(BOOL)needsAccountPropertyRefresh;
-(BOOL)searchQueriesShouldCancel;
-(void)setSearchQueriesShouldCancel:(BOOL)arg1 ;
-(CalDAVServerVersion *)serverVersion;
-(void)setServerVersion:(CalDAVServerVersion *)arg1 ;
-(BOOL)isEqualToAccount:(id)arg1 ;
-(NSSet *)calendars;
-(BOOL)isSpinning;
-(id)init;
-(void)dealloc;
-(BOOL)isRefreshing;
@end

