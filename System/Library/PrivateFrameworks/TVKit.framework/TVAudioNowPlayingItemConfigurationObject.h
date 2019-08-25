/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPAudioNowPlayingItemConfigurationObject.h>

@class NSString, TVImageProxy;

@interface TVAudioNowPlayingItemConfigurationObject : TVPAudioNowPlayingItemConfigurationObject {

	BOOL _shuffleEnabled;
	BOOL _repeating;
	BOOL _streaming;
	BOOL _explicit;
	NSString* _trackTitle;
	NSString* _artistName;
	NSString* _albumTitle;
	NSString* _radioStationName;
	NSString* _artworkIdentifier;
	TVImageProxy* _artworkProxy;
	unsigned long long _trackNumber;
	unsigned long long _playlistTrackCount;
	double _duration;

}

@property (nonatomic,copy) NSString * trackTitle;                                //@synthesize trackTitle=_trackTitle - In the implementation block
@property (nonatomic,copy) NSString * artistName;                                //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,copy) NSString * albumTitle;                                //@synthesize albumTitle=_albumTitle - In the implementation block
@property (nonatomic,copy) NSString * radioStationName;                          //@synthesize radioStationName=_radioStationName - In the implementation block
@property (nonatomic,copy) NSString * artworkIdentifier;                         //@synthesize artworkIdentifier=_artworkIdentifier - In the implementation block
@property (nonatomic,retain) TVImageProxy * artworkProxy;                        //@synthesize artworkProxy=_artworkProxy - In the implementation block
@property (assign,nonatomic) unsigned long long trackNumber;                     //@synthesize trackNumber=_trackNumber - In the implementation block
@property (assign,nonatomic) unsigned long long playlistTrackCount;              //@synthesize playlistTrackCount=_playlistTrackCount - In the implementation block
@property (assign,nonatomic) double duration;                                    //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL shuffleEnabled;                                //@synthesize shuffleEnabled=_shuffleEnabled - In the implementation block
@property (assign,nonatomic) BOOL repeating;                                     //@synthesize repeating=_repeating - In the implementation block
@property (assign,nonatomic) BOOL streaming;                                     //@synthesize streaming=_streaming - In the implementation block
@property (assign,nonatomic) BOOL explicit;                                      //@synthesize explicit=_explicit - In the implementation block
+(void)load;
-(BOOL)streaming;
-(void)setArtistName:(NSString *)arg1 ;
-(BOOL)explicit;
-(void)setExplicit:(BOOL)arg1 ;
-(void)setStreaming:(BOOL)arg1 ;
-(BOOL)shuffleEnabled;
-(void)setShuffleEnabled:(BOOL)arg1 ;
-(void)setArtworkIdentifier:(NSString *)arg1 ;
-(void)setTrackNumber:(unsigned long long)arg1 ;
-(void)setRadioStationName:(NSString *)arg1 ;
-(NSString *)artistName;
-(unsigned long long)trackNumber;
-(NSString *)artworkIdentifier;
-(NSString *)radioStationName;
-(void)setRepeating:(BOOL)arg1 ;
-(void)setAlbumTitle:(NSString *)arg1 ;
-(NSString *)albumTitle;
-(void)setTrackTitle:(NSString *)arg1 ;
-(void)setPlaylistTrackCount:(unsigned long long)arg1 ;
-(NSString *)trackTitle;
-(TVImageProxy *)artworkProxy;
-(unsigned long long)playlistTrackCount;
-(BOOL)repeating;
-(void)setArtworkProxy:(TVImageProxy *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(double)duration;
@end
