/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVPlaylist.h>

@class TVPPlaylist;

@interface _TVMLPlaylist : TVPlaylist {

	TVPPlaylist* _tvpObject;

}

@property (nonatomic,readonly) TVPPlaylist * tvpObject;              //@synthesize tvpObject=_tvpObject - In the implementation block
+(long long)_tvpPlaylistEndActionForTVPlaylistEndAction:(long long)arg1 ;
+(long long)_tvpPlaylistRepeatModeForTVPlaylistRepeatMode:(long long)arg1 ;
-(void)insertObjects:(id)arg1 atIndexes:(id)arg2 ;
-(void)setRepeatMode:(long long)arg1 ;
-(TVPPlaylist *)tvpObject;
-(void)setEndAction:(long long)arg1 ;
-(id)init;
-(void)removeObjectsAtIndexes:(id)arg1 ;
@end
