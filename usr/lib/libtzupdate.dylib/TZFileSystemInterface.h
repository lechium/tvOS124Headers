/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libtzupdate.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, TZVersionInfo;

@interface TZFileSystemInterface : NSObject {

	NSURL* _systemICUSchemaVersionURL;
	NSString* _systemICUTZSchemaVersion;
	TZVersionInfo* _latestVersionInfo;
	TZVersionInfo* _currentVersionInfo;
	TZVersionInfo* _lastInstalledVersionInfo;
	TZVersionInfo* _systemVersionInfo;
	NSURL* _cachedTZDataLocation;
	NSURL* _latestTZDataLink;
	NSURL* _dataExpansionVersionDirectory;
	NSURL* _latestLinkDestinationAtStartup;
	NSURL* _temporaryDirectory;

}

@property (readonly) NSURL * latestTZLinkURL; 
@property (readonly) NSURL * currentZoneinfoLinkURL; 
@property (readonly) NSURL * latestLinkDestinationAtStartup;                //@synthesize latestLinkDestinationAtStartup=_latestLinkDestinationAtStartup - In the implementation block
@property (retain) NSURL * temporaryDirectory;                              //@synthesize temporaryDirectory=_temporaryDirectory - In the implementation block
@property (retain) NSURL * cachedTZDataLocation;                            //@synthesize cachedTZDataLocation=_cachedTZDataLocation - In the implementation block
@property (retain) NSURL * latestTZDataLink;                                //@synthesize latestTZDataLink=_latestTZDataLink - In the implementation block
@property (readonly) TZVersionInfo * currentVersionInfo;                    //@synthesize currentVersionInfo=_currentVersionInfo - In the implementation block
@property (readonly) TZVersionInfo * latestVersionInfo;                     //@synthesize latestVersionInfo=_latestVersionInfo - In the implementation block
@property (readonly) TZVersionInfo * lastInstalledVersionInfo;              //@synthesize lastInstalledVersionInfo=_lastInstalledVersionInfo - In the implementation block
@property (readonly) TZVersionInfo * systemVersionInfo;                     //@synthesize systemVersionInfo=_systemVersionInfo - In the implementation block
@property (readonly) NSURL * systemICUDirectoryURL; 
@property (readonly) NSURL * systemICUSchemaVersionURL;                     //@synthesize systemICUSchemaVersionURL=_systemICUSchemaVersionURL - In the implementation block
@property (readonly) NSString * systemICUTZSchemaVersion;                   //@synthesize systemICUTZSchemaVersion=_systemICUTZSchemaVersion - In the implementation block
@property (readonly) NSURL * dataExpansionParentURL; 
@property (retain) NSURL * dataExpansionVersionDirectory;                   //@synthesize dataExpansionVersionDirectory=_dataExpansionVersionDirectory - In the implementation block
+(id)sharedInstance;
-(NSURL *)temporaryDirectory;
-(void)cacheTZLatestDestination;
-(NSURL *)systemICUDirectoryURL;
-(NSURL *)latestTZLinkURL;
-(id)obtainDestinationOfLinkAtURL:(id)arg1 ;
-(void)setTemporaryDirectory:(NSURL *)arg1 ;
-(NSURL *)currentZoneinfoLinkURL;
-(TZVersionInfo *)systemVersionInfo;
-(TZVersionInfo *)latestVersionInfo;
-(NSURL *)systemICUSchemaVersionURL;
-(NSURL *)dataExpansionParentURL;
-(void)resetTemporaryDirectory;
-(TZVersionInfo *)lastInstalledVersionInfo;
-(NSString *)systemICUTZSchemaVersion;
-(NSURL *)cachedTZDataLocation;
-(void)setCachedTZDataLocation:(NSURL *)arg1 ;
-(NSURL *)latestTZDataLink;
-(void)setLatestTZDataLink:(NSURL *)arg1 ;
-(NSURL *)dataExpansionVersionDirectory;
-(void)setDataExpansionVersionDirectory:(NSURL *)arg1 ;
-(NSURL *)latestLinkDestinationAtStartup;
-(TZVersionInfo *)currentVersionInfo;
-(id)init;
@end

