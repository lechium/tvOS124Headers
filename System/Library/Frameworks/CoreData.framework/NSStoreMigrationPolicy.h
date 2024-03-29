/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPersistentStoreCoordinator, NSURL, NSString, NSDictionary, NSManagedObjectModel, NSMappingModel, NSMigrationManager, NSArray;

@interface NSStoreMigrationPolicy : NSObject {

	NSPersistentStoreCoordinator* _coordinator;
	NSURL* _sourceURL;
	NSString* _sourceConfiguration;
	NSDictionary* _sourceOptions;
	NSManagedObjectModel* _sourceModel;
	NSDictionary* _sourceMetadata;
	NSMappingModel* _mappingModel;
	NSURL* _destinationURL;
	NSString* _destinationType;
	NSString* _destinationConfiguration;
	NSDictionary* _destinationOptions;
	NSMigrationManager* _migrationManager;
	NSArray* _resourceBundles;
	long long _workingWithSkewedSource;
	void* _reserved2;
	void* _reserved3;
	void* _reserved4;

}
+(int)migrationDebugLevel;
+(void)setMigrationDebugLevel:(int)arg1 ;
+(id)migrationStoreOptionsFromStoreOptions:(id)arg1 ;
+(id)destinationURLForMigrationSourceURL:(id)arg1 createDocumentReplacementDirectory:(BOOL)arg2 error:(id*)arg3 ;
-(id)sourceModel;
-(id)destinationModel;
-(id)mappingModel;
-(void)setPersistentStoreCoordinator:(id)arg1 sourceURL:(id)arg2 configuration:(id)arg3 metadata:(id)arg4 options:(id)arg5 ;
-(id)_gatherDataAndPerformMigration:(id*)arg1 ;
-(id)resourceBundles;
-(id)sourceOptions;
-(id)sourceMetadata;
-(void)setSourceMetadata:(id)arg1 ;
-(BOOL)migrateStoreAtURL:(id)arg1 toURL:(id)arg2 storeType:(id)arg3 options:(id)arg4 withManager:(id)arg5 error:(id*)arg6 ;
-(id)sourceModelForStoreAtURL:(id)arg1 metadata:(id)arg2 error:(id*)arg3 ;
-(id)createMigrationManagerForSourceModel:(id)arg1 destinationModel:(id)arg2 error:(id*)arg3 ;
-(id)migrateStoreAtURL:(id)arg1 withManager:(id)arg2 metadata:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
-(id)externalDataReferencesURLForDestination:(id)arg1 forStoreOfType:(id)arg2 ;
-(void)setSourceModel:(id)arg1 ;
-(id)mappingModelForSourceModel:(id)arg1 destinationModel:(id)arg2 error:(id*)arg3 ;
-(void)setMappingModel:(id)arg1 ;
-(id)destinationOptionsForMigration:(id)arg1 sourceMetadata:(id)arg2 error:(id*)arg3 ;
-(void)setDestinationOptions:(id)arg1 ;
-(id)destinationOptions;
-(id)destinationTypeForMigration:(id)arg1 sourceMetadata:(id)arg2 error:(id*)arg3 ;
-(void)setMigrationManager:(id)arg1 ;
-(id)migrationManager;
-(void)willPerformMigrationWithManager:(id)arg1 ;
-(void)handleMigrationError:(id)arg1 inManager:(id)arg2 ;
-(void)didPerformMigrationWithManager:(id)arg1 ;
-(id)destinationConfiguration;
-(id)addMigratedStoreToCoordinator:(id)arg1 withType:(id)arg2 configuration:(id)arg3 URL:(id)arg4 options:(id)arg5 error:(id*)arg6 ;
-(void)setSourceOptions:(id)arg1 ;
-(void)setDestinationConfiguration:(id)arg1 ;
-(id)destinationConfigurationForMigration:(id)arg1 sourceMetadata:(id)arg2 error:(id*)arg3 ;
-(void)setResourceBundles:(id)arg1 ;
-(id)sourceConfiguration;
-(void)setSourceConfiguration:(id)arg1 ;
-(void)setDestinationType:(id)arg1 ;
-(id)destinationType;
-(void)setSourceURL:(id)arg1 ;
-(id)sourceURL;
-(id)persistentStoreCoordinator;
-(id)destinationURL;
-(void)setDestinationURL:(id)arg1 ;
-(void)dealloc;
-(id)sourceType;
-(void)setPersistentStoreCoordinator:(id)arg1 ;
@end

