/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TVPMediaItemAdvisoryInfo : NSObject {

	NSString* _ratingName;
	NSString* _ratingDescription;

}

@property (nonatomic,retain) NSString * ratingName;                       //@synthesize ratingName=_ratingName - In the implementation block
@property (nonatomic,readonly) NSString * ratingDescription;              //@synthesize ratingDescription=_ratingDescription - In the implementation block
-(NSString *)ratingDescription;
-(id)description;
-(NSString *)ratingName;
-(id)initWithRatingDescription:(id)arg1 ;
-(void)setRatingName:(NSString *)arg1 ;
@end

