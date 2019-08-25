/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMusicPlayerQueueDescriptor.h>

@class MPMediaQuery, MPMediaItemCollection, MPMediaItem;

@interface MPMusicPlayerMediaItemQueueDescriptor : MPMusicPlayerQueueDescriptor {

	MPMediaQuery* _query;
	MPMediaItemCollection* _itemCollection;
	MPMediaItem* _startItem;

}

@property (nonatomic,copy,readonly) MPMediaQuery * query; 
@property (nonatomic,readonly) MPMediaItemCollection * itemCollection; 
@property (nonatomic,retain) MPMediaItem * startItem;                               //@synthesize startItem=_startItem - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setStartItem:(MPMediaItem *)arg1 ;
-(id)initWithQuery:(id)arg1 ;
-(id)initWithItemCollection:(id)arg1 ;
-(void)setStartTime:(double)arg1 forItem:(id)arg2 ;
-(void)setEndTime:(double)arg1 forItem:(id)arg2 ;
-(MPMediaItemCollection *)itemCollection;
-(MPMediaItem *)startItem;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(MPMediaQuery *)query;
@end
