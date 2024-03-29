/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSURL;

@interface AFUIDebugLogManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (getter=_queue,nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (getter=_baseLogDirectoryURL,nonatomic,copy,readonly) NSURL * baseLogDirectoryURL; 
@property (getter=_siriLogDirectoryURL,nonatomic,copy,readonly) NSURL * siriLogDirectoryURL; 
+(int)executeSystemCommand:(id)arg1 stdoutTo:(id)arg2 ;
-(id)_archiveLogsInDirectoryAtURL:(id)arg1 matchingPatterns:(id)arg2 archiveName:(id)arg3 error:(id*)arg4 ;
-(id)_baseLogDirectoryURL;
-(id)_captureLogsInDirectoryAtURL:(id)arg1 matchingPattern:(id)arg2 withMimeType:(id)arg3 attemptCompression:(BOOL)arg4 limit:(long long)arg5 error:(id*)arg6 ;
-(id)_siriLogDirectoryURL;
-(void)_captureLogsAtURL:(id)arg1 logName:(id)arg2 sinceTime:(double)arg3 completion:(/*^block*/id)arg4 ;
-(id)_siriCardLogDirectoryURL;
-(void)_captureLogsAtURL:(id)arg1 logName:(id)arg2 sinceTime:(double)arg3 pattern:(id)arg4 mimeType:(id)arg5 completion:(/*^block*/id)arg6 ;
-(id)_uniqueTemporaryFileURL;
-(id)_contentsOfDirectoryAtURL:(id)arg1 matchingPattern:(id)arg2 sortedByDateWithResourceKey:(id)arg3 error:(id*)arg4 ;
-(id)_archiveLogDirectoryAtURL:(id)arg1 name:(id)arg2 error:(id*)arg3 ;
-(void)captureViewHierarchyLogWithDefaultViewHierarchy:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)captureBasebandLogWithCompletion:(/*^block*/id)arg1 ;
-(void)captureLocationLogWithCompletion:(/*^block*/id)arg1 ;
-(void)captureSiriCFNetworkLogsWithCompletion:(/*^block*/id)arg1 ;
-(void)captureSiriCrashLogsWithCompletion:(/*^block*/id)arg1 ;
-(void)captureSiriLogsSinceTime:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)captureCardLogsSinceTime:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)captureSiriSpeechLogsWithCompletion:(/*^block*/id)arg1 ;
-(void)captureSiriVoiceTriggerLogsWithCompletion:(/*^block*/id)arg1 ;
-(void)captureVoiceServicesLogsSinceTime:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)captureAVVoiceControllerLogsSinceTime:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)captureSystemLogSinceTime:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)captureWiFiLogWithCompletion:(/*^block*/id)arg1 ;
-(void)capturePreviousConversationWithCompletion:(/*^block*/id)arg1 ;
-(id)_contentsOfDirectoryAtURL:(id)arg1 matchingPattern:(id)arg2 includingPropertiesForKeys:(id)arg3 error:(id*)arg4 ;
-(id)init;
-(id)_queue;
@end

