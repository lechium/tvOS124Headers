/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SCKZoneStore.h>

@class NSDate, CKServerChangeToken, NSArray;

@interface SCKZoneMemoryStore : NSObject <SCKZoneStore> {

	NSDate* _lastSyncDate;
	NSDate* _lastDirtyDate;
	CKServerChangeToken* _serverChangeToken;
	NSArray* _serverRecords;
	NSArray* _pendingCommands;

}

@property (nonatomic,copy) NSDate * lastSyncDate;                                //@synthesize lastSyncDate=_lastSyncDate - In the implementation block
@property (nonatomic,copy) NSDate * lastDirtyDate;                               //@synthesize lastDirtyDate=_lastDirtyDate - In the implementation block
@property (nonatomic,copy) CKServerChangeToken * serverChangeToken;              //@synthesize serverChangeToken=_serverChangeToken - In the implementation block
@property (nonatomic,copy) NSArray * serverRecords;                              //@synthesize serverRecords=_serverRecords - In the implementation block
@property (nonatomic,copy) NSArray * pendingCommands;                            //@synthesize pendingCommands=_pendingCommands - In the implementation block
-(NSDate *)lastSyncDate;
-(NSDate *)lastDirtyDate;
-(void)setLastDirtyDate:(NSDate *)arg1 ;
-(NSArray *)serverRecords;
-(NSArray *)pendingCommands;
-(void)applyServerRecordsDiff:(id)arg1 ;
-(void)addPendingCommands:(id)arg1 ;
-(void)clearPendingCommandsUpToCount:(unsigned long long)arg1 ;
-(void)setServerRecords:(NSArray *)arg1 ;
-(void)setPendingCommands:(NSArray *)arg1 ;
-(CKServerChangeToken *)serverChangeToken;
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
-(id)init;
-(void)setLastSyncDate:(NSDate *)arg1 ;
@end

