/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKBasicContentMetadata.h>

@class NSString, WLKRottenTomatoesRating, WLKMovieContentRating, NSDate;

@interface WLKBasicMovieMetadata : WLKBasicContentMetadata {

	NSString* _studio;
	WLKRottenTomatoesRating* _rottenTomatoesRating;
	WLKMovieContentRating* _contentRating;
	double _duration;
	NSDate* _releaseDate;

}

@property (nonatomic,copy,readonly) NSString * studio;                                      //@synthesize studio=_studio - In the implementation block
@property (nonatomic,readonly) WLKRottenTomatoesRating * rottenTomatoesRating;              //@synthesize rottenTomatoesRating=_rottenTomatoesRating - In the implementation block
@property (nonatomic,readonly) WLKMovieContentRating * contentRating;                       //@synthesize contentRating=_contentRating - In the implementation block
@property (nonatomic,readonly) double duration;                                             //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) NSDate * releaseDate;                                        //@synthesize releaseDate=_releaseDate - In the implementation block
-(NSDate *)releaseDate;
-(WLKRottenTomatoesRating *)rottenTomatoesRating;
-(double)duration;
-(id)initWithDictionary:(id)arg1 ;
-(WLKMovieContentRating *)contentRating;
-(NSString *)studio;
@end

