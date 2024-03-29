/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <CoreDuet/_DKSyncCompositeOperation.h>

@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;
@class _DKPerformSyncUpHistoryAdditionsOperation, _DKSyncPeer, _DKSync2Policy, _DKSyncType, _CDMutablePerfMetric, NSArray, NSDate, _DKSyncHistory;

@interface _DKPerformSyncUpHistoryDeletionsOperation : _DKSyncCompositeOperation {

	_DKPerformSyncUpHistoryAdditionsOperation* _sibling;
	id<_DKSyncLocalKnowledgeStorage> _localStorage;
	id<_DKSyncRemoteKnowledgeStorage> _transport;
	_DKSyncPeer* _me;
	_DKSync2Policy* _policy;
	_DKSyncType* _type;
	_CDMutablePerfMetric* _perfMetric;
	CDPerfEvent _perfEvent;
	NSArray* _streamNames;
	BOOL _hadDeletions;
	NSDate* _now;
	_DKSyncHistory* _history;
	unsigned long long _batchNumber;

}
+(void)_updateEventStatsWithPreviousSyncDate:(id)arg1 transportType:(long long)arg2 ;
+(void)_updateEventStatsWithTotal:(unsigned long long)arg1 transportType:(long long)arg2 ;
-(void)endOperation;
-(void)startPerfMetrics;
-(void)endPerfMetrics;
-(void)performSyncUpHistoryDeletions;
-(BOOL)existsAdditionsSyncHistory;
-(void)performSyncUpHistoryDeletionsWithDeletionsHighWaterMark:(id)arg1 orError:(id)arg2 ;
-(void)performSyncUpHistoryDeletionsWithPreviousHighWaterMark:(id)arg1 ;
-(void)handleUpdateStorageWithStartDate:(id)arg1 endDate:(id)arg2 deletedEventIDsCount:(unsigned long long)arg3 orError:(id)arg4 ;
-(id)initWithParent:(id)arg1 sibling:(id)arg2 localStorage:(id)arg3 transport:(id)arg4 peer:(id)arg5 policy:(id)arg6 type:(id)arg7 ;
-(BOOL)isAsynchronous;
-(void)main;
@end

