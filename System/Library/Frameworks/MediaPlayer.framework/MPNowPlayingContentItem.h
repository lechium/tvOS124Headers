/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPContentItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MPNowPlayingContentItemArtworkDataSource;
@class NSDictionary, NSString, NSArray, MPNowPlayingInfoLyricsItem, MPMediaItemArtwork, NSDate;

@interface MPNowPlayingContentItem : MPContentItem <NSCopying> {

	NSDictionary* _nowPlayingInfo;
	id<MPNowPlayingContentItemArtworkDataSource> _artworkDataSource;

}

@property (nonatomic,copy) NSString * info; 
@property (nonatomic,copy) NSArray * availableLanguageOptions; 
@property (nonatomic,copy) NSArray * currentLanguageOptions; 
@property (nonatomic,copy) NSArray * sections; 
@property (nonatomic,copy) MPNowPlayingInfoLyricsItem * lyrics; 
@property (nonatomic,retain) MPMediaItemArtwork * artwork; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) double elapsedTime; 
@property (assign,nonatomic) float playbackRate; 
@property (assign,nonatomic) long long storeAlbumID; 
@property (assign,nonatomic) long long storeArtistID; 
@property (assign,nonatomic) long long storeID; 
@property (assign,nonatomic) long long storeSubscriptionID; 
@property (assign,nonatomic) long long legacyUniqueID; 
@property (assign,nonatomic) unsigned long long mediaType; 
@property (nonatomic,copy) NSDictionary * deviceSpecificUserInfo; 
@property (nonatomic,copy) NSDictionary * nowPlayingInfo; 
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (assign,getter=isSharableItem,nonatomic) BOOL sharableItem; 
@property (assign,getter=isSteerable,nonatomic) BOOL steerable; 
@property (assign,nonatomic) long long episodeType; 
@property (nonatomic,readonly) NSDictionary * auxiliaryNowPlayingInfo; 
@property (nonatomic,retain) id<MPNowPlayingContentItemArtworkDataSource> artworkDataSource;              //@synthesize artworkDataSource=_artworkDataSource - In the implementation block
@property (nonatomic,copy) NSDictionary * collectionInfo; 
@property (assign,getter=isExplicitItem,nonatomic) BOOL explicitItem; 
@property (nonatomic,copy) NSString * albumName; 
@property (nonatomic,copy) NSString * trackArtistName; 
@property (nonatomic,copy) NSString * albumArtistName; 
@property (nonatomic,copy) NSString * directorName; 
@property (nonatomic,copy) NSString * composerName; 
@property (nonatomic,copy) NSString * genreName; 
@property (nonatomic,copy) NSString * seriesName; 
@property (assign,nonatomic) long long seasonNumber; 
@property (assign,nonatomic) long long episodeNumber; 
@property (assign,nonatomic) long long discNumber; 
@property (assign,nonatomic) long long totalDiscCount; 
@property (assign,nonatomic) long long trackNumber; 
@property (assign,nonatomic) long long totalTrackCount; 
@property (nonatomic,copy) NSDate * releaseDate; 
@property (nonatomic,copy) NSString * localizedContentRating; 
@property (nonatomic,copy) NSString * collectionIdentifier; 
@property (nonatomic,copy) NSString * profileIdentifier; 
@property (assign,nonatomic) long long playlistType; 
@property (assign,nonatomic) long long radioStationType; 
@property (nonatomic,copy) NSString * radioStationName; 
@property (nonatomic,copy) NSString * radioStationStringIdentifier; 
@property (nonatomic,copy) NSString * externalContentIdentifier; 
@property (assign,nonatomic) long long numberOfChildren; 
@property (assign,nonatomic) long long playCount; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) float defaultPlaybackRate; 
@property (assign,getter=isAlwaysLiveItem,nonatomic) BOOL alwaysLiveItem; 
@property (nonatomic,readonly) double elapsedTimeTimestamp; 
@property (assign,nonatomic) long long editingStyleFlags; 
@property (assign,nonatomic) BOOL hasArtwork; 
@property (nonatomic,copy) NSString * artworkIdentifier; 
@property (nonatomic,copy) NSString * artworkURL; 
@property (nonatomic,copy) NSArray * artworkURLTemplates; 
@property (assign,nonatomic) BOOL hasDescription; 
@property (assign,nonatomic) BOOL hasLanguageOptions; 
@property (assign,nonatomic) BOOL hasLyrics; 
+(BOOL)shouldPushArtworkData;
-(void)setArtwork:(MPMediaItemArtwork *)arg1 ;
-(BOOL)hasArtwork;
-(long long)storeID;
-(void)setPlayCount:(long long)arg1 ;
-(void)setCollectionIdentifier:(NSString *)arg1 ;
-(NSString *)collectionIdentifier;
-(void)setAlbumName:(NSString *)arg1 ;
-(NSString *)albumName;
-(void)setMediaType:(unsigned long long)arg1 ;
-(void)setDefaultPlaybackRate:(float)arg1 ;
-(MPNowPlayingInfoLyricsItem *)lyrics;
-(float)defaultPlaybackRate;
-(void)setHasArtwork:(BOOL)arg1 ;
-(void)setArtworkIdentifier:(NSString *)arg1 ;
-(void)setArtworkURL:(NSString *)arg1 ;
-(void)setArtworkURLTemplates:(NSArray *)arg1 ;
-(void)setLyrics:(MPNowPlayingInfoLyricsItem *)arg1 ;
-(void)setHasLyrics:(BOOL)arg1 ;
-(void)setElapsedTime:(double)arg1 ;
-(void)setPlaybackRate:(float)arg1 ;
-(void)setStoreID:(long long)arg1 ;
-(void)setStoreAlbumID:(long long)arg1 ;
-(void)setStoreArtistID:(long long)arg1 ;
-(void)setStoreSubscriptionID:(long long)arg1 ;
-(void)setTrackArtistName:(NSString *)arg1 ;
-(void)setAlbumArtistName:(NSString *)arg1 ;
-(void)setComposerName:(NSString *)arg1 ;
-(void)setGenreName:(NSString *)arg1 ;
-(long long)discNumber;
-(void)setDiscNumber:(long long)arg1 ;
-(void)setTotalDiscCount:(long long)arg1 ;
-(void)setTrackNumber:(long long)arg1 ;
-(void)setTotalTrackCount:(long long)arg1 ;
-(NSString *)externalContentIdentifier;
-(void)setExternalContentIdentifier:(NSString *)arg1 ;
-(void)setAlwaysLiveItem:(BOOL)arg1 ;
-(void)setRadioStationName:(NSString *)arg1 ;
-(void)setRadioStationStringIdentifier:(NSString *)arg1 ;
-(void)setCollectionInfo:(NSDictionary *)arg1 ;
-(void)setEditingStyleFlags:(long long)arg1 ;
-(void)setDeviceSpecificUserInfo:(NSDictionary *)arg1 ;
-(void)setElapsedTime:(double)arg1 playbackRate:(float)arg2 ;
-(NSString *)composerName;
-(BOOL)hasLyrics;
-(long long)playlistType;
-(NSDate *)releaseDate;
-(long long)trackNumber;
-(long long)seasonNumber;
-(NSString *)albumArtistName;
-(id<MPNowPlayingContentItemArtworkDataSource>)artworkDataSource;
-(float)playbackRate;
-(NSString *)artworkIdentifier;
-(BOOL)isExplicitItem;
-(void)setArtworkDataSource:(id<MPNowPlayingContentItemArtworkDataSource>)arg1 ;
-(NSString *)artworkURL;
-(void)setEpisodeNumber:(long long)arg1 ;
-(void)_mergeContentItem:(id)arg1 ;
-(void)setAvailableLanguageOptions:(NSArray *)arg1 ;
-(void)setCurrentLanguageOptions:(NSArray *)arg1 ;
-(void)setNowPlayingInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)nowPlayingInfo;
-(NSDictionary *)deviceSpecificUserInfo;
-(NSString *)directorName;
-(NSString *)localizedContentRating;
-(NSString *)profileIdentifier;
-(NSString *)radioStationName;
-(NSString *)seriesName;
-(NSString *)trackArtistName;
-(NSArray *)artworkURLTemplates;
-(long long)episodeNumber;
-(long long)totalDiscCount;
-(long long)totalTrackCount;
-(NSString *)genreName;
-(NSString *)radioStationStringIdentifier;
-(BOOL)isAlwaysLiveItem;
-(BOOL)isSharableItem;
-(BOOL)isSteerable;
-(long long)numberOfChildren;
-(long long)storeAlbumID;
-(long long)storeArtistID;
-(long long)storeSubscriptionID;
-(long long)legacyUniqueID;
-(long long)radioStationType;
-(long long)episodeType;
-(long long)editingStyleFlags;
-(NSDictionary *)collectionInfo;
-(double)elapsedTimeTimestamp;
-(BOOL)hasLanguageOptions;
-(NSArray *)availableLanguageOptions;
-(NSArray *)currentLanguageOptions;
-(BOOL)hasDescription;
-(void)setReleaseDate:(NSDate *)arg1 ;
-(void)setDirectorName:(NSString *)arg1 ;
-(void)setLocalizedContentRating:(NSString *)arg1 ;
-(void)setProfileIdentifier:(NSString *)arg1 ;
-(void)setSeriesName:(NSString *)arg1 ;
-(void)setSeasonNumber:(long long)arg1 ;
-(void)setSharableItem:(BOOL)arg1 ;
-(void)setSteerable:(BOOL)arg1 ;
-(void)setNumberOfChildren:(long long)arg1 ;
-(void)setLegacyUniqueID:(long long)arg1 ;
-(void)setPlaylistType:(long long)arg1 ;
-(void)setRadioStationType:(long long)arg1 ;
-(void)setEpisodeType:(long long)arg1 ;
-(NSDictionary *)auxiliaryNowPlayingInfo;
-(void)setHasLanguageOptions:(BOOL)arg1 ;
-(void)invalidateLanguageOptions;
-(void)setHasDescription:(BOOL)arg1 ;
-(void)invalidateDescription;
-(void)invalidateLyrics;
-(void)invalidateArtwork;
-(void)setExplicitItem:(BOOL)arg1 ;
-(unsigned long long)mediaType;
-(long long)playCount;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDuration:(double)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(double)duration;
-(NSArray *)sections;
-(NSString *)info;
-(double)elapsedTime;
-(void)setInfo:(NSString *)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
@end

