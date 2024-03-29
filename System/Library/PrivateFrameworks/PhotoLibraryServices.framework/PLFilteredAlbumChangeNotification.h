/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLAssetContainerChangeNotification.h>
#import <libobjc.A.dylib/PLIndexMapperDataSource.h>
#import <libobjc.A.dylib/PLDerivedNotification.h>

@class PLFilteredAlbum, NSIndexSet, PLIndexMapper, PLAssetContainerChangeNotification, NSString;

@interface PLFilteredAlbumChangeNotification : PLAssetContainerChangeNotification <PLIndexMapperDataSource, PLDerivedNotification> {

	PLFilteredAlbum* _album;
	NSIndexSet* _oldFilteredIndexes;
	NSIndexSet* _filteredIndexes;
	PLIndexMapper* _indexMapper;
	PLAssetContainerChangeNotification* _backingNotification;

}

@property (nonatomic,retain,readonly) NSIndexSet * updatedFilteredIndexes; 
@property (nonatomic,copy) NSIndexSet * filteredIndexes; 
@property (nonatomic,retain,readonly) PLIndexMapper * indexMapper; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3 ;
-(NSIndexSet *)filteredIndexes;
-(BOOL)shouldIncludeObjectAtIndex:(unsigned long long)arg1 ;
-(PLIndexMapper *)indexMapper;
-(id)_diffDescription;
-(BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2 ;
-(id)_changedObjects;
-(BOOL)titleDidChange;
-(BOOL)keyAssetDidChange;
-(id)initWithFilteredAlbum:(id)arg1 priorChangeState:(id)arg2 albumChangeNotification:(id)arg3 ;
-(NSIndexSet *)updatedFilteredIndexes;
-(BOOL)countDidChange;
-(void)setFilteredIndexes:(NSIndexSet *)arg1 ;
-(BOOL)shouldReload;
-(id)album;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)object;
@end

