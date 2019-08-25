/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVContentPartnerKitUI/TVCKBookmarkKey.h>

@class TVCKPodcastGUID, NSURL;

@interface TVCKPodcastBookmarkKey : TVCKBookmarkKey {

	TVCKPodcastGUID* _podcastEpisodeGUID;
	NSURL* _podcastFeedURL;

}

@property (nonatomic,readonly) TVCKPodcastGUID * podcastEpisodeGUID;              //@synthesize podcastEpisodeGUID=_podcastEpisodeGUID - In the implementation block
@property (nonatomic,readonly) NSURL * podcastFeedURL;                            //@synthesize podcastFeedURL=_podcastFeedURL - In the implementation block
+(id)podcastIdentifierWithURL:(id)arg1 guid:(id)arg2 defaultIdentifer:(id)arg3 ;
+(BOOL)supportsSecureCoding;
-(NSURL *)podcastFeedURL;
-(TVCKPodcastGUID *)podcastEpisodeGUID;
-(id)initWithIdentifier:(id)arg1 mediaType:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 podcastEpisodeGUID:(id)arg2 podcastFeedURL:(id)arg3 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

