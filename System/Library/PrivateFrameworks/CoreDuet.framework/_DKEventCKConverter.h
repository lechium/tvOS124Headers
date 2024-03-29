/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKRecordZoneID;

@interface _DKEventCKConverter : NSObject {

	CKRecordZoneID* _zoneID;

}

@property (retain) CKRecordZoneID * zoneID;              //@synthesize zoneID=_zoneID - In the implementation block
-(id)eventsFromRecords:(id)arg1 ;
-(id)eventIDsFromRecordIDsAndTypes:(id)arg1 ;
-(id)recordsFromEvents:(id)arg1 ;
-(id)recordIDsFromEventIDs:(id)arg1 ;
-(id)eventDataFromRecord:(id)arg1 ;
-(id)recordFromEventData:(id)arg1 event:(id)arg2 ;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(id)initWithZoneID:(id)arg1 ;
-(CKRecordZoneID *)zoneID;
@end

