/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/__TVMusicDataClientResultsController.h>

@class TVCKDataCollection;

@interface __TVMusicSongsDataClientResultsController : __TVMusicDataClientResultsController {

	TVCKDataCollection* _playlist;
	TVCKDataCollection* _album;
	TVCKDataCollection* _artistOrComposer;
	TVCKDataCollection* _genre;
	BOOL _isComposer;
	BOOL _isArtistWithSingleAlbum;

}
-(id)initWithPlaylist:(id)arg1 ;
-(id)queryForController:(id)arg1 ;
-(id)initWithArtist:(id)arg1 genre:(id)arg2 ;
-(id)initWithComposer:(id)arg1 ;
-(id)initWithSingleAlbumArtist:(id)arg1 genre:(id)arg2 ;
-(id)initWithAlbum:(id)arg1 genre:(id)arg2 ;
@end

