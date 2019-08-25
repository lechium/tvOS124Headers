/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPostTask.h>

@class NSString, NSMutableArray, NSMutableDictionary, NSURL, NSArray, NSDictionary;

@interface BookmarkDAVBulkPostTask : CoreDAVPostTask {

	NSString* _checkCTag;
	NSMutableArray* _parsedBookmarks;
	NSMutableDictionary* _parsedBookmarksByURL;
	NSMutableArray* _parsedFolders;
	NSMutableDictionary* _parsedFoldersByURL;
	NSMutableDictionary* _folderURLToChildrenURLOrder;
	NSString* _nextRootCTag;
	NSString* _nextRootSyncToken;
	NSURL* _checkCTagURL;

}

@property (nonatomic,retain) NSString * nextRootCTag;                                   //@synthesize nextRootCTag=_nextRootCTag - In the implementation block
@property (nonatomic,retain) NSString * nextRootSyncToken;                              //@synthesize nextRootSyncToken=_nextRootSyncToken - In the implementation block
@property (nonatomic,readonly) NSArray * parsedBookmarks;                               //@synthesize parsedBookmarks=_parsedBookmarks - In the implementation block
@property (nonatomic,readonly) NSArray * parsedFolders;                                 //@synthesize parsedFolders=_parsedFolders - In the implementation block
@property (nonatomic,readonly) NSDictionary * folderURLToChildrenURLOrder;              //@synthesize folderURLToChildrenURLOrder=_folderURLToChildrenURLOrder - In the implementation block
-(void)_foundChildrenOrder:(id)arg1 inFolderWithURL:(id)arg2 ;
-(NSDictionary *)folderURLToChildrenURLOrder;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(void)setNextRootCTag:(NSString *)arg1 ;
-(void)setNextRootSyncToken:(NSString *)arg1 ;
-(id)initWithDataPayload:(id)arg1 atURL:(id)arg2 checkCTag:(id)arg3 checkCTagURL:(id)arg4 ;
-(NSArray *)parsedBookmarks;
-(NSArray *)parsedFolders;
-(NSString *)nextRootCTag;
-(NSString *)nextRootSyncToken;
-(id)additionalHeaderValues;
-(void)dealloc;
@end

