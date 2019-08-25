/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CMKNebulaDaemonClientProtocol.h>
#import <libobjc.A.dylib/CMKNebulaDaemonProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSString;

@interface CMKNebulaDaemonProxyManager : NSObject <CMKNebulaDaemonClientProtocol, CMKNebulaDaemonProtocol> {

	NSObject*<OS_dispatch_queue> __queue;
	NSXPCConnection* __connection;
	long long __connectionCount;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _queue;              //@synthesize _queue=__queue - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * _connection;                    //@synthesize _connection=__connection - In the implementation block
@property (nonatomic,readonly) long long _connectionCount;                       //@synthesize _connectionCount=__connectionCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_daemonProtocolInterface;
+(id)_clientProtocolInterface;
+(id)sharedInstance;
-(void)updatePendingWorkFromDiskForceEndLastSession:(BOOL)arg1 ;
-(void)startTimelapseWithUUID:(id)arg1 ;
-(void)resumeTimelapseWithUUID:(id)arg1 ;
-(void)updateTimelapseWithUUID:(id)arg1 ;
-(void)finishCaptureForTimelapseWithUUID:(id)arg1 ;
-(void)stopTimelapseWithUUID:(id)arg1 ;
-(void)_ensureConnectionToDaemon;
-(void)_closeConnectionToDaemon;
-(void)performIrisCrashRecovery;
-(void)forceStopTimelapseCaptureWithReasons:(long long)arg1 ;
-(void)_getProxyForExecutingBlock:(/*^block*/id)arg1 ;
-(void)ensureConnectionToDaemon;
-(void)closeConnectionToDaemon;
-(void)performCrashRecoveryIfNeededForceEndLastTimelapseSession:(BOOL)arg1 ;
-(long long)_connectionCount;
-(NSXPCConnection *)_connection;
-(id)init;
-(NSObject*<OS_dispatch_queue>)_queue;
@end

