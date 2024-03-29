/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSString, NSObject;

@interface DACPLogDFile : NSObject {

	NSString* _folder;
	NSString* _baseName;
	NSString* _UUID;
	NSString* _path;
	int _fd;
	NSObject*<OS_dispatch_source> _fileEventDispatchSource;
	BOOL _fileWasDeleted;

}

@property (nonatomic,retain,readonly) NSString * folder;                //@synthesize folder=_folder - In the implementation block
@property (nonatomic,retain,readonly) NSString * baseName;              //@synthesize baseName=_baseName - In the implementation block
@property (nonatomic,retain,readonly) NSString * UUID;                  //@synthesize UUID=_UUID - In the implementation block
-(id)_filePathsMatchingPattern:(id)arg1 ;
-(id)_getLatestMatchingFilePath;
-(void)_beginWatchingFile;
-(id)_startNewFile;
-(void)_closeFileWithFileEventDispatchSource:(id)arg1 ;
-(void)_openFileOutDidCreateNewFile:(BOOL*)arg1 outNewFilePath:(id*)arg2 ;
-(id)initWithFolder:(id)arg1 baseName:(id)arg2 ;
-(BOOL)logData:(id)arg1 outDidCreateNewFile:(BOOL*)arg2 outNewFilePath:(id*)arg3 ;
-(id)startNewFile;
-(void)checkForMaximumFileSize:(long long)arg1 wantsCompressed:(BOOL)arg2 outDidCreateNewFile:(BOOL*)arg3 outNewFilePath:(id*)arg4 ;
-(void)cullFilesMaxFileCount:(long long)arg1 ;
-(NSString *)folder;
-(NSString *)baseName;
-(NSString *)UUID;
@end

