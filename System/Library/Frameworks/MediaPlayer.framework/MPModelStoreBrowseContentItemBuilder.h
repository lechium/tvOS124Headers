/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPStoreModelObjectBuilder.h>

@class MPStoreModelAlbumBuilder, MPStoreModelArtistBuilder, MPStoreModelCuratorBuilder, MPStoreModelTVEpisodeBuilder, MPStoreModelMovieBuilder, MPStoreModelRadioStationBuilder, MPStoreModelSocialPersonBuilder, MPStoreModelPlaylistBuilder, MPStoreModelTVSeasonBuilder, MPStoreModelSongBuilder, MPStoreModelTVShowBuilder, MPStoreModelTVShowCreatorBuilder;

@interface MPModelStoreBrowseContentItemBuilder : MPStoreModelObjectBuilder {

	SCD_Struct_MP0 _requestedBrowseContentItemProperties;
	MPStoreModelAlbumBuilder* _albumBuilder;
	MPStoreModelArtistBuilder* _artistBuilder;
	MPStoreModelCuratorBuilder* _curatorBuilder;
	MPStoreModelTVEpisodeBuilder* _episodeBuilder;
	MPStoreModelMovieBuilder* _movieBuilder;
	MPStoreModelRadioStationBuilder* _radioStationBuilder;
	MPStoreModelSocialPersonBuilder* _socialPersonBuilder;
	MPStoreModelPlaylistBuilder* _playlistBuilder;
	MPStoreModelTVSeasonBuilder* _seasonBuilder;
	MPStoreModelSongBuilder* _songBuilder;
	MPStoreModelTVShowBuilder* _showBuilder;
	MPStoreModelTVShowCreatorBuilder* _showCreatorBuilder;
	BOOL _shouldFakeEpisodes;
	BOOL _allowsRadioStations;
	BOOL _allowsVideoContent;

}

@property (assign,nonatomic) BOOL allowsRadioStations;              //@synthesize allowsRadioStations=_allowsRadioStations - In the implementation block
@property (assign,nonatomic) BOOL allowsVideoContent;               //@synthesize allowsVideoContent=_allowsVideoContent - In the implementation block
+(id)allSupportedProperties;
-(id)initWithRequestedPropertySet:(id)arg1 ;
-(long long)contentItemTypeForRawResponseKindIdentifierValue:(long long)arg1 ;
-(long long)contentItemTypeForStoreItemMetadata:(id)arg1 ;
-(id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 ;
-(long long)contentItemTypeForRawResponseKindIdentifiers:(id)arg1 ;
-(BOOL)allowsRadioStations;
-(void)setAllowsRadioStations:(BOOL)arg1 ;
-(BOOL)allowsVideoContent;
-(void)setAllowsVideoContent:(BOOL)arg1 ;
@end

