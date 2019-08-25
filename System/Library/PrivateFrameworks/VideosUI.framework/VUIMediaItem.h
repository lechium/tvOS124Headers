/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIMediaEntity.h>

@class NSNumber, MPMediaItem, NSString, NSURL, VUIMediaItemCredits, NSDate;

@interface VUIMediaItem : VUIMediaEntity {

	NSNumber* _isPlayable;

}

@property (nonatomic,readonly) MPMediaItem * mediaPlayerMediaItem; 
@property (nonatomic,copy,readonly) NSNumber * assetType; 
@property (nonatomic,copy,readonly) NSNumber * isPlayable;                                             //@synthesize isPlayable=_isPlayable - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * duration; 
@property (nonatomic,copy,readonly) NSString * previewFrameImageIdentifier; 
@property (nonatomic,copy,readonly) NSURL * extrasURL; 
@property (nonatomic,copy,readonly) NSString * seasonTitle; 
@property (nonatomic,copy,readonly) NSObject*<VUIMediaEntityIdentifier> seasonIdentifier; 
@property (nonatomic,copy,readonly) NSNumber * episodeNumber; 
@property (nonatomic,copy,readonly) NSString * studio; 
@property (nonatomic,copy,readonly) VUIMediaItemCredits * credits; 
@property (nonatomic,copy,readonly) NSNumber * rentalPlaybackDuration; 
@property (nonatomic,copy,readonly) NSDate * rentalExpirationDate; 
@property (nonatomic,copy,readonly) NSDate * downloadExpirationDate; 
@property (nonatomic,copy) NSNumber * hasBeenPlayed; 
@property (nonatomic,copy) NSNumber * playCount; 
@property (nonatomic,copy) NSNumber * bookmark; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)_mediaItemWithMPMediaItem:(id)arg1 ;
+(id)keyPathsForValuesAffectingPlayedState;
-(id)creationDate;
-(void)setPlayCount:(NSNumber *)arg1 ;
-(NSNumber *)isPlayable;
-(NSNumber *)assetType;
-(void)setHasBeenPlayed:(NSNumber *)arg1 ;
-(id)lastPlayedDate;
-(NSNumber *)hasBeenPlayed;
-(NSNumber *)episodeNumber;
-(VUIMediaItemCredits *)credits;
-(id)modifiedDate;
-(NSNumber *)playCount;
-(id)description;
-(NSNumber *)duration;
-(MPMediaItem *)mediaPlayerMediaItem;
-(NSDate *)rentalExpirationDate;
-(NSURL *)extrasURL;
-(NSString *)studio;
-(NSNumber *)rentalPlaybackDuration;
-(NSNumber *)bookmark;
-(NSString *)previewFrameImageIdentifier;
-(NSObject*<VUIMediaEntityIdentifier>)seasonIdentifier;
-(NSString *)seasonTitle;
-(void)setBookmark:(NSNumber *)arg1 ;
-(NSDate *)downloadExpirationDate;
@end

