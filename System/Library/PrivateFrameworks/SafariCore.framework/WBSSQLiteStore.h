/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSSQLiteStoreDelegate, OS_dispatch_queue;
@class NSURL, WBSSQLiteDatabase, NSObject;

@interface WBSSQLiteStore : NSObject {

	long long _databaseLockingPolicy;
	long long _protectionType;
	int _databaseCoordinationLockFileDescriptor;
	BOOL _fallBackToMemoryStoreIfError;
	NSURL* _databaseURL;
	id<WBSSQLiteStoreDelegate> _delegate;
	WBSSQLiteDatabase* _database;
	NSObject*<OS_dispatch_queue> _databaseQueue;

}

@property (nonatomic,readonly) WBSSQLiteDatabase * database;                            //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> databaseQueue;              //@synthesize databaseQueue=_databaseQueue - In the implementation block
@property (nonatomic,readonly) NSURL * databaseURL;                                     //@synthesize databaseURL=_databaseURL - In the implementation block
@property (assign,nonatomic,__weak) id<WBSSQLiteStoreDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isOpen; 
-(void)_closeDatabase;
-(id)initWithURL:(id)arg1 protectionType:(long long)arg2 ;
-(BOOL)_isDatabaseLocked;
-(void)_releaseDatabaseCoordinationLock;
-(void)_openDatabase:(id)arg1 createIfNeeded:(BOOL)arg2 checkIntegrity:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_handleOpenFailureWithStatus:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_acquireDatabaseCoordinationLockForDatabaseURL:(id)arg1 ;
-(BOOL)_confirmDatabaseIntegrityIsOK;
-(int)_migrateToCurrentSchemaVersionIfNecessary;
-(void)_databaseWillClose;
-(int)_currentSchemaVersion;
-(int)_createFreshDatabaseSchema;
-(int)_setDatabaseSchemaVersion:(int)arg1 ;
-(int)_migrateToSchemaVersion:(int)arg1 ;
-(id)_databaseCoordinationLockURLForDatabaseURL:(id)arg1 ;
-(void)openAndCheckIntegrity:(BOOL)arg1 createIfNeeded:(BOOL)arg2 fallBackToMemoryStoreIfError:(BOOL)arg3 lockingPolicy:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)savePendingChangesBeforeTermination;
-(NSURL *)databaseURL;
-(BOOL)isOpen;
-(WBSSQLiteDatabase *)database;
-(NSObject*<OS_dispatch_queue>)databaseQueue;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<WBSSQLiteStoreDelegate>)arg1 ;
-(id<WBSSQLiteStoreDelegate>)delegate;
-(id)initWithURL:(id)arg1 ;
-(void)closeWithCompletionHandler:(/*^block*/id)arg1 ;
@end

