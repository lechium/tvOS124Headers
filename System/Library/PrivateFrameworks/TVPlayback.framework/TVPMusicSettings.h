/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVSPreferences, NSString;

@interface TVPMusicSettings : NSObject {

	TVSPreferences* _musicPreferences;
	id _musicDomainObserver;
	id _mediaPlaybackCoreDomainObserver;
	BOOL _shouldLimitAdTracking;
	BOOL _musicAdvertisingIdentifierNeedsReset;
	BOOL _cloudLibrarySettingChangedByUser;
	BOOL _sortSongsByArtist;
	BOOL _sortAlbumsByArtist;
	BOOL _useListeningHistory;
	NSString* _musicAdvertisingIdentifier;

}

@property (nonatomic,readonly) BOOL shouldLimitAdTracking;                                             //@synthesize shouldLimitAdTracking=_shouldLimitAdTracking - In the implementation block
@property (assign,nonatomic) BOOL musicAdvertisingIdentifierNeedsReset;                                //@synthesize musicAdvertisingIdentifierNeedsReset=_musicAdvertisingIdentifierNeedsReset - In the implementation block
@property (nonatomic,copy) NSString * musicAdvertisingIdentifier;                                      //@synthesize musicAdvertisingIdentifier=_musicAdvertisingIdentifier - In the implementation block
@property (assign,nonatomic) BOOL cloudLibrarySettingChangedByUser;                                    //@synthesize cloudLibrarySettingChangedByUser=_cloudLibrarySettingChangedByUser - In the implementation block
@property (assign,nonatomic) BOOL sortSongsByArtist;                                                   //@synthesize sortSongsByArtist=_sortSongsByArtist - In the implementation block
@property (getter=isSortSongsByArtistSet,nonatomic,readonly) BOOL sortSongsByArtistSet; 
@property (assign,nonatomic) BOOL sortAlbumsByArtist;                                                  //@synthesize sortAlbumsByArtist=_sortAlbumsByArtist - In the implementation block
@property (getter=isSortAlbumsByArtistSet,nonatomic,readonly) BOOL sortAlbumsByArtistSet; 
@property (assign,nonatomic) BOOL useListeningHistory;                                                 //@synthesize useListeningHistory=_useListeningHistory - In the implementation block
+(id)sharedInstance;
-(void)_updateValues;
-(void)setMusicAdvertisingIdentifier:(NSString *)arg1 ;
-(void)setMusicAdvertisingIdentifierNeedsReset:(BOOL)arg1 ;
-(void)setCloudLibrarySettingChangedByUser:(BOOL)arg1 ;
-(void)setSortSongsByArtist:(BOOL)arg1 ;
-(BOOL)isSortSongsByArtistSet;
-(void)setSortAlbumsByArtist:(BOOL)arg1 ;
-(BOOL)isSortAlbumsByArtistSet;
-(void)setUseListeningHistory:(BOOL)arg1 ;
-(BOOL)shouldLimitAdTracking;
-(BOOL)musicAdvertisingIdentifierNeedsReset;
-(NSString *)musicAdvertisingIdentifier;
-(BOOL)cloudLibrarySettingChangedByUser;
-(BOOL)sortSongsByArtist;
-(BOOL)sortAlbumsByArtist;
-(BOOL)useListeningHistory;
-(id)init;
-(void)dealloc;
@end

