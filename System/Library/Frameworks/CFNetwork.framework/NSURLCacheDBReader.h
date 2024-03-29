/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSLock, NSMutableSet, NSString;

@interface NSURLCacheDBReader : NSObject {

	sqlite3_stmtRef _sqlSelectStmt;
	sqlite3_stmtRef _sqlSelectTimeStmt;
	sqlite3Ref _dbReadConnection;
	NSLock* _dbReadConnectionLock;
	long long _schemaVersion;
	NSLock* _timeRelativeLookupLock;
	NSMutableSet* recentTimeStampLookups;
	unsigned char _performTimeRelativeLookups;
	NSString* _dbPathDirectory;
	NSString* _dbPathFile;
	NSMutableSet* _recentTimeStampLookups;
	BOOL _isDBOpen;

}

@property (assign) BOOL isDBOpen;                                         //@synthesize isDBOpen=_isDBOpen - In the implementation block
@property (retain) NSString * dbPathDirectory;                            //@synthesize dbPathDirectory=_dbPathDirectory - In the implementation block
@property (retain) NSString * dbPathFile;                                 //@synthesize dbPathFile=_dbPathFile - In the implementation block
@property (retain) NSMutableSet * recentTimeStampLookups;                 //@synthesize recentTimeStampLookups=_recentTimeStampLookups - In the implementation block
@property (assign) unsigned char performTimeRelativeLookups;              //@synthesize performTimeRelativeLookups=_performTimeRelativeLookups - In the implementation block
-(id)initWithDBPath:(id)arg1 maxSize:(long long)arg2 ;
-(BOOL)openAndPrepareReadCacheDB;
-(CFCachedURLResponse*)createCachedResponseForKey:(id)arg1 cacheDataPath:(id*)arg2 cacheDataFile:(id*)arg3 caller:(CFURLCache*)arg4 ;
-(NSString *)dbPathDirectory;
-(void)setRecentTimeStampLookups:(NSMutableSet *)arg1 ;
-(void)setPerformTimeRelativeLookups:(unsigned char)arg1 ;
-(BOOL)_finalizeAllDBStatements;
-(void)cleanupAndShutdown_Lock;
-(BOOL)_openDBReadConnections;
-(BOOL)_prepareDBSelectStatements;
-(BOOL)isDBOpen;
-(void)setIsDBOpen:(BOOL)arg1 ;
-(void)_closeDBReadConnections;
-(BOOL)_finalizeDBSelectStatements;
-(void)performTimeRelativeLookupWithInitialTime:(id)arg1 caller:(CFURLCache*)arg2 ;
-(NSString *)dbPathFile;
-(BOOL)_prepareDBStatements;
-(int)stepSQLStatement:(sqlite3_stmtRef)arg1 toCompletionWithRetry:(long long)arg2 ;
-(int)execSQLStatement:(const char*)arg1 onConnection:(sqlite3Ref)arg2 toCompletionWithRetry:(long long)arg3 writeLockHeld:(BOOL)arg4 ;
-(id)createCachedResponseDictForTransmissionWithKey:(id)arg1 objectVersion:(long long)arg2 storagePolicy:(int)arg3 responseObjectBytes:(char*)arg4 responseObjectBytesLength:(int)arg5 protoProps:(char*)arg6 protoPropsLength:(int)arg7 receiverDataBytes:(char*)arg8 receiverDataLength:(int)arg9 requestObjectBytes:(char*)arg10 requestObjectBytesLength:(int)arg11 userInfoBytes:(const char*)arg12 useInfoLength:(int)arg13 isDataOnFS:(BOOL)arg14 cacheDirPath:(id)arg15 cacheFileName:(id)arg16 ;
-(NSMutableSet *)recentTimeStampLookups;
-(unsigned char)performTimeRelativeLookups;
-(void)setDbPathDirectory:(NSString *)arg1 ;
-(void)setDbPathFile:(NSString *)arg1 ;
-(void)_closeDB;
-(id)init;
-(void)dealloc;
@end

