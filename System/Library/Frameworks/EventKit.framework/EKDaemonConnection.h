/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CADClientInterface.h>

@protocol OS_dispatch_queue, CADInterface, EKDaemonConnectionDelegate;
@class NSObject, NSMutableDictionary, NSXPCConnection, CADDatabaseInitializationOptions;

@interface EKDaemonConnection : NSObject <CADClientInterface> {

	NSObject*<OS_dispatch_queue> _connectionLock;
	id<CADInterface> _remoteOperationProxy;
	id<CADInterface> _syncRemoteOperationProxy;
	NSObject*<OS_dispatch_queue> _replyHandlerLock;
	NSMutableDictionary* _cancellableOperations;
	unsigned _nextCancellationToken;
	BOOL _registeredForStartNote;
	BOOL _hasEverConnected;
	NSXPCConnection* _xpcConnection;
	id<EKDaemonConnectionDelegate> _delegate;
	CADDatabaseInitializationOptions* _initializationOptions;

}

@property (assign,nonatomic) BOOL hasEverConnected;                                                 //@synthesize hasEverConnected=_hasEverConnected - In the implementation block
@property (nonatomic,retain,readonly) NSXPCConnection * xpcConnection;                              //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain,readonly) id<CADInterface> CADOperationProxy; 
@property (nonatomic,retain,readonly) id<CADInterface> CADOperationProxySync; 
@property (__weak) id<EKDaemonConnectionDelegate> delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CADDatabaseInitializationOptions * initializationOptions;              //@synthesize initializationOptions=_initializationOptions - In the implementation block
-(id<CADInterface>)CADOperationProxySync;
-(unsigned)addCancellableRemoteOperation:(id)arg1 ;
-(void)removeCancellableRemoteOperation:(unsigned)arg1 ;
-(id<CADInterface>)CADOperationProxy;
-(BOOL)_connectToServer;
-(CADDatabaseInitializationOptions *)initializationOptions;
-(void)setInitializationOptions:(CADDatabaseInitializationOptions *)arg1 ;
-(void)setHasEverConnected:(BOOL)arg1 ;
-(void)_createConnectionAndOperationProxyIfNeeded;
-(void)_finishAllRepliesOnServerDeath;
-(void)CADClientReceiveOccurrenceCacheSearchResults:(id)arg1 forSearchToken:(unsigned)arg2 finished:(BOOL)arg3 ;
-(void)_daemonRestarted;
-(void)cancelRemoteOperation:(unsigned)arg1 ;
-(BOOL)hasEverConnected;
-(NSXPCConnection *)xpcConnection;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<EKDaemonConnectionDelegate>)arg1 ;
-(id<EKDaemonConnectionDelegate>)delegate;
-(void)disconnect;
@end

