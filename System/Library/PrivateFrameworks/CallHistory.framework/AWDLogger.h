/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CHLogger.h>

@class AWDServerConnection;

@interface AWDLogger : CHLogger {

	AWDServerConnection* _awdServer;

}

@property (nonatomic,retain) AWDServerConnection * awdServer;              //@synthesize awdServer=_awdServer - In the implementation block
+(id)instance;
-(AWDServerConnection *)awdServer;
-(void)submitMetric:(id)arg1 withId:(unsigned)arg2 ;
-(void)commCenterMigrationResult:(BOOL)arg1 withMigratedCallCount:(unsigned long long)arg2 ;
-(void)databaseMigrationResult:(BOOL)arg1 oldVersion:(long long)arg2 newVersion:(long long)arg3 ;
-(void)databaseSaveError:(long long)arg1 withTableName:(id)arg2 ;
-(void)deleteAll:(unsigned long long)arg1 ;
-(void)callAddedWithNilUuid:(unsigned long long)arg1 withCallStatus:(unsigned long long)arg2 ;
-(void)entitlementRejection:(int)arg1 ;
-(void)syncSuccess:(unsigned long long)arg1 withDownloadRecordCount:(unsigned long long)arg2 ;
-(void)syncFailure:(unsigned)arg1 ;
-(void)uninitializedDatabaseSave;
-(void)bootstrapGizmo:(unsigned long long)arg1 ;
-(void)gizmoDatabaseMigrationFailure;
-(void)setAwdServer:(AWDServerConnection *)arg1 ;
-(id)init;
@end

