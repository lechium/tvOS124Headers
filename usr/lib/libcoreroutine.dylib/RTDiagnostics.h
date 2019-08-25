/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTService.h>

@class RTDefaultsManager, RTPlatform, NSMutableArray;

@interface RTDiagnostics : RTService {

	RTDefaultsManager* _defaultsManager;
	RTPlatform* _platform;
	NSMutableArray* _diagnosticProviders;

}
+(id)createDiagnosticsURLWithError:(id*)arg1 ;
+(id)crashReports;
+(BOOL)collectArchiveSinceDate:(id)arg1 path:(id)arg2 error:(id*)arg3 ;
+(id)stringFromDateWithFormat;
+(BOOL)createArchiveSourceURL:(id)arg1 destinationURL:(id)arg2 error:(id*)arg3 ;
+(void)rolloverSnapshots;
-(void)_shutdown;
-(void)fetchPathToDiagnosticFilesWithHandler:(/*^block*/id)arg1 ;
-(id)initWithDefaultsManager:(id)arg1 platform:(id)arg2 ;
-(void)logProcessDiagnosticInformation;
-(void)addDiagnosticProvider:(id)arg1 ;
-(void)takeSnapshotSinceDate:(id)arg1 description:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchPathToBackupWithHandler:(/*^block*/id)arg1 ;
-(id)_collectDiagnosticFilesWithError:(id*)arg1 ;
-(void)_fetchPathToDiagnosticFilesWithHandler:(/*^block*/id)arg1 ;
-(id)_collectBackupWithError:(id*)arg1 ;
-(void)_fetchPathToBackupWithHandler:(/*^block*/id)arg1 ;
-(id)init;
@end

