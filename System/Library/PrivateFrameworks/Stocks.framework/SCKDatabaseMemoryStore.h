/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SCKDatabaseStore.h>

@class NSDate, CKServerChangeToken, NSMutableDictionary;

@interface SCKDatabaseMemoryStore : NSObject <SCKDatabaseStore> {

	BOOL _cloudBackupEnabled;
	NSDate* _lastSyncDate;
	NSDate* _lastDirtyDate;
	CKServerChangeToken* _serverChangeToken;
	NSMutableDictionary* _zoneStoresByName;

}

@property (nonatomic,copy) NSMutableDictionary * zoneStoresByName;                             //@synthesize zoneStoresByName=_zoneStoresByName - In the implementation block
@property (nonatomic,copy) NSDate * lastSyncDate;                                              //@synthesize lastSyncDate=_lastSyncDate - In the implementation block
@property (nonatomic,copy) NSDate * lastDirtyDate;                                             //@synthesize lastDirtyDate=_lastDirtyDate - In the implementation block
@property (nonatomic,copy) CKServerChangeToken * serverChangeToken;                            //@synthesize serverChangeToken=_serverChangeToken - In the implementation block
@property (assign,getter=isCloudBackupEnabled,nonatomic) BOOL cloudBackupEnabled;              //@synthesize cloudBackupEnabled=_cloudBackupEnabled - In the implementation block
-(void)setCloudBackupEnabled:(BOOL)arg1 ;
-(BOOL)isCloudBackupEnabled;
-(NSDate *)lastSyncDate;
-(NSMutableDictionary *)zoneStoresByName;
-(id)zoneStoreForSchema:(id)arg1 ;
-(NSDate *)lastDirtyDate;
-(void)setLastDirtyDate:(NSDate *)arg1 ;
-(void)setZoneStoresByName:(NSMutableDictionary *)arg1 ;
-(CKServerChangeToken *)serverChangeToken;
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
-(id)init;
-(void)setLastSyncDate:(NSDate *)arg1 ;
@end

