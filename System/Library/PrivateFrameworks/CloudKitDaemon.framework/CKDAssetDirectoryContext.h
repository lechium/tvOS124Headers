/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CKDAssetDirectoryContext : NSObject {

	NSString* _mmcsWorkingDirectory;
	NSString* _assetDbPath;
	NSString* _fileStagingPath;
	NSString* _fileDownloadPath;

}

@property (nonatomic,retain) NSString * mmcsWorkingDirectory;              //@synthesize mmcsWorkingDirectory=_mmcsWorkingDirectory - In the implementation block
@property (nonatomic,retain) NSString * assetDbPath;                       //@synthesize assetDbPath=_assetDbPath - In the implementation block
@property (nonatomic,retain) NSString * fileStagingPath;                   //@synthesize fileStagingPath=_fileStagingPath - In the implementation block
@property (nonatomic,retain) NSString * fileDownloadPath;                  //@synthesize fileDownloadPath=_fileDownloadPath - In the implementation block
-(void)setMmcsWorkingDirectory:(NSString *)arg1 ;
-(void)setAssetDbPath:(NSString *)arg1 ;
-(void)setFileStagingPath:(NSString *)arg1 ;
-(void)setFileDownloadPath:(NSString *)arg1 ;
-(NSString *)mmcsWorkingDirectory;
-(NSString *)assetDbPath;
-(NSString *)fileDownloadPath;
-(NSString *)fileStagingPath;
@end

