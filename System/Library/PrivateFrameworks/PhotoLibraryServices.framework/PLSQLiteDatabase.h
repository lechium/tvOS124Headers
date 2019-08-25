/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLSQLiteDatabase : NSObject {

	sqlite3Ref _database;

}
+(sqlite3Ref)_openSQLiteDatabaseAtPath:(const char*)arg1 ;
+(id)openDatabaseAtPath:(id)arg1 ;
-(id)initWithOpenedSQLite3Database:(sqlite3Ref)arg1 ;
-(BOOL)_execute:(id)arg1 ;
-(BOOL)prepareStatement:(id)arg1 andStepThroughResultsWithBlock:(/*^block*/id)arg2 ;
-(sqlite3_stmtRef)_prepareStatement:(id)arg1 ;
-(BOOL)beginDeferredTransaction;
-(BOOL)beginExclusiveTransaction;
-(BOOL)rollbackTransaction;
-(BOOL)prepareAndEvaluateStatement:(id)arg1 ;
-(BOOL)close;
-(BOOL)commitTransaction;
@end

