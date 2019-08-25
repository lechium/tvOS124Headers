/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, ML3DatabaseConnectionPoolDelegate;
#import <MusicLibrary/MusicLibrary-Structs.h>
@class _ML3DatabaseConnectionSubPool, NSMutableDictionary, NSObject, NSUUID, NSString;

@interface ML3DatabaseConnectionPool : NSObject {

	_ML3DatabaseConnectionSubPool* _readersSubPool;
	_ML3DatabaseConnectionSubPool* _writersSubPool;
	NSMutableDictionary* _identifiersConnectionsMap;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSUUID* _poolStorageKey;
	int _connectionsProfilingLevel;
	BOOL _useDistantWriterConnections;
	opaque_pthread_cond_t _poolLockCondition;
	opaque_pthread_mutex_t _poolLockMutex;
	BOOL _locked;
	NSString* _databasePath;
	id<ML3DatabaseConnectionPoolDelegate> _delegate;
	unsigned long long _maxReaders;
	unsigned long long _maxWriters;
	unsigned long long _connectionsJournalingMode;

}

@property (nonatomic,readonly) NSString * databasePath;                                          //@synthesize databasePath=_databasePath - In the implementation block
@property (assign,nonatomic,__weak) id<ML3DatabaseConnectionPoolDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long maxReaders;                                    //@synthesize maxReaders=_maxReaders - In the implementation block
@property (nonatomic,readonly) unsigned long long maxWriters;                                    //@synthesize maxWriters=_maxWriters - In the implementation block
@property (assign,nonatomic) unsigned long long connectionsJournalingMode;                       //@synthesize connectionsJournalingMode=_connectionsJournalingMode - In the implementation block
@property (assign,nonatomic) int connectionsProfilingLevel; 
@property (assign,nonatomic) BOOL useDistantWriterConnections; 
@property (getter=isLocked,nonatomic,readonly) BOOL locked;                                      //@synthesize locked=_locked - In the implementation block
@property (readonly) BOOL isCurrentThreadConnectionInTransaction; 
-(NSString *)databasePath;
-(id)initWithDatabasePath:(id)arg1 maxReaders:(unsigned long long)arg2 maxWriters:(unsigned long long)arg3 ;
-(void)_closeAllConnectionsAndWaitForBusyConnections:(BOOL)arg1 ;
-(BOOL)isCurrentThreadConnectionInTransaction;
-(void)setConnectionsProfilingLevel:(int)arg1 ;
-(id)_connectionForWriting:(BOOL)arg1 useThreadConnection:(BOOL)arg2 storeThreadLocalConnection:(BOOL)arg3 ;
-(void)setConnectionsJournalingMode:(unsigned long long)arg1 ;
-(void)closeAllConnections;
-(id)_localConnectionForThread:(id)arg1 ;
-(void)_setLocalConnection:(id)arg1 forThread:(id)arg2 ;
-(void)_setConnection:(id)arg1 forIdentifier:(id)arg2 ;
-(id)_connectionForIdentifier:(id)arg1 ;
-(id)initWithDatabasePath:(id)arg1 maxReaders:(unsigned long long)arg2 ;
-(int)connectionsProfilingLevel;
-(BOOL)useDistantWriterConnections;
-(void)setUseDistantWriterConnections:(BOOL)arg1 ;
-(id)_generateDiagnostic;
-(unsigned long long)maxReaders;
-(unsigned long long)maxWriters;
-(unsigned long long)connectionsJournalingMode;
-(void)checkInConnection:(id)arg1 ;
-(id)writerConnection;
-(id)readerConnection;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<ML3DatabaseConnectionPoolDelegate>)arg1 ;
-(id<ML3DatabaseConnectionPoolDelegate>)delegate;
-(BOOL)isLocked;
-(void)lock;
-(void)unlock;
@end

