/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/_PLManagedAlbumList.h>
#import <libobjc.A.dylib/PLAlbumContainer.h>
#import <libobjc.A.dylib/PLDerivedAlbumListOrigin.h>
#import <libobjc.A.dylib/PLIndexMappersDataOrigin.h>

@protocol PLIndexMappingCache;
@class NSString, NSObject, NSNumber, NSMutableOrderedSet;

@interface PLManagedAlbumList : _PLManagedAlbumList <PLAlbumContainer, PLDerivedAlbumListOrigin, PLIndexMappersDataOrigin> {

	NSObject*<PLIndexMappingCache> _derivedAlbumLists[5];
	BOOL isRegisteredForChanges;
	BOOL didRegisteredWithUserInterfaceContext;

}

@property (nonatomic,copy) NSNumber * identifier; 
@property (nonatomic,copy) NSNumber * needsReorderingNumber; 
@property (assign,nonatomic) BOOL isRegisteredForChanges; 
@property (assign,nonatomic) BOOL didRegisteredWithUserInterfaceContext; 
@property (assign,nonatomic) short albumListType; 
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain,readonly) NSMutableOrderedSet * albums; 
@property (nonatomic,readonly) BOOL hasAtLeastOneAlbum; 
@property (nonatomic,readonly) BOOL canEditAlbums; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long containersCount; 
@property (nonatomic,readonly) unsigned long long albumsCount; 
@property (nonatomic,readonly) BOOL isFolder; 
@property (nonatomic,copy,readonly) id albumsSortingComparator; 
@property (nonatomic,readonly) int filter; 
@property (nonatomic,readonly) unsigned long long unreadAlbumsCount; 
@property (nonatomic,retain,readonly) NSString * _prettyDescription; 
@property (nonatomic,retain,readonly) NSString * _typeDescription; 
+(id)albumListInPhotoLibrary:(id)arg1 ;
+(id)facesAlbumListInPhotoLibrary:(id)arg1 ;
+(id)importListInPhotoLibrary:(id)arg1 ;
+(id)eventListInPhotoLibrary:(id)arg1 ;
+(BOOL)isValidPathForPersistence:(id)arg1 ;
+(BOOL)restoreAlbumListFromPersistedDataAtPath:(id)arg1 library:(id)arg2 ;
+(id)allStreamedAlbumsListInPhotoLibrary:(id)arg1 ;
+(id)placesAlbumListInPhotoLibrary:(id)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(void)addSingletonObjectsToContext:(id)arg1 ;
+(void)persistAlbumListUUIDs:(id)arg1 type:(short)arg2 allowsOverwrite:(BOOL)arg3 ;
+(id)importListInManagedObjectContext:(id)arg1 ;
+(id)eventListInManagedObjectContext:(id)arg1 ;
+(id)albumListInManagedObjectContext:(id)arg1 ;
+(void)pushChangesFromAlbumContainer:(id)arg1 toAlbumContainer:(id)arg2 ;
+(id)allStreamedAlbumsListInManagedObjectContext:(id)arg1 ;
+(BOOL)albumKindHasFixedOrder:(int)arg1 ;
+(unsigned long long)priorityForAlbumKind:(int)arg1 ;
+(id)_albumListWithType:(short)arg1 inManagedObjectContext:(id)arg2 ;
+(id)_singletonListWithType:(short)arg1 library:(id)arg2 ;
+(id)_typeDescriptionForAlbumListType:(short)arg1 ;
+(id)_validAlbumsFromSource:(id)arg1 destination:(id)arg2 ;
+(BOOL)_albumOrderMatchesFrom:(id)arg1 inDestination:(id)arg2 ;
+(BOOL)isValidTypeForPersistence:(short)arg1 ;
+(id)scenesAlbumListInPhotoLibrary:(id)arg1 ;
+(id)facesAlbumListInManagedObjectContext:(id)arg1 ;
+(id)placesAlbumListInManagedObjectContext:(id)arg1 ;
+(id)scenesAlbumListInManagedObjectContext:(id)arg1 ;
+(void)initialize;
-(NSMutableOrderedSet *)albums;
-(BOOL)isFolder;
-(void)willSave;
-(void)didSave;
-(void)awakeFromInsert;
-(BOOL)isRegisteredForChanges;
-(void)setDidRegisteredWithUserInterfaceContext:(BOOL)arg1 ;
-(void)registerForChanges;
-(BOOL)didRegisteredWithUserInterfaceContext;
-(void)unregisterForChanges;
-(unsigned long long)albumsCount;
-(void)awakeFromFetch;
-(void)willTurnIntoFault;
-(NSString *)_prettyDescription;
-(void)unregisterAllDerivedAlbums;
-(void)insertIntoOrderedAlbumsAtIndexByPriorityForAlbum:(id)arg1 ;
-(void)setIsRegisteredForChanges:(BOOL)arg1 ;
-(void)enumerateDerivedIndexMappers:(/*^block*/id)arg1 ;
-(BOOL)hasDerivedIndexMappers;
-(short)albumListType;
-(id)containers;
-(BOOL)canEditContainers;
-(id)containersRelationshipName;
-(unsigned long long)containersCount;
-(id)_albumsCountFetchRequest;
-(NSString *)_typeDescription;
-(BOOL)hasAtLeastOneAlbum;
-(id)albumsSortingComparator;
-(void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3 ;
-(void)enumerateDerivedAlbumLists:(/*^block*/id)arg1 ;
-(BOOL)albumHasFixedOrder:(NSObject*)arg1 ;
-(void)setNeedsReordering;
-(BOOL)needsReordering;
-(void)updateAlbumsOrderIfNeeded;
-(void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2 ;
-(void)registerDerivedAlbumList:(NSObject*)arg1 ;
-(void)setAlbumListType:(short)arg1 ;
-(unsigned long long)unreadAlbumsCount;
-(BOOL)canEditAlbums;
-(void)dealloc;
-(int)filter;
-(BOOL)isEmpty;
@end

