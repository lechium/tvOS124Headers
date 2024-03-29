/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DEDWorkerProtocol.h>
#import <libobjc.A.dylib/DEDClientProtocol.h>

@protocol OS_os_log;
@class NSString, SFSession, DEDSharingConnection, NSObject;

@interface DEDSharingOutbound : NSObject <DEDWorkerProtocol, DEDClientProtocol> {

	NSString* _identifier;
	SFSession* _session;
	DEDSharingConnection* _connection;
	NSObject*<OS_os_log> _log;

}

@property (retain) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (retain) SFSession * session;                             //@synthesize session=_session - In the implementation block
@property (__weak) DEDSharingConnection * connection;               //@synthesize connection=_connection - In the implementation block
@property (retain) NSObject*<OS_os_log> log;                        //@synthesize log=_log - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)transportType;
-(void)setSession:(SFSession *)arg1 ;
-(SFSession *)session;
-(void)pingSession:(id)arg1 ;
-(void)listAvailableExtensionsForSession:(id)arg1 ;
-(void)getSessionStatusWithSession:(id)arg1 ;
-(void)syncSessionStatusWithSession:(id)arg1 ;
-(void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 session:(id)arg3 ;
-(void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 deferRunUntil:(id)arg3 session:(id)arg4 ;
-(void)scheduleNotificationForSession:(id)arg1 ;
-(void)cancelNotificationForSession:(id)arg1 ;
-(void)pongSession:(id)arg1 ;
-(void)deviceSupportsDiagnosticExtensions:(id)arg1 session:(id)arg2 ;
-(void)adoptFiles:(id)arg1 forSession:(id)arg2 ;
-(void)didAdoptFilesWithError:(id)arg1 forSession:(id)arg2 ;
-(void)uploadProgress:(unsigned long long)arg1 total:(unsigned long long)arg2 session:(id)arg3 ;
-(void)commitSession:(id)arg1 ;
-(void)didCommitSession:(id)arg1 ;
-(void)finishedDiagnosticWithIdentifier:(id)arg1 result:(id)arg2 session:(id)arg3 ;
-(void)hasCollected:(id)arg1 isCollecting:(id)arg2 withIdentifiers:(id)arg3 inSession:(id)arg4 ;
-(void)hasCollected:(id)arg1 isCollecting:(id)arg2 inSession:(id)arg3 ;
-(void)didCancelSession:(id)arg1 ;
-(void)terminateExtension:(id)arg1 info:(id)arg2 session:(id)arg3 ;
-(id)initWithID:(id)arg1 withSFSession:(id)arg2 connection:(id)arg3 ;
-(id)basePayloadForCommand:(id)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)cancelSession:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSObject*<OS_os_log>)log;
-(DEDSharingConnection *)connection;
-(void)setConnection:(DEDSharingConnection *)arg1 ;
@end

