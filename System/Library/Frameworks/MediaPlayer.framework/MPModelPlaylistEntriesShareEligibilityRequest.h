/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPModelPlaylist;

@interface MPModelPlaylistEntriesShareEligibilityRequest : NSObject <NSCopying> {

	MPModelPlaylist* _playlist;

}

@property (nonatomic,readonly) MPModelPlaylist * playlist;              //@synthesize playlist=_playlist - In the implementation block
-(MPModelPlaylist *)playlist;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithPlaylist:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

