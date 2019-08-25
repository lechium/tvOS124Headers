/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKRecordZoneID, NSMutableDictionary, NSMutableSet, NSArray, NSDictionary, NSSet;

@interface PFCloudKitHistoryAnalyzerContext : NSObject {

	CKRecordZoneID* _zoneID;
	NSMutableDictionary* _objectIDToState;
	NSMutableSet* _processedTransactionIDs;
	NSArray* _sortedStates;
	NSDictionary* _entityNameToObjectIDs;
	NSMutableSet* _allDeletedRecordIDs;
	NSMutableDictionary* _objectIDToDeletedRecordID;
	BOOL _isFinished;
	NSSet* _deletedRecordIDs;

}

@property (nonatomic,readonly) CKRecordZoneID * zoneID;                               //@synthesize zoneID=_zoneID - In the implementation block
@property (nonatomic,readonly) NSDictionary * objectIDToState;                        //@synthesize objectIDToState=_objectIDToState - In the implementation block
@property (nonatomic,readonly) NSSet * processedTransactionIDs;                       //@synthesize processedTransactionIDs=_processedTransactionIDs - In the implementation block
@property (nonatomic,readonly) NSArray * sortedStates;                                //@synthesize sortedStates=_sortedStates - In the implementation block
@property (nonatomic,readonly) NSDictionary * entityNameToObjectIDs;                  //@synthesize entityNameToObjectIDs=_entityNameToObjectIDs - In the implementation block
@property (nonatomic,readonly) NSDictionary * objectIDToDeletedRecordID;              //@synthesize objectIDToDeletedRecordID=_objectIDToDeletedRecordID - In the implementation block
@property (nonatomic,readonly) NSSet * deletedRecordIDs;                              //@synthesize deletedRecordIDs=_deletedRecordIDs - In the implementation block
@property (nonatomic,readonly) NSSet * allDeletedRecordIDs;                           //@synthesize allDeletedRecordIDs=_allDeletedRecordIDs - In the implementation block
@property (nonatomic,readonly) BOOL isFinished;                                       //@synthesize isFinished=_isFinished - In the implementation block
-(void)processTransaction:(id)arg1 fromImporter:(BOOL)arg2 ;
-(NSArray *)sortedStates;
-(NSSet *)processedTransactionIDs;
-(NSDictionary *)entityNameToObjectIDs;
-(NSSet *)allDeletedRecordIDs;
-(NSDictionary *)objectIDToDeletedRecordID;
-(void)processChange:(id)arg1 ;
-(NSDictionary *)objectIDToState;
-(NSSet *)deletedRecordIDs;
-(void)finishProcessing;
-(id)initWithZone:(id)arg1 ;
-(CKRecordZoneID *)zoneID;
-(void)dealloc;
-(void)reset;
-(BOOL)isFinished;
@end

