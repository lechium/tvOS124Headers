/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMigrationManager, NSEntityMapping, NSPropertyMapping;

@interface NSMigrationContext : NSObject {

	NSMutableDictionary* _bySourceAssociationTable;
	NSMutableDictionary* _byDestinationAssociationTable;
	NSMutableDictionary* _byMappingBySourceAssociationTable;
	NSMutableDictionary* _byMappingByDestinationAssociationTable;
	NSMigrationManager* _migrationManager;
	NSEntityMapping* _currentMapping;
	unsigned long long _currentStep;
	NSPropertyMapping* _currentPropertyMapping;

}

@property (retain) NSEntityMapping * currentEntityMapping; 
@property (retain) NSPropertyMapping * currentPropertyMapping; 
@property (assign) unsigned long long currentMigrationStep; 
-(void)setCurrentPropertyMapping:(NSPropertyMapping *)arg1 ;
-(void)associateSourceInstance:(id)arg1 withDestinationInstance:(id)arg2 forEntityMapping:(id)arg3 ;
-(void)clearAssociationTables;
-(void)setCurrentMigrationStep:(unsigned long long)arg1 ;
-(void)_createAssociationsBySource:(id)arg1 withDestination:(id)arg2 forEntityMapping:(id)arg3 ;
-(void)_createAssociationsByDestination:(id)arg1 fromSource:(id)arg2 forEntityMapping:(id)arg3 ;
-(id)initWithMigrationManager:(id)arg1 ;
-(NSEntityMapping *)currentEntityMapping;
-(void)setCurrentEntityMapping:(NSEntityMapping *)arg1 ;
-(NSPropertyMapping *)currentPropertyMapping;
-(unsigned long long)currentMigrationStep;
-(id)destinationInstancesForEntityMapping:(id)arg1 sourceInstance:(id)arg2 ;
-(id)sourceInstancesForEntityMapping:(id)arg1 destinationInstance:(id)arg2 ;
-(void)dealloc;
@end

