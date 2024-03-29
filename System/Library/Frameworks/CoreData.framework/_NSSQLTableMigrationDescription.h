/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSSQLEntity, NSMutableArray, NSMutableDictionary, NSNumber;

@interface _NSSQLTableMigrationDescription : NSObject {

	NSSQLEntity* _rootEntity;
	NSSQLEntity* _sourceRootEntity;
	int _migrationType;
	NSMutableArray* _addedEntityMigrations;
	NSMutableArray* _removedEntityMigrations;
	NSMutableArray* _copiedEntityMigrations;
	NSMutableArray* _transformedEntityMigrations;
	NSMutableDictionary* _migrationByEntity;
	NSMutableArray* _addedManyToManys;
	NSMutableArray* _removedManyToManys;
	NSMutableArray* _transformedManyToManys;
	NSMutableDictionary* _tempTableNames;
	NSNumber* _hasTransformedTableSchema;

}

@property (nonatomic,readonly) int migrationType;                     //@synthesize migrationType=_migrationType - In the implementation block
@property (nonatomic,readonly) NSSQLEntity * rootEntity;              //@synthesize rootEntity=_rootEntity - In the implementation block
-(NSSQLEntity *)rootEntity;
-(int)migrationType;
-(id)_addedManyToManys;
-(id)_removedManyToManys;
-(id)_transformedManyToManys;
-(id)_sourceRootEntity;
-(BOOL)_hasTransformedTableSchema;
-(id)_tempNameForTableName:(id)arg1 ;
-(id)createInsertStatementForEntityMigration:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(id)createFEKUpdateStatementsForEntityMigration:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(id)createUpdateStatementForEntityMigration:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(id)createDeleteStatementForEntityMigrations:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(id)newCopyAndInsertStatementForToOne:(id)arg1 toManyToMany:(id)arg2 fromTableName:(id)arg3 invertColumns:(BOOL)arg4 migrationContext:(NSSQLMigrationContext)arg5 ;
-(id)_retainedRemovedSubEntitiesOfEntity:(id)arg1 ;
-(id)initWithRootEntity:(id)arg1 migrationType:(int)arg2 ;
-(void)addEntityMigrationDescription:(id)arg1 ;
-(void)appendStatementsToRenameTables:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(void)appendStatementsToCreateOrDropTables:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(void)appendStatementsToPerformMigration:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(void)appendStatementsToCompleteMigration:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(void)dealloc;
-(id)description;
@end

