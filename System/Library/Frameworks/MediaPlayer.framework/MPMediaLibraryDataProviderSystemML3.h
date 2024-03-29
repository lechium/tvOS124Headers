/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaLibraryDataProviderML3.h>

@protocol MPArtworkDataSource, OS_dispatch_queue;
@class NSObject;

@interface MPMediaLibraryDataProviderSystemML3 : MPMediaLibraryDataProviderML3 {

	id<MPArtworkDataSource> _completeMyCollectionArtworkDataSource;
	long long _currentRevision;
	NSObject*<OS_dispatch_queue> _queue;

}
+(BOOL)_isGeniusEnabled;
+(id)_localizedGeniusErrorForError:(id)arg1 ;
+(id)_localizedCloudGeniusErrorForError:(id)arg1 ;
-(id)initWithLibrary:(id)arg1 ;
-(id)errorResolverForItem:(id)arg1 ;
-(id)completeMyCollectionArtworkDataSource;
-(BOOL)isGeniusEnabled;
-(void)geniusItemsForSeedItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)seedPlaylistWithIdentifier:(long long)arg1 withItemWithIdentifier:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)releaseGeniusClusterPlaylist:(void*)arg1 ;
-(void*)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long*)arg1 count:(unsigned long long)arg2 error:(id*)arg3 ;
-(long long*)generateItemIdentifiersForGeniusClusterPlaylist:(void*)arg1 count:(unsigned long long*)arg2 error:(id*)arg3 ;
-(void)updateEntitesToCurrentRevision;
-(BOOL)supportsEntityChangeTrackingForMediaEntityType:(long long)arg1 collectionGroupingType:(long long)arg2 dataProviderClass:(out Class*)arg3 ;
-(void)_initInstanceVariableOnce;
-(void)_seedCloudPlaylistWithTrack:(id)arg1 container:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(long long)_currentRevision;
@end

