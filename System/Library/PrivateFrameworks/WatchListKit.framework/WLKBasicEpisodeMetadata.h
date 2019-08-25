/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKBasicContentMetadata.h>

@class NSString, NSNumber, NSDate, WLKArtworkVariantListing, WLKShowContentRating, WLKPlayable;

@interface WLKBasicEpisodeMetadata : WLKBasicContentMetadata {

	NSString* _showTitle;
	NSString* _canonicalShowID;
	NSString* _canonicalSeasonID;
	NSNumber* _seasonNumber;
	NSNumber* _episodeNumber;
	double _duration;
	NSDate* _releaseDate;
	WLKArtworkVariantListing* _showImages;
	WLKArtworkVariantListing* _seasonImages;
	WLKShowContentRating* _contentRating;
	WLKPlayable* _playable;

}

@property (nonatomic,copy,readonly) NSString * showTitle;                            //@synthesize showTitle=_showTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * canonicalShowID;                      //@synthesize canonicalShowID=_canonicalShowID - In the implementation block
@property (nonatomic,copy,readonly) NSString * canonicalSeasonID;                    //@synthesize canonicalSeasonID=_canonicalSeasonID - In the implementation block
@property (nonatomic,readonly) NSNumber * seasonNumber;                              //@synthesize seasonNumber=_seasonNumber - In the implementation block
@property (nonatomic,readonly) NSNumber * episodeNumber;                             //@synthesize episodeNumber=_episodeNumber - In the implementation block
@property (nonatomic,readonly) double duration;                                      //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) NSDate * releaseDate;                                 //@synthesize releaseDate=_releaseDate - In the implementation block
@property (nonatomic,readonly) WLKArtworkVariantListing * showImages;                //@synthesize showImages=_showImages - In the implementation block
@property (nonatomic,readonly) WLKArtworkVariantListing * seasonImages;              //@synthesize seasonImages=_seasonImages - In the implementation block
@property (nonatomic,readonly) WLKShowContentRating * contentRating;                 //@synthesize contentRating=_contentRating - In the implementation block
@property (nonatomic,readonly) WLKPlayable * playable;                               //@synthesize playable=_playable - In the implementation block
+(id)episodesWithDictionaries:(id)arg1 context:(id)arg2 ;
-(id)initWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSDate *)releaseDate;
-(NSNumber *)seasonNumber;
-(NSNumber *)episodeNumber;
-(NSString *)showTitle;
-(NSString *)canonicalShowID;
-(NSString *)canonicalSeasonID;
-(WLKArtworkVariantListing *)showImages;
-(WLKArtworkVariantListing *)seasonImages;
-(WLKPlayable *)playable;
-(double)duration;
-(id)initWithDictionary:(id)arg1 ;
-(WLKShowContentRating *)contentRating;
@end

