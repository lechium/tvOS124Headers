/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IDSHashPersistence.framework/IDSHashPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface IDSMessageHashStore : NSObject {

	NSObject*<OS_dispatch_queue> _ivarQueue;
	NSObject*<OS_dispatch_source> _databaseCloseTimer;
	double _databaseLastUpdateTime;
	unsigned long long __initialProcessTime;
	unsigned long long __initialServerTime;

}

@property (assign,nonatomic) unsigned long long _initialProcessTime;              //@synthesize _initialProcessTime=__initialProcessTime - In the implementation block
@property (assign,nonatomic) unsigned long long _initialServerTime;               //@synthesize _initialServerTime=__initialServerTime - In the implementation block
+(id)sharedInstance;
-(void)closeDatabase;
-(unsigned)dataProtectionClass;
-(void)_storeInitialServerTime;
-(void)performBlock:(/*^block*/id)arg1 waitUntilDone:(BOOL)arg2 ;
-(void)performBlock:(/*^block*/id)arg1 afterDelay:(double)arg2 ;
-(void)systemDidEnterMemoryPressure;
-(void)systemDidLeaveMemoryPressure;
-(void)_clearDatabaseCloseTimerOnIvarQueue;
-(void)__closeDatabaseOnIvarQueue;
-(void)_setDatabaseCloseTimerOnIvarQueue;
-(void)_performInitialHousekeeping;
-(void)_startCleanupTimer;
-(unsigned long long)_currentLocalTime;
-(unsigned long long)_initialProcessTime;
-(unsigned long long)_initialServerTime;
-(void)_runCleanup;
-(BOOL)containsMessageHash:(id)arg1 ;
-(void)addMessageHash:(id)arg1 ;
-(void)updateCreationDateForHash:(id)arg1 ;
-(void)set_initialProcessTime:(unsigned long long)arg1 ;
-(void)set_initialServerTime:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)performBlock:(/*^block*/id)arg1 ;
@end
