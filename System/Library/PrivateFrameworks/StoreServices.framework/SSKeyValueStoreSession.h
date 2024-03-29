/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSSQLiteDatabase;

@interface SSKeyValueStoreSession : NSObject {

	SSSQLiteDatabase* _database;

}

@property (nonatomic,readonly) SSSQLiteDatabase * database;              //@synthesize database=_database - In the implementation block
-(id)iTunesValueForKey:(id)arg1 usedDomain:(id*)arg2 ;
-(id)copyValueForDomain:(id)arg1 key:(id)arg2 ;
-(id)copyAccountDictionaryForDomain:(id)arg1 ;
-(id)copyDataForDomain:(id)arg1 key:(id)arg2 ;
-(id)existingEntityForDomain:(id)arg1 key:(id)arg2 ;
-(id)initWithDatabase:(id)arg1 ;
-(SSSQLiteDatabase *)database;
-(void)dealloc;
@end

