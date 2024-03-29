/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class _DKSyncType, NSUUID;


@protocol _DKSyncRemoteKnowledgeStorageFetchDelegate
@property (nonatomic,readonly) _DKSyncType * syncType; 
@property (nonatomic,readonly) NSUUID * deviceUUID; 
@required
-(_DKSyncType *)syncType;
-(id)sortedEventsWithCreationDateBetweenDate:(id)arg1 andDate:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 error:(id*)arg6;
-(id)deletedEventIDsSinceDate:(id)arg1 streamNames:(id)arg2 limit:(unsigned long long)arg3 endDate:(id*)arg4 error:(id*)arg5;
-(NSUUID *)deviceUUID;

@end

