/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHKMediaEntity.h>

@class NSString, TVHKMediaEntityIdentifier, NSNumber, TVPContentRating, NSValue, TVHKGaplessConfiguration, NSDate, TVHKVideoCredits;

@interface TVHKMediaItem : TVHKMediaEntity

@property (nonatomic,copy,readonly) NSString * artistTitle; 
@property (nonatomic,copy,readonly) NSString * sortArtistTitle; 
@property (nonatomic,copy,readonly) NSString * albumArtistTitle; 
@property (nonatomic,copy,readonly) NSString * sortAlbumArtistTitle; 
@property (nonatomic,copy,readonly) TVHKMediaEntityIdentifier * albumArtistIdentifier; 
@property (nonatomic,copy,readonly) NSString * composerTitle; 
@property (nonatomic,copy,readonly) NSString * sortComposerTitle; 
@property (nonatomic,copy,readonly) NSString * showTitle; 
@property (nonatomic,copy,readonly) NSString * sortShowTitle; 
@property (nonatomic,copy,readonly) TVHKMediaEntityIdentifier * showIdentifier; 
@property (nonatomic,copy,readonly) NSNumber * episodeNumber; 
@property (nonatomic,copy,readonly) NSNumber * discNumber; 
@property (nonatomic,copy,readonly) NSNumber * trackNumber; 
@property (nonatomic,copy,readonly) NSNumber * videoQuality; 
@property (nonatomic,readonly) TVPContentRating * contentRating; 
@property (nonatomic,copy,readonly) NSString * format; 
@property (nonatomic,copy,readonly) NSValue * dimensions; 
@property (nonatomic,copy,readonly) NSNumber * storeID; 
@property (nonatomic,copy,readonly) NSNumber * storefrontID; 
@property (nonatomic,copy,readonly) NSNumber * startTime; 
@property (nonatomic,copy,readonly) NSNumber * stopTime; 
@property (nonatomic,copy,readonly) NSNumber * volumeNormalization; 
@property (nonatomic,readonly) TVHKGaplessConfiguration * gaplessConfiguration; 
@property (nonatomic,copy,readonly) NSDate * creationDate; 
@property (nonatomic,copy,readonly) NSDate * modifiedDate; 
@property (nonatomic,copy,readonly) NSDate * lastPlayedDate; 
@property (nonatomic,copy) NSDate * expirationDate; 
@property (nonatomic,copy) NSDate * rentalPlaybackStartDate; 
@property (nonatomic,copy) NSNumber * hasBeenPlayed; 
@property (nonatomic,copy) NSNumber * playCount; 
@property (nonatomic,copy) NSNumber * skipCount; 
@property (nonatomic,readonly) BOOL supportsBookmark; 
@property (nonatomic,copy) NSNumber * bookmark; 
@property (nonatomic,copy,readonly) NSNumber * DRMKeyID; 
@property (nonatomic,copy,readonly) NSNumber * DRMUserID; 
@property (nonatomic,copy,readonly) NSString * studio; 
@property (nonatomic,readonly) TVHKVideoCredits * videoCredits; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)keyPathsForValuesAffectingPlayedState;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(NSDate *)creationDate;
-(NSNumber *)storeID;
-(void)setPlayCount:(NSNumber *)arg1 ;
-(NSNumber *)stopTime;
-(NSNumber *)discNumber;
-(id)releaseDate;
-(NSNumber *)trackNumber;
-(NSNumber *)volumeNormalization;
-(void)setHasBeenPlayed:(NSNumber *)arg1 ;
-(NSDate *)lastPlayedDate;
-(NSNumber *)skipCount;
-(void)setSkipCount:(NSNumber *)arg1 ;
-(NSNumber *)hasBeenPlayed;
-(NSNumber *)episodeNumber;
-(NSDate *)modifiedDate;
-(NSNumber *)playCount;
-(NSString *)showTitle;
-(NSNumber *)storefrontID;
-(TVHKMediaEntityIdentifier *)albumArtistIdentifier;
-(TVHKGaplessConfiguration *)gaplessConfiguration;
-(BOOL)supportsBookmark;
-(NSNumber *)DRMKeyID;
-(TVHKVideoCredits *)videoCredits;
-(NSString *)albumArtistTitle;
-(id)metadataKeyPaths;
-(NSString *)artistTitle;
-(NSNumber *)DRMUserID;
-(NSString *)composerTitle;
-(NSString *)sortArtistTitle;
-(NSString *)sortAlbumArtistTitle;
-(NSString *)sortComposerTitle;
-(NSString *)sortShowTitle;
-(id)description;
-(NSNumber *)startTime;
-(NSNumber *)videoQuality;
-(NSString *)format;
-(NSValue *)dimensions;
-(NSDate *)rentalPlaybackStartDate;
-(void)setRentalPlaybackStartDate:(NSDate *)arg1 ;
-(TVPContentRating *)contentRating;
-(NSString *)studio;
-(NSNumber *)bookmark;
-(void)setBookmark:(NSNumber *)arg1 ;
-(long long)playedState;
-(TVHKMediaEntityIdentifier *)showIdentifier;
-(void)setPlayedState:(long long)arg1 ;
@end

