/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSNumber, NSDate;

@interface VUIContentMetadata : NSObject {

	NSDictionary* _metadataDictionary;
	NSDictionary* _contentTypeMap;

}

@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) unsigned long long contentType; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * mediaDescription; 
@property (nonatomic,readonly) NSString * artworkURLFormat; 
@property (nonatomic,readonly) NSNumber * artworkWidth; 
@property (nonatomic,readonly) NSNumber * artworkHeight; 
@property (nonatomic,readonly) NSString * previewFrameURLFormat; 
@property (nonatomic,readonly) NSNumber * previewFrameWidth; 
@property (nonatomic,readonly) NSNumber * previewFrameHeight; 
@property (nonatomic,readonly) NSString * showArtworkURLFormat; 
@property (nonatomic,readonly) NSNumber * showArtworkWidth; 
@property (nonatomic,readonly) NSNumber * showArtworkHeight; 
@property (nonatomic,readonly) NSString * ratingName; 
@property (nonatomic,readonly) NSString * ratingSystem; 
@property (nonatomic,readonly) NSDate * releasedDate; 
@property (nonatomic,readonly) NSString * formattedReleaseDate; 
@property (nonatomic,readonly) NSDate * rentalExpiration; 
@property (nonatomic,readonly) NSString * genre; 
@property (nonatomic,readonly) NSNumber * duration; 
@property (nonatomic,readonly) NSNumber * tomatoPercentage; 
@property (nonatomic,readonly) unsigned long long tomatoFreshness; 
@property (nonatomic,readonly) NSNumber * commonSenseRecommendedAge; 
@property (nonatomic,readonly) NSNumber * videoResolutionClass; 
@property (nonatomic,readonly) NSNumber * videoDynamicRange; 
@property (nonatomic,readonly) NSNumber * hasClosedCaptions; 
@property (nonatomic,readonly) NSNumber * hasADLocales; 
@property (nonatomic,readonly) NSNumber * hasSDHLocales; 
@property (nonatomic,readonly) NSNumber * hasDolbyAtmos; 
@property (nonatomic,readonly) NSString * showTitle; 
@property (nonatomic,readonly) NSString * seasonTitle; 
@property (nonatomic,readonly) NSNumber * seasonNumber; 
@property (nonatomic,readonly) NSNumber * episodeNumber; 
@property (nonatomic,readonly) BOOL isAdultContent; 
@property (nonatomic,readonly) NSNumber * ratingValue; 
-(NSString *)genre;
-(NSNumber *)seasonNumber;
-(NSNumber *)episodeNumber;
-(NSString *)ratingSystem;
-(NSString *)showTitle;
-(unsigned long long)contentType;
-(NSString *)title;
-(NSString *)type;
-(NSNumber *)duration;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)mediaDescription;
-(NSString *)formattedReleaseDate;
-(NSDate *)releasedDate;
-(NSNumber *)hasClosedCaptions;
-(NSNumber *)hasADLocales;
-(NSNumber *)hasSDHLocales;
-(NSNumber *)tomatoPercentage;
-(NSNumber *)commonSenseRecommendedAge;
-(NSString *)ratingName;
-(NSNumber *)ratingValue;
-(unsigned long long)tomatoFreshness;
-(NSNumber *)videoDynamicRange;
-(NSNumber *)videoResolutionClass;
-(NSNumber *)hasDolbyAtmos;
-(NSDate *)rentalExpiration;
-(BOOL)isAdultContent;
-(NSString *)artworkURLFormat;
-(NSNumber *)artworkWidth;
-(NSNumber *)artworkHeight;
-(NSString *)previewFrameURLFormat;
-(NSNumber *)previewFrameWidth;
-(NSNumber *)previewFrameHeight;
-(NSString *)seasonTitle;
-(NSString *)showArtworkURLFormat;
-(NSNumber *)showArtworkWidth;
-(NSNumber *)showArtworkHeight;
@end

