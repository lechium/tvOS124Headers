/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/ML3Entity.h>

@interface ML3Collection : ML3Entity
+(BOOL)libraryContentsChangeForProperty:(id)arg1 ;
+(BOOL)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long*)arg3 count:(unsigned long long)arg4 usingConnection:(id)arg5 ;
+(BOOL)canonicalizeCollectionRepresentativeItemsInLibrary:(id)arg1 usingConnection:(id)arg2 ;
+(id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2 ;
+(id)propertiesForGroupingKey;
+(id)propertiesForGroupingUniqueCollections;
+(BOOL)removeOrphanedCollectionsInLibrary:(id)arg1 usingConnection:(id)arg2 ;
+(id)collectionEntityClasses;
+(BOOL)_updateRepresentativeItemsForPersistentIDs:(id)arg1 usingConnection:(id)arg2 ;
+(id)artworkCacheIDProperty;
+(BOOL)updateRepresentativeItemPersistentIDsInLibrary:(id)arg1 persistentIDs:(id)arg2 usingConnection:(id)arg3 ;
+(id)trackForeignPersistentID;
+(void)initialize;
-(id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 usingConnection:(id)arg4 ;
-(void)updateCloudStatus;
-(void)updateRepresentativeCollectionValues:(id)arg1 existingRepresentativePersistentID:(unsigned long long)arg2 forUpdateTrackValues:(id)arg3 ;
-(void)updateTrackValues:(id)arg1 ;
@end

