/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSArray;

@interface ABSAddressBookContextStorage : NSObject {

	BOOL _hasUnsavedChanges;
	NSMutableDictionary* _records;
	NSMutableDictionary* _deletedRecords;
	NSMutableArray* _insertedRecords;
	NSMutableDictionary* _updatedRecords;
	NSMutableDictionary* _deletedMemberships;
	NSMutableDictionary* _addedMemberships;
	NSMutableDictionary* _revertedRecords;

}

@property (nonatomic,readonly) NSMutableDictionary * deletedMemberships;                     //@synthesize deletedMemberships=_deletedMemberships - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * addedMemberships;                       //@synthesize addedMemberships=_addedMemberships - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * revertedRecords;                        //@synthesize revertedRecords=_revertedRecords - In the implementation block
@property (assign,nonatomic) BOOL hasUnsavedChanges;                                         //@synthesize hasUnsavedChanges=_hasUnsavedChanges - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * records;                                //@synthesize records=_records - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * deletedRecords;                         //@synthesize deletedRecords=_deletedRecords - In the implementation block
@property (nonatomic,readonly) NSMutableArray * insertedRecords;                             //@synthesize insertedRecords=_insertedRecords - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * updatedRecords;                         //@synthesize updatedRecords=_updatedRecords - In the implementation block
@property (nonatomic,readonly) NSArray * recordsWithPendingMembershipAdditions; 
@property (nonatomic,readonly) NSArray * recordsWithPendingMembershipDeletions; 
-(NSMutableDictionary *)updatedRecords;
-(BOOL)recordUpdated:(id)arg1 ;
-(NSMutableArray *)insertedRecords;
-(void)setHasUnsavedChanges:(BOOL)arg1 ;
-(NSMutableDictionary *)revertedRecords;
-(NSMutableDictionary *)addedMemberships;
-(NSMutableDictionary *)deletedMemberships;
-(void)_resetIncludingLivingRecords:(BOOL)arg1 ;
-(id)cnImplFetched:(id)arg1 creationBlock:(/*^block*/id)arg2 ;
-(id)recordFetched:(id)arg1 ;
-(BOOL)deleteRecord:(id)arg1 ;
-(BOOL)addMemberRecord:(id)arg1 toRecord:(id)arg2 ;
-(BOOL)removeMemberRecord:(id)arg1 fromRecord:(id)arg2 ;
-(NSArray *)recordsWithPendingMembershipAdditions;
-(NSArray *)recordsWithPendingMembershipDeletions;
-(id)addedMembersForRecord:(id)arg1 ;
-(id)removedMembersForRecord:(id)arg1 ;
-(void)commitPendingChanges;
-(void)revert;
-(NSMutableDictionary *)deletedRecords;
-(id)init;
-(BOOL)hasUnsavedChanges;
-(NSMutableDictionary *)records;
-(BOOL)addRecord:(id)arg1 ;
@end

