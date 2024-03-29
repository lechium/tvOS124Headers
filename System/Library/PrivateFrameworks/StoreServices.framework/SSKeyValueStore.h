/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSXPCConnection, SSKeyValueStoreDatabase;

@interface SSKeyValueStore : NSObject {

	SSXPCConnection* _connection;
	SSKeyValueStoreDatabase* _database;
	BOOL _useLocalRead;
	BOOL _useLocalWrite;

}

@property (getter=isLocalReadable,readonly) BOOL localReadable; 
@property (getter=isLocalWritable,readonly) BOOL localWritable; 
+(BOOL)isLocalReadable;
-(void)getValueForDomain:(id)arg1 key:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)accountDictionaries;
-(id)iTunesValueForKey:(id)arg1 usedDomain:(id*)arg2 ;
-(void)setValue:(id)arg1 forDomain:(id)arg2 key:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)removeAccountFromDomain:(id)arg1 ;
-(void)setValue:(id)arg1 forDomain:(id)arg2 key:(id)arg3 ;
-(void)getValuesForDomain:(id)arg1 keys:(const id*)arg2 count:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(BOOL)isLocalReadable;
-(void)_loadDatabaseIfNecessary;
-(void)readUsingSessionBlock:(/*^block*/id)arg1 ;
-(void)removeAllValuesForDomain:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)modifyUsingTransactionBlock:(/*^block*/id)arg1 ;
-(void)setValuesWithDictionary:(id)arg1 forDomain:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)removeAllValuesForDomain:(id)arg1 ;
-(void)removeAllValuesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setValuesWithDictionary:(id)arg1 forDomain:(id)arg2 ;
-(void)removeAccountDictionaries;
-(id)copyAccounts;
-(BOOL)isLocalWritable;
-(id)init;
-(void)dealloc;
@end

