/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, ACDDatabase;

@interface ACDDatabaseBackupActivity : NSObject {

	BOOL _xpcActivityPending;
	NSObject*<OS_xpc_object> _activityExecutionCriteria;
	NSObject*<OS_dispatch_queue> _queue;
	ACDDatabase* _database;

}

@property (nonatomic,readonly) ACDDatabase * database;              //@synthesize database=_database - In the implementation block
+(id)new;
-(void)registerActivityIfNeeded;
-(void)_registerActivityIfNeededSchedulingBackup:(BOOL)arg1 ;
-(void)_registerActivitySchedulingBackup:(BOOL)arg1 ;
-(void)scheduleBackup;
-(void)scheduleBackupIfNonexistent;
-(id)initWithDatabase:(id)arg1 ;
-(id)activityCriteria;
-(ACDDatabase *)database;
-(id)init;
@end

