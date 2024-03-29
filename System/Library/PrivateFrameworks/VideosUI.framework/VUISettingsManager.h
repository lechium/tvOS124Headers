/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString;

@interface VUISettingsManager : NSObject {

	NSNumber* _maxMovieRank;
	NSNumber* _maxTVShowRank;
	NSString* _preferredVideoFormat;

}

@property (nonatomic,readonly) NSString * restrictions; 
@property (nonatomic,copy) NSString * preferredVideoFormat;              //@synthesize preferredVideoFormat=_preferredVideoFormat - In the implementation block
@property (nonatomic,copy) NSNumber * maxMovieRank;                      //@synthesize maxMovieRank=_maxMovieRank - In the implementation block
@property (nonatomic,copy) NSNumber * maxTVShowRank;                     //@synthesize maxTVShowRank=_maxTVShowRank - In the implementation block
+(id)sharedInstance;
-(NSString *)restrictions;
-(id)init;
-(id)_init;
-(NSString *)preferredVideoFormat;
-(id)_restrictionsMaximumEffectiveMovieRanking;
-(id)_restrictionsMaximumEffectiveTVShowRanking;
-(unsigned long long)_preferredVideoFormat;
-(id)_formatStringForVideoFormat:(unsigned long long)arg1 ;
-(BOOL)_hasRestrictionsChanged;
-(BOOL)_hasPreferredVideoFormatChanged;
-(void)_sendSettingsValuesToJS;
-(NSNumber *)maxMovieRank;
-(NSNumber *)maxTVShowRank;
-(id)preferencesJSONData;
-(long long)_resolutionFromString:(id)arg1 defaultResolution:(long long)arg2 ;
-(void)checkAndUpdateSettings;
-(void)setMaxMovieRank:(NSNumber *)arg1 ;
-(void)setMaxTVShowRank:(NSNumber *)arg1 ;
-(void)setPreferredVideoFormat:(NSString *)arg1 ;
@end

