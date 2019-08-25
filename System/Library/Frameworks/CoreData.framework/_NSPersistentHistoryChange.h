/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPersistentHistoryChange.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSManagedObjectID, NSDictionary, NSPersistentHistoryTransaction, NSData, NSSQLEntity;

@interface _NSPersistentHistoryChange : NSPersistentHistoryChange <NSSecureCoding> {

	long long _changeID;
	NSManagedObjectID* _changedObjectID;
	long long _changeType;
	NSDictionary* _tombstone;
	NSPersistentHistoryTransaction* _transaction;
	NSData* _columns;
	NSSQLEntity* _sqlEntity;
	NSManagedObjectID* _backingObjectID;

}
+(id)_updatedPropertiesForEntity:(id)arg1 andData:(id)arg2 ;
+(id)_propertyDataForEntity:(id)arg1 withSetOfPropertyNames:(id)arg2 ;
+(id)_dataMaskForEntity:(id)arg1 andDeltaMask:(CFBitVectorRef)arg2 ;
+(id)_mergeOldMask:(id)arg1 andNewMask:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(void)_setTransaction:(id)arg1 ;
-(id)_backingObjectID;
-(id)initWithDictionary:(id)arg1 andChangeObjectID:(id)arg2 ;
-(id)transaction;
-(long long)changeType;
-(id)changedObjectID;
-(id)updatedProperties;
-(id)tombstone;
-(long long)changeID;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

