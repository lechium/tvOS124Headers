/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <CoreDuet/_DKSyncCompositeOperation.h>

@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;
@class _DKSyncPeer, _DKSync2Policy, _DKSyncType, _CDMutablePerfMetric, NSArray, NSDate, _DKSyncHistory;

@interface _DKPerformSyncUpHistoryAdditionsOperation : _DKSyncCompositeOperation {

	id<_DKSyncLocalKnowledgeStorage> _localStorage;
	id<_DKSyncRemoteKnowledgeStorage> _transport;
	_DKSyncPeer* _me;
	_DKSync2Policy* _policy;
	_DKSyncType* _type;
	_CDMutablePerfMetric* _perfMetric;
	CDPerfEvent _perfEvent;
	NSArray* _streamNames;
	BOOL _hadAdditions;
	NSDate* _now;
	unsigned long long _batchNumber;
	_DKSyncHistory* _history;

}

@property (readonly) _DKSyncHistory * history;              //@synthesize history=_history - In the implementation block
+(void)_updateEventStatsWithPreviousSyncDate:(id)arg1 transportType:(long long)arg2 ;
+(void)_updateEventStatsWithTotal:(unsigned long long)arg1 streamNameCounts:(id)arg2 transportType:(long long)arg3 ;
-(id)initWithParent:(id)arg1 localStorage:(id)arg2 transport:(id)arg3 peer:(id)arg4 policy:(id)arg5 type:(id)arg6 ;
-(void)endOperation;
-(void)startPerfMetrics;
-(void)endPerfMetrics;
-(void)performSyncUpHistoryAdditions;
-(void)performSyncUpHistoryAdditionsWithAdditionsHighWaterMark:(id)arg1 orError:(id)arg2 ;
-(void)performSyncUpHistoryAdditionsWithPreviousHighWaterMark:(id)arg1 ;
-(void)handleUpdateStorageWithFetchedWindow:(id)arg1 eventsCount:(unsigned long long)arg2 error:(id)arg3 ;
-(BOOL)isAsynchronous;
-(_DKSyncHistory *)history;
-(void)main;
@end

