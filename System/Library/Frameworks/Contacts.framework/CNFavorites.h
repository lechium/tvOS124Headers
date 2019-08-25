/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNFavoritesLogger;
@class NSMutableArray, CNContactStore, NSMutableDictionary, NSArray;

@interface CNFavorites : NSObject {

	NSMutableArray* _entries;
	BOOL _dirty;
	BOOL _needsReload;
	CNContactStore* _contactStore;
	NSMutableDictionary* _uidToEntry;
	unsigned long long _postCount;
	id<CNFavoritesLogger> _logger;

}

@property (nonatomic,retain) CNContactStore * contactStore;                 //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * uidToEntry;              //@synthesize uidToEntry=_uidToEntry - In the implementation block
@property (assign,nonatomic) BOOL dirty;                                    //@synthesize dirty=_dirty - In the implementation block
@property (assign,nonatomic) unsigned long long postCount;                  //@synthesize postCount=_postCount - In the implementation block
@property (assign,nonatomic) BOOL needsReload;                              //@synthesize needsReload=_needsReload - In the implementation block
@property (nonatomic,readonly) id<CNFavoritesLogger> logger;                //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) NSArray * entries; 
@property (getter=isFull,readonly) BOOL full; 
+(id)favoritesPath;
+(void)flushSingleton;
+(id)sharedInstance;
-(void)removeAllEntries;
-(void)save;
-(id)initWithContactStore:(id)arg1 logger:(id)arg2 ;
-(BOOL)shouldSimulateCrashReportForError:(id)arg1 ;
-(id)_entryDictionaries;
-(void)_addEntryToMap:(id)arg1 ;
-(void)loadEntriesIfNecessary;
-(NSMutableDictionary *)uidToEntry;
-(id)entriesForContact:(id)arg1 ;
-(unsigned long long)postCount;
-(void)setUidToEntry:(NSMutableDictionary *)arg1 ;
-(void)setPostCount:(unsigned long long)arg1 ;
-(void)_removeEntryFromMap:(id)arg1 withUid:(int)arg2 ;
-(BOOL)writeFavoritesToFile:(id)arg1 ;
-(id)_uniqueRematchedEntries:(id)arg1 ;
-(id)initNonUpdatingReadonlyInstanceWithContactStore:(id)arg1 ;
-(BOOL)_isValueForEntry:(id)arg1 equalToValue:(id)arg2 ;
-(id)entryWithIdentifier:(id)arg1 forContact:(id)arg2 ;
-(id)entryWithType:(long long)arg1 forContact:(id)arg2 propertyKey:(id)arg3 identifier:(id)arg4 ;
-(BOOL)containsEntryWithType:(long long)arg1 forContact:(id)arg2 propertyKey:(id)arg3 identifier:(id)arg4 ;
-(BOOL)addEntryForContact:(id)arg1 propertyKey:(id)arg2 withIdentifier:(id)arg3 ;
-(void)_entriesChangedExternally;
-(void)removeEntryAtIndex:(long long)arg1 ;
-(void)moveEntryAtIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(void)rematchEntriesWithOptions:(unsigned long long)arg1 ;
-(void)recacheIdentitiesSoon;
-(void)_postChangeNotification;
-(id)initWithContactStore:(id)arg1 ;
-(id)entriesForContact:(id)arg1 propertyKey:(id)arg2 labeledValueIdentifier:(id)arg3 actionType:(id)arg4 bundleIdentifier:(id)arg5 ;
-(void)saveImmediately;
-(BOOL)needsReload;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(BOOL)isFull;
-(id<CNFavoritesLogger>)logger;
-(void)setNeedsReload:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDirty:(BOOL)arg1 ;
-(BOOL)dirty;
-(NSArray *)entries;
-(void)addEntry:(id)arg1 ;
@end

