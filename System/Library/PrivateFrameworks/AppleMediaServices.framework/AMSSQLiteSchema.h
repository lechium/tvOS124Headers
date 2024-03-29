/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AMSSQLiteConnection;

@interface AMSSQLiteSchema : NSObject {

	AMSSQLiteConnection* _connection;

}

@property (readonly) long long currentUserVersion; 
-(long long)currentUserVersion;
-(BOOL)tableExists:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(void)_setUserVersion:(long long)arg1 ;
-(BOOL)column:(id)arg1 existsInTable:(id)arg2 ;
-(BOOL)migrateToVersion:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

