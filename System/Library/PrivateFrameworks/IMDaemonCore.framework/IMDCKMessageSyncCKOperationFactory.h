/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMDCKMessageSyncCKOperationFactory : NSObject
-(id)_messageFetchRecordZoneChangesOptionsDictionaryUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3 ;
-(id)_operationGroupWithName:(id)arg1 ;
-(id)_fetchOptionsDictionaryWithFetchOptions:(id)arg1 andZoneID:(id)arg2 ;
-(id)fetchMessageZoneChangesCKOperationUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3 operationGroupName:(id)arg4 ;
-(id)saveMessagesCKOperationUsingRecordsToSave:(id)arg1 operationGroupName:(id)arg2 ;
-(id)deleteMessageCKOperationUsingRecordIDstoDelete:(id)arg1 ;
-(id)fetchArchivedRecordsOperationWithSyncToken:(id)arg1 zoneID:(id)arg2 ;
@end

