/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelSongPlaybackItemMetadata.h>

@class MPModelGenericObject, MPModelTVEpisode;

@interface MPModelTVEpisodePlaybackItemMetadata : MPModelSongPlaybackItemMetadata {

	MPModelGenericObject* _modelGenericObject;
	MPModelTVEpisode* _episode;

}

@property (nonatomic,retain) MPModelTVEpisode * episode;              //@synthesize episode=_episode - In the implementation block
+(id)requiredProperties;
-(MPModelTVEpisode *)episode;
-(void)setEpisode:(MPModelTVEpisode *)arg1 ;
-(id)mediaItem;
-(id)artworkCatalogForPlaybackTime:(double)arg1 ;
-(long long)storeSubscriptionAdamID;
-(BOOL)isExplicitTrack;
-(id)modelGenericObject;
-(id)storeAsset;
-(id)localFileAsset;
-(id)playbackPosition;
-(id)artistName;
-(long long)storeAdamID;
-(void)_invalidateModelObjectPlaybackItemMetadata;
-(id)albumArtistName;
-(long long)albumStoreAdamID;
-(BOOL)allowsInitiatingPlayWhileDownload;
-(long long)artistStoreAdamID;
-(id)contentTitle;
-(double)expectedDuration;
-(unsigned long long)storeSagaID;
-(id)albumTitle;
-(unsigned long long)contentType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

