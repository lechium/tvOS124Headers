/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:31 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebBookmarks/WebBookmarks-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSDictionary, NSDate;

@interface WebBookmark : NSObject <NSCopying> {

	BOOL _folder;
	NSString* _title;
	NSString* _url;
	NSString* _UUID;
	NSString* _serverID;
	NSString* _syncKey;
	NSData* _syncData;
	BOOL _editable;
	BOOL _deletable;
	BOOL _hidden;
	BOOL _syncable;
	BOOL _fetchedIconData;
	NSData* _iconData;
	BOOL _locallyAdded;
	int _archiveStatus;
	int _webFilterStatus;
	NSDictionary* _extraAttributes;
	NSDictionary* _localAttributes;
	int _id;
	int _parentID;
	int _specialID;
	unsigned _orderIndex;
	BOOL _inserted;
	BOOL _needsSyncUpdate;
	unsigned long long _modifiedAttributes;
	BOOL _usedForInMemoryChangeTracking;

}

@property (nonatomic,retain) NSString * serverID; 
@property (nonatomic,retain) NSString * syncKey; 
@property (nonatomic,retain) NSData * syncData; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentationForInMemoryChangeTracking; 
@property (nonatomic,readonly) unsigned long long modifiedAttributes; 
@property (nonatomic,retain) NSString * previewText; 
@property (assign,nonatomic) BOOL locallyAdded; 
@property (assign,nonatomic) int archiveStatus; 
@property (assign,nonatomic) int webFilterStatus; 
@property (nonatomic,retain) NSDate * dateLastArchived; 
@property (nonatomic,retain) NSDate * dateAdded; 
@property (nonatomic,retain) NSDate * dateLastViewed; 
@property (nonatomic,retain) NSDate * dateLastFetched; 
@property (nonatomic,retain) NSDictionary * nextPageURLs; 
@property (nonatomic,retain) NSString * localPreviewText; 
@property (nonatomic,retain) NSString * readingListIconURL; 
@property (nonatomic,retain) NSString * readingListIconUUID; 
@property (assign,nonatomic) BOOL hasFetchedMetadata; 
@property (assign,nonatomic) BOOL shouldArchive; 
@property (assign,nonatomic) BOOL needsSyncUpdate;                                                                 //@synthesize needsSyncUpdate=_needsSyncUpdate - In the implementation block
@property (nonatomic,retain) NSString * title;                                                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * address;                                                                   //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) int parentID;                                                                       //@synthesize parentID=_parentID - In the implementation block
@property (nonatomic,readonly) int identifier;                                                                     //@synthesize id=_id - In the implementation block
@property (nonatomic,readonly) NSString * UUID;                                                                    //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) int specialID;                                                                      //@synthesize specialID=_specialID - In the implementation block
@property (getter=isEditable,nonatomic,readonly) BOOL editable;                                                    //@synthesize editable=_editable - In the implementation block
@property (getter=isDeletable,nonatomic,readonly) BOOL deletable;                                                  //@synthesize deletable=_deletable - In the implementation block
@property (getter=isHidden,nonatomic,readonly) BOOL hidden;                                                        //@synthesize hidden=_hidden - In the implementation block
@property (getter=isFolder,nonatomic,readonly) BOOL folder;                                                        //@synthesize folder=_folder - In the implementation block
@property (getter=isInserted,nonatomic,readonly) BOOL inserted;                                                    //@synthesize inserted=_inserted - In the implementation block
@property (getter=isSyncable,nonatomic,readonly) BOOL syncable;                                                    //@synthesize syncable=_syncable - In the implementation block
@property (assign,nonatomic) BOOL fetchedIconData;                                                                 //@synthesize fetchedIconData=_fetchedIconData - In the implementation block
@property (nonatomic,retain) NSData * iconData;                                                                    //@synthesize iconData=_iconData - In the implementation block
@property (nonatomic,retain) NSDictionary * extraAttributes;                                                       //@synthesize extraAttributes=_extraAttributes - In the implementation block
@property (nonatomic,retain) NSDictionary * localAttributes;                                                       //@synthesize localAttributes=_localAttributes - In the implementation block
+(id)_trimmedTitle:(id)arg1 ;
+(id)_trimmedPreviewText:(id)arg1 ;
-(void)_setUUID:(id)arg1 ;
-(void)setServerID:(NSString *)arg1 ;
-(NSString *)serverID;
-(void)setExtraAttributes:(NSDictionary *)arg1 ;
-(void)setAddress:(NSString *)arg1 ;
-(NSString *)address;
-(void)setDateAdded:(NSDate *)arg1 ;
-(NSString *)syncKey;
-(BOOL)isSyncable;
-(BOOL)isFolder;
-(BOOL)isInserted;
-(BOOL)isDeletable;
-(id)initWithTitle:(id)arg1 address:(id)arg2 ;
-(id)initFolderWithParentID:(int)arg1 ;
-(void)_markSpecial:(int)arg1 ;
-(NSData *)syncData;
-(void)setSyncData:(NSData *)arg1 ;
-(void)cleanupRedundantPreviewText;
-(int)specialID;
-(BOOL)isReadingListItem;
-(BOOL)isReadingListFolder;
-(unsigned)_orderIndex;
-(void)_setParentID:(int)arg1 ;
-(NSDate *)dateLastViewed;
-(void)_setUsedForInMemoryChangeTracking:(BOOL)arg1 ;
-(id)initWithDictionaryRepresentationForInMemoryChangeTracking:(id)arg1 ;
-(void)setDateLastViewed:(NSDate *)arg1 ;
-(NSDictionary *)dictionaryRepresentationForInMemoryChangeTracking;
-(BOOL)_attributesMarkedAsModified:(unsigned long long)arg1 ;
-(unsigned long long)modifiedAttributes;
-(void)_setID:(int)arg1 ;
-(void)_setInserted:(BOOL)arg1 ;
-(void)setLocalAttributes:(NSDictionary *)arg1 ;
-(id)initBuiltinDeviceBookmarkWithTitle:(id)arg1 address:(id)arg2 ;
-(BOOL)isEqualToBookmark:(id)arg1 ;
-(void)_markAttributesAsModified:(unsigned long long)arg1 ;
-(id)initBuiltinBookmarkWithTitle:(id)arg1 address:(id)arg2 ;
-(id)initCarrierBookmarkWithTitle:(id)arg1 address:(id)arg2 ;
-(id)initWhiteListBookmarkWithTitle:(id)arg1 address:(id)arg2 ;
-(id)initFrequentlyVisitedSiteWithWebBookmark:(id)arg1 title:(id)arg2 ;
-(BOOL)isBookmarksBarFolder;
-(BOOL)isBookmarksMenuFolder;
-(BOOL)isWebFilterWhiteListFolder;
-(BOOL)isFrequentlyVisitedSitesFolder;
-(BOOL)needsSyncUpdate;
-(void)setNeedsSyncUpdate:(BOOL)arg1 ;
-(BOOL)fetchedIconData;
-(void)setFetchedIconData:(BOOL)arg1 ;
-(NSDictionary *)localAttributes;
-(BOOL)_usedForInMemoryChangeTracking;
-(int)archiveStatus;
-(void)setWebFilterStatus:(int)arg1 ;
-(unsigned long long)archiveSize;
-(void)setArchiveStatus:(int)arg1 ;
-(void)setDateLastArchived:(NSDate *)arg1 ;
-(void)clearArchiveSynchronously;
-(id)_initWithSqliteRow:(sqlite3_stmtRef)arg1 ;
-(NSString *)readingListIconUUID;
-(void)clearArchive;
-(void)_setOrderIndex:(unsigned)arg1 ;
-(void)setReadingListIconUUID:(NSString *)arg1 ;
-(void)setReadingListIconURL:(NSString *)arg1 ;
-(BOOL)fullArchiveAvailable;
-(BOOL)locallyAdded;
-(int)webFilterStatus;
-(void)_setSyncable:(BOOL)arg1 ;
-(id)initReadingListBookmarkWithTitle:(id)arg1 address:(id)arg2 previewText:(id)arg3 ;
-(id)_initWithSqliteRow:(sqlite3_stmtRef)arg1 hasIcon:(BOOL)arg2 ;
-(id)_readingListPropertyNamed:(id)arg1 ;
-(void)_modifyExtraReadingListAttributes:(/*^block*/id)arg1 ;
-(void)_modifyLocalReadingListAttributes:(/*^block*/id)arg1 ;
-(NSString *)readingListIconURL;
-(NSString *)previewText;
-(NSString *)localPreviewText;
-(void)setPreviewText:(NSString *)arg1 ;
-(void)setLocallyAdded:(BOOL)arg1 ;
-(NSDate *)dateLastArchived;
-(NSDate *)dateLastFetched;
-(void)setDateLastFetched:(NSDate *)arg1 ;
-(void)setTitle:(id)arg1 previewText:(id)arg2 dateLastFetched:(id)arg3 ;
-(void)setNextPageURLs:(NSDictionary *)arg1 ;
-(NSDictionary *)nextPageURLs;
-(void)setLocalPreviewText:(NSString *)arg1 ;
-(BOOL)hasFetchedMetadata;
-(void)setHasFetchedMetadata:(BOOL)arg1 ;
-(id)offlineArchiveDirectoryPath;
-(id)_suggestedFileNameForWebView:(id)arg1 ;
-(unsigned long long)_sizeForFileOrDirectory:(id)arg1 withAttributes:(id)arg2 ;
-(void)_removeDirectoryAtPath:(id)arg1 ;
-(id)webarchivePathInReaderForm:(BOOL)arg1 fileExists:(BOOL*)arg2 ;
-(id)webarchivePathForNextPageURL:(id)arg1 ;
-(BOOL)writeOfflineWebView:(id)arg1 asArchive:(BOOL)arg2 inReaderForm:(BOOL)arg3 ;
-(BOOL)shouldReattemptArchiveWithAutomaticArchivingEnabled:(BOOL)arg1 ;
-(void)setShouldArchive:(BOOL)arg1 ;
-(NSDictionary *)extraAttributes;
-(NSDate *)dateAdded;
-(BOOL)shouldArchive;
-(NSData *)iconData;
-(void)setIconData:(NSData *)arg1 ;
-(void)setSyncKey:(NSString *)arg1 ;
-(int)parentID;
-(id)shortTypeDescription;
-(id)init;
-(int)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)UUID;
-(unsigned long long)hash;
-(id)description;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isHidden;
-(void)_setHidden:(BOOL)arg1 ;
-(id)localizedTitle;
-(BOOL)isEditable;
@end

