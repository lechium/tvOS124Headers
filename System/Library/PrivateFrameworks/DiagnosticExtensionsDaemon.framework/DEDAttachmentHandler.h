/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
@class NSObject;

@interface DEDAttachmentHandler : NSObject {

	BOOL _compressOnAttach;
	NSObject*<OS_os_log> _log;

}

@property (retain) NSObject*<OS_os_log> log;              //@synthesize log=_log - In the implementation block
@property (assign) BOOL compressOnAttach;                 //@synthesize compressOnAttach=_compressOnAttach - In the implementation block
-(id)directoryForBugSession:(id)arg1 ;
-(void)setCompressOnAttach:(BOOL)arg1 ;
-(id)dedDirectory;
-(id)_processAttachments:(id)arg1 forSession:(id)arg2 extension:(id)arg3 rootDir:(id)arg4 ;
-(id)directoryForBugSession:(id)arg1 extension:(id)arg2 rootDirectory:(id)arg3 createIfNeeded:(BOOL)arg4 ;
-(BOOL)compressOnAttach;
-(id)_createEmptyMessageFileForDE:(id)arg1 extensionName:(id)arg2 forSession:(id)arg3 device:(id)arg4 withRootDir:(id)arg5 ;
-(id)processAttachments:(id)arg1 forSession:(id)arg2 extension:(id)arg3 ;
-(void)removeDEFiles:(id)arg1 inSession:(id)arg2 ;
-(id)collectedGroupsForSession:(id)arg1 matchingExtensions:(id)arg2 ;
-(id)createEmptyMessageFileForDE:(id)arg1 extensionName:(id)arg2 forSession:(id)arg3 device:(id)arg4 ;
-(void)removeDirectoryForBugSession:(id)arg1 ;
-(unsigned long long)directorySizeForBugSession:(id)arg1 ;
-(id)identifierForAdoptingFile:(id)arg1 ;
-(id)directoryForBugSession:(id)arg1 rootDirectory:(id)arg2 createIfNeeded:(BOOL)arg3 ;
-(id)directoryForBugSession:(id)arg1 extension:(id)arg2 rootDirectory:(id)arg3 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(id)init;
-(NSObject*<OS_os_log>)log;
@end

