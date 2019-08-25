/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSXPCConnection.h>

@protocol OS_dispatch_queue;
@class NSLock, NSObject, MFPromise, NSXPCInterface, Protocol;

@interface MSXPCConnection : NSXPCConnection {

	NSLock* _lock;
	NSObject*<OS_dispatch_queue> _queue;
	MFPromise* _connectionPromise;
	NSXPCInterface* _remoteObjectInterface;
	NSXPCInterface* _exportedInterface;
	id _exportedObject;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	long long _resumeCount;
	unsigned _state;
	BOOL _shouldLaunchMobileMail;
	Protocol* _protocol;

}

@property (nonatomic,retain,readonly) Protocol * protocol;              //@synthesize protocol=_protocol - In the implementation block
@property (assign,nonatomic) BOOL shouldLaunchMobileMail;               //@synthesize shouldLaunchMobileMail=_shouldLaunchMobileMail - In the implementation block
-(unsigned)effectiveUserIdentifier;
-(int)auditSessionIdentifier;
-(unsigned)effectiveGroupIdentifier;
-(id)remoteObjectInterface;
-(BOOL)shouldLaunchMobileMail;
-(void)setShouldLaunchMobileMail:(BOOL)arg1 ;
-(void)_invalidatePromise:(id)arg1 ;
-(id)_connectionForPromise:(id)arg1 ;
-(void)_invokeInterruptionHandlerForPromise:(id)arg1 ;
-(/*^block*/id)_nts_wrappedInterruptionHandler;
-(void)_queue_invokeInvalidationHandler;
-(void)_finishPromise:(id)arg1 withConnection:(id)arg2 error:(id)arg3 ;
-(void)_sendInvocation:(id)arg1 remoteInterface:(id)arg2 remoteProxy:(id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(id)_connection;
-(id)exportedObject;
-(id)initWithProtocol:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(id)exportedInterface;
-(void)resume;
-(id)remoteObjectProxy;
-(void)setRemoteObjectInterface:(id)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setExportedObject:(id)arg1 ;
-(void)setExportedInterface:(id)arg1 ;
-(/*^block*/id)interruptionHandler;
-(void)setInterruptionHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)invalidationHandler;
-(void)setInvalidationHandler:(/*^block*/id)arg1 ;
-(void)suspend;
-(int)processIdentifier;
-(Protocol *)protocol;
@end
