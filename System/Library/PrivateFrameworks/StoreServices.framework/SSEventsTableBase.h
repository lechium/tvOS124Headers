/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSSQLiteDatabase;

@interface SSEventsTableBase : NSObject {

	SSSQLiteDatabase* _database;

}
+(id)databasePath;
-(BOOL)_setupDatabase;
-(id)initWithDatabase:(id)arg1 ;
-(void)performTransactionWithBlock:(/*^block*/id)arg1 ;
-(id)init;
@end

