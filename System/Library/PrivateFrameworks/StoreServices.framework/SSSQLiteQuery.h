/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StoreServices/StoreServices-Structs.h>
@class SSSQLiteDatabase, SSSQLiteQueryDescriptor;

@interface SSSQLiteQuery : NSObject {

	SSSQLiteDatabase* _database;
	SSSQLiteQueryDescriptor* _descriptor;

}

@property (readonly) SSSQLiteDatabase * database; 
@property (readonly) SSSQLiteQueryDescriptor * queryDescriptor; 
@property (readonly) long long countOfEntities; 
-(BOOL)deleteAllEntities;
-(void)enumeratePersistentIDsAndProperties:(const id*)arg1 count:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)bindToSelectStatement:(sqlite3_stmtRef)arg1 bindingIndex:(inout int*)arg2 ;
-(id)copySelectSQLWithProperties:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)enumerateMemoryEntitiesWithProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_newSelectSQLWithProperties:(const id*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithDatabase:(id)arg1 descriptor:(id)arg2 ;
-(id)copyEntityIdentifiers;
-(BOOL)createTemporaryTableWithName:(id)arg1 properties:(const id*)arg2 count:(unsigned long long)arg3 ;
-(void)enumerateMemoryEntitiesUsingBlock:(/*^block*/id)arg1 ;
-(SSSQLiteQueryDescriptor *)queryDescriptor;
-(void)enumeratePersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(long long)countOfEntities;
-(SSSQLiteDatabase *)database;
-(void)dealloc;
@end
