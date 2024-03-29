/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccountsDaemon/AccountsDaemon-Structs.h>
@class NSString, NSManagedObjectContext, NSPersistentStore;

@interface ACDDatabase : NSObject {

	NSString* _path;
	NSManagedObjectContext* _context;
	NSPersistentStore* _store;
	id _contextDidSaveNotificationObserver;

}

@property (nonatomic,readonly) NSString * path;                                            //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext; 
@property (assign,nonatomic) long long version; 
@property (assign,nonatomic) long long keychainVersion; 
+(CFStringRef)_copyRootPath;
+(id)_sharedPersistentCoordinatorForStoreAtPath:(id)arg1 ;
+(id)_optionsForOpeningPersistentStore;
+(BOOL)_addPersistentStoreWithURL:(id)arg1 toStoreCoordinator:(id)arg2 withOptions:(id)arg3 error:(id*)arg4 ;
+(BOOL)_isUnrecoverableDatabaseError:(id)arg1 ;
+(void)_replacePersistentStoreAtURL:(id)arg1 withCleanStoreForCoordinator:(id)arg2 ;
+(void)_removePersistentStoreAtURL:(id)arg1 forStoreCoordinator:(id)arg2 ;
+(void)_resetPeristentStoreCoordinator;
+(id)defaultPath;
+(id)_managedObjectModel;
-(id)fetchObjectsForEntityNamed:(id)arg1 ;
-(id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 ;
-(unsigned long long)countOfEntityNamed:(id)arg1 withPredicate:(id)arg2 ;
-(id)existingObjectWithURI:(id)arg1 ;
-(id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 sortDescriptor:(id)arg3 ;
-(void)deleteAccountPropertyWithKey:(id)arg1 owner:(id)arg2 ;
-(void)setAccountPropertyWithKey:(id)arg1 value:(id)arg2 owner:(id)arg3 ;
-(BOOL)saveWithError:(id*)arg1 rollbackOnFailure:(BOOL)arg2 ;
-(id)managedObjectIDForURI:(id)arg1 ;
-(id)objectForObjectURI:(id)arg1 ;
-(long long)keychainVersion;
-(void)setKeychainVersion:(long long)arg1 ;
-(id)initWithDefaultPath;
-(void)_setupManagedObjectContext;
-(void)_handleManagedObjectContextDidSaveNotification:(id)arg1 ;
-(id)_accountPropertyWithKey:(id)arg1 owner:(id)arg2 ;
-(id)_localBackupDirectoryPath;
-(id)_localBackupDirectoryURL;
-(id)initWithTimeMachineHomeFolderPath:(id)arg1 ;
-(id)_localBackupStorePath;
-(BOOL)_createLocalBackupCopy:(id*)arg1 ;
-(id)_store;
-(BOOL)_databaseFileExists;
-(BOOL)saveWithError:(id*)arg1 ;
-(void)dealloc;
-(void)setVersion:(long long)arg1 ;
-(long long)version;
-(NSString *)path;
-(NSManagedObjectContext *)managedObjectContext;
-(id)initWithPath:(id)arg1 ;
@end

