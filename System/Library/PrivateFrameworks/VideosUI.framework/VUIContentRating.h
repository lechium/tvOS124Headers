/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface VUIContentRating : NSObject <NSCopying> {

	long long _ratingSystem;
	NSString* _ratingLabel;
	unsigned long long _rank;
	NSString* _ratingDescription;

}

@property (assign,nonatomic) long long ratingSystem;                                       //@synthesize ratingSystem=_ratingSystem - In the implementation block
@property (nonatomic,copy) NSString * ratingLabel;                                         //@synthesize ratingLabel=_ratingLabel - In the implementation block
@property (assign,nonatomic) unsigned long long rank;                                      //@synthesize rank=_rank - In the implementation block
@property (nonatomic,copy) NSString * ratingDescription;                                   //@synthesize ratingDescription=_ratingDescription - In the implementation block
@property (getter=isExplicitContent,nonatomic,readonly) BOOL explicitContent; 
@property (nonatomic,copy,readonly) NSString * stringRepresentation; 
-(unsigned long long)rank;
-(void)setRank:(unsigned long long)arg1 ;
-(BOOL)isExplicitContent;
-(NSString *)ratingDescription;
-(void)setRatingDescription:(NSString *)arg1 ;
-(NSString *)ratingLabel;
-(void)setRatingLabel:(NSString *)arg1 ;
-(long long)ratingSystem;
-(void)setRatingSystem:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringRepresentation;
-(id)initWithRatingSystemString:(id)arg1 ratingLabel:(id)arg2 rank:(unsigned long long)arg3 ratingDescription:(id)arg4 ;
-(id)_initWithRatingSystem:(long long)arg1 ratingLabel:(id)arg2 rank:(unsigned long long)arg3 ratingDescription:(id)arg4 ;
-(id)initWithRatingSystem:(long long)arg1 explicitContent:(BOOL)arg2 ;
-(id)initWithStringRepresentation:(id)arg1 ;
@end

