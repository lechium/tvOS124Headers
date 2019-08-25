/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSXPCConnection;

@interface BYBuddyDaemonGeneralClient : NSObject {

	NSLock* _connectionLock;
	NSXPCConnection* _connection;

}
-(id)_daemonConnection;
-(BOOL)setupAssistantNeedsToRun;
-(void)ensureSilentLoginUpgrade;
-(id)backupMetadata;
-(void)observeFinishSetupTriggers;
-(void)performSilentICDPUpgrade;
-(void)deferDataMigratorExit;
-(void)cancelDataMigratorDeferredExit;
-(id)init;
@end
