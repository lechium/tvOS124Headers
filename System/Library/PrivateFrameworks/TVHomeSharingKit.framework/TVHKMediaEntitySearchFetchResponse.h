/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVHKMediaEntityFetchResponse;

@interface TVHKMediaEntitySearchFetchResponse : NSObject {

	unsigned long long _fromRevision;
	unsigned long long _toRevision;
	TVHKMediaEntityFetchResponse* _mediaItemsResponse;
	TVHKMediaEntityFetchResponse* _albumsResponse;
	TVHKMediaEntityFetchResponse* _albumArtistsResponse;

}

@property (assign,nonatomic) unsigned long long fromRevision;                                  //@synthesize fromRevision=_fromRevision - In the implementation block
@property (assign,nonatomic) unsigned long long toRevision;                                    //@synthesize toRevision=_toRevision - In the implementation block
@property (nonatomic,retain) TVHKMediaEntityFetchResponse * mediaItemsResponse;                //@synthesize mediaItemsResponse=_mediaItemsResponse - In the implementation block
@property (nonatomic,retain) TVHKMediaEntityFetchResponse * albumsResponse;                    //@synthesize albumsResponse=_albumsResponse - In the implementation block
@property (nonatomic,retain) TVHKMediaEntityFetchResponse * albumArtistsResponse;              //@synthesize albumArtistsResponse=_albumArtistsResponse - In the implementation block
-(unsigned long long)fromRevision;
-(void)setFromRevision:(unsigned long long)arg1 ;
-(unsigned long long)toRevision;
-(void)setToRevision:(unsigned long long)arg1 ;
-(void)setMediaItemsResponse:(TVHKMediaEntityFetchResponse *)arg1 ;
-(void)setAlbumsResponse:(TVHKMediaEntityFetchResponse *)arg1 ;
-(void)setAlbumArtistsResponse:(TVHKMediaEntityFetchResponse *)arg1 ;
-(TVHKMediaEntityFetchResponse *)mediaItemsResponse;
-(TVHKMediaEntityFetchResponse *)albumsResponse;
-(TVHKMediaEntityFetchResponse *)albumArtistsResponse;
-(id)init;
-(id)description;
@end

