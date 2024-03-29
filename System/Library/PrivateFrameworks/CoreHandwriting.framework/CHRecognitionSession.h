/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CHRecognitionSessionTaskDelegate.h>

@protocol CHStrokeProvider, CHRecognitionSessionDataSource, OS_dispatch_queue;
@class CHRecognitionSessionResult, NSArray, NSMutableDictionary, NSMutableArray, NSObject, NSData, NSString;

@interface CHRecognitionSession : NSObject <CHRecognitionSessionTaskDelegate> {

	CHRecognitionSessionResult* _lastRecognitionResult;
	long long _status;
	id<CHStrokeProvider> _latestStrokeProvider;
	BOOL __hasUnprocessedChanges;
	NSArray* _preferredLocales;
	id<CHRecognitionSessionDataSource> _dataSource;
	NSArray* __effectiveLocales;
	NSMutableDictionary* __recognizersByLocaleID;
	unsigned long long __changeCoalescingIndex;
	NSMutableArray* __changeObservers;
	NSMutableArray* __inputDrawingClients;
	NSObject*<OS_dispatch_queue> __tasksWorkQueue;
	NSObject*<OS_dispatch_queue> __sessionQueue;
	NSMutableArray* __activeTasks;

}

@property (retain,readonly) CHRecognitionSessionResult * lastRecognitionResult; 
@property (nonatomic,readonly) long long status; 
@property (retain,readonly) id<CHStrokeProvider> latestStrokeProvider; 
@property (setter=_setEffectiveLocales:,nonatomic,copy) NSArray * _effectiveLocales;                                  //@synthesize _effectiveLocales=__effectiveLocales - In the implementation block
@property (setter=_setLastRecognitionResult:,retain) CHRecognitionSessionResult * lastRecognitionResult; 
@property (assign,setter=_setStatus:,nonatomic) long long status; 
@property (setter=_setLatestStrokeProvider:,retain) id<CHStrokeProvider> latestStrokeProvider; 
@property (assign,setter=_setHasUnprocessedChanges:,nonatomic) BOOL _hasUnprocessedChanges;                           //@synthesize _hasUnprocessedChanges=__hasUnprocessedChanges - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * _recognizersByLocaleID;                                   //@synthesize _recognizersByLocaleID=__recognizersByLocaleID - In the implementation block
@property (assign,nonatomic) unsigned long long _changeCoalescingIndex;                                               //@synthesize _changeCoalescingIndex=__changeCoalescingIndex - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * _changeObservers;                                              //@synthesize _changeObservers=__changeObservers - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * _inputDrawingClients;                                          //@synthesize _inputDrawingClients=__inputDrawingClients - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> _tasksWorkQueue;                                   //@synthesize _tasksWorkQueue=__tasksWorkQueue - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> _sessionQueue;                                     //@synthesize _sessionQueue=__sessionQueue - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * _activeTasks;                                                  //@synthesize _activeTasks=__activeTasks - In the implementation block
@property (nonatomic,copy) NSArray * preferredLocales;                                                                //@synthesize preferredLocales=_preferredLocales - In the implementation block
@property (nonatomic,copy) NSArray * locales; 
@property (assign,nonatomic) id<CHRecognitionSessionDataSource> dataSource;                                           //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) NSData * sessionData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isLocaleSupported:(id)arg1 ;
+(id)effectiveLocalesFromLocales:(id)arg1 ;
-(NSArray *)locales;
-(void)setLocales:(NSArray *)arg1 ;
-(void)registerChangeObserver:(id)arg1 ;
-(void)unregisterChangeObserver:(id)arg1 ;
-(void)_setStatus:(long long)arg1 ;
-(NSArray *)preferredLocales;
-(id<CHStrokeProvider>)latestStrokeProvider;
-(id)recognizerForLocale:(id)arg1 ;
-(CHRecognitionSessionResult *)lastRecognitionResult;
-(void)registerInputDrawingClient:(id)arg1 ;
-(void)unregisterInputDrawingClient:(id)arg1 ;
-(void)waitForPendingRecognitionTasks;
-(NSObject*<OS_dispatch_queue>)_sessionQueue;
-(void)_setEffectiveLocales:(id)arg1 ;
-(void)_cleanupCachedRecognizers;
-(BOOL)_isReadyToProcessChanges;
-(void)rebuildRecognitionResults;
-(void)setNeedsRecognitionUpdate;
-(void)setPreferredLocales:(NSArray *)arg1 ;
-(void)_notifyObserversWithBlock:(/*^block*/id)arg1 ;
-(BOOL)_hasPendingRecognitionTasks;
-(BOOL)_hasUnprocessedChanges;
-(NSMutableArray *)_changeObservers;
-(NSMutableArray *)_activeTasks;
-(id)indexableContent;
-(void)_setLatestStrokeProvider:(id)arg1 ;
-(void)_setHasUnprocessedChanges:(BOOL)arg1 ;
-(void)_scheduleProcessStrokeProviderChangesImmediately:(BOOL)arg1 ;
-(void)_updateRecognitionSessionStatus;
-(void)_cancelOngoingRequests;
-(unsigned long long)_changeCoalescingIndex;
-(void)set_changeCoalescingIndex:(unsigned long long)arg1 ;
-(void)_setLastRecognitionResult:(id)arg1 ;
-(void)_processPendingStrokeChangesIfAvailable;
-(double)_preferredCoalescingInterval;
-(NSMutableArray *)_inputDrawingClients;
-(NSObject*<OS_dispatch_queue>)_tasksWorkQueue;
-(NSMutableDictionary *)_recognizersByLocaleID;
-(void)cancelOngoingRequests;
-(BOOL)loadSessionData:(id)arg1 error:(id*)arg2 ;
-(NSArray *)_effectiveLocales;
-(id)lastRecognitionResultWaitingForPendingTasks;
-(NSData *)sessionData;
-(id)init;
-(void)dealloc;
-(id<CHRecognitionSessionDataSource>)dataSource;
-(void)setDataSource:(id<CHRecognitionSessionDataSource>)arg1 ;
-(long long)status;
@end

