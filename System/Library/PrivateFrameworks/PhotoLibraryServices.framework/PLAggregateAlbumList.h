/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLAssetContainerListChangeObserver.h>
#import <libobjc.A.dylib/PLAlbumContainer.h>

@class NSMutableOrderedSet, NSString;

@interface PLAggregateAlbumList : NSObject <PLAssetContainerListChangeObserver, PLAlbumContainer> {

	NSMutableOrderedSet* _allAlbums;
	NSMutableOrderedSet* _childAlbumLists;
	int _filter;

}

@property (assign,nonatomic) int filter;                                          //@synthesize filter=_filter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long containersCount; 
@property (nonatomic,readonly) unsigned long long albumsCount; 
@property (nonatomic,readonly) BOOL isFolder; 
@property (nonatomic,copy,readonly) id albumsSortingComparator; 
@property (nonatomic,readonly) unsigned long long unreadAlbumsCount; 
@property (nonatomic,retain,readonly) NSString * _prettyDescription; 
@property (nonatomic,retain,readonly) NSString * _typeDescription; 
+(NSObject*)albumListWithFilter:(int)arg1 inPhotoLibrary:(id)arg2 ;
-(id)albums;
-(BOOL)isFolder;
-(unsigned long long)albumsCount;
-(NSString *)_prettyDescription;
-(short)albumListType;
-(id)containers;
-(BOOL)canEditContainers;
-(id)containersRelationshipName;
-(unsigned long long)containersCount;
-(NSString *)_typeDescription;
-(BOOL)hasAtLeastOneAlbum;
-(id)albumsSortingComparator;
-(void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3 ;
-(BOOL)albumHasFixedOrder:(NSObject*)arg1 ;
-(void)setNeedsReordering;
-(BOOL)needsReordering;
-(void)updateAlbumsOrderIfNeeded;
-(void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2 ;
-(void)assetContainerListDidChange:(id)arg1 ;
-(id)initWithFilter:(int)arg1 inPhotoLibrary:(id)arg2 ;
-(void)_invalidateAllAlbums;
-(id)photoLibrary;
-(unsigned long long)unreadAlbumsCount;
-(BOOL)canEditAlbums;
-(void)dealloc;
-(id)identifier;
-(int)filter;
-(void)setFilter:(int)arg1 ;
-(BOOL)isEmpty;
-(id)managedObjectContext;
@end

