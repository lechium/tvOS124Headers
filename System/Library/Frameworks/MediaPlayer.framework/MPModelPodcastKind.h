/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelKind.h>

@class MPModelPodcastEpisodeKind;

@interface MPModelPodcastKind : MPModelKind {

	MPModelPodcastEpisodeKind* _episodeKind;

}

@property (nonatomic,readonly) MPModelPodcastEpisodeKind * episodeKind;              //@synthesize episodeKind=_episodeKind - In the implementation block
+(id)kindWithEpisodeKind:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)humanDescription;
-(MPModelPodcastEpisodeKind *)episodeKind;
-(void)applyToView:(shared_ptr<mlcore::LibraryView>*)arg1 withContext:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
