/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/NewsstandKit.framework/NewsstandKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NewsstandKit/NewsstandKit-Structs.h>
@class NSArray, NKIssue, NSMapTable, NSURL, NSFileManager;

@interface NKLibrary : NSObject {

	NSArray* _issues;
	NKIssue* _currentlyReadingIssue;
	NSMapTable* _issuesByName;
	NSMapTable* _issuesByDirectory;
	NSURL* _contentURL;
	NSFileManager* _fileManager;
	NSURL* _appSupportURL;
	NSURL* _libraryURL;
	BOOL _inited;
	int _needsSaving;
	int _savePending;
	NSArray* _assetsFromLaunch;

}

@property (readonly) NSArray * issues; 
@property (readonly) NSArray * downloadingAssets; 
@property (retain) NKIssue * currentlyReadingIssue; 
+(id)sharedLibrary;
+(BOOL)_isNewsstandApp;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)_applicationWillTerminate:(id)arg1 ;
-(id)_fileManager;
-(void)_saveIfNeeded;
-(NSArray *)downloadingAssets;
-(void)_didFinishLaunchingWasCalled;
-(void)_markIssuesAndSave;
-(id)issueWithName:(id)arg1 ;
-(id)_contentURL;
-(void)_setIssues:(id)arg1 ;
-(NKIssue *)currentlyReadingIssue;
-(void)setCurrentlyReadingIssue:(NKIssue *)arg1 ;
-(void)_performBackgroundTask:(/*^block*/id)arg1 withDescription:(id)arg2 ;
-(void)_markAsDirtyAndSave;
-(id)_appSupportURL;
-(id)_libraryURL;
-(void)__actuallySave;
-(void)_saveIfNeededAfterDelay:(double)arg1 ;
-(void)_saveNowIfNeeded;
-(id)addIssueWithName:(id)arg1 date:(id)arg2 ;
-(void)removeIssue:(id)arg1 ;
-(id)_issueForDirectory:(id)arg1 ;
-(BOOL)_canPerformBackgroundDownloads;
-(void)_issueChanged:(id)arg1 ;
-(id)init;
-(oneway void)release;
-(id)autorelease;
-(id)retain;
-(unsigned long long)retainCount;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)issues;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_load;
@end

