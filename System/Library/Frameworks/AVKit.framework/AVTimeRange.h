/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, AVInterstitialTimeRange;

@interface AVTimeRange : NSObject <NSCopying> {

	double _startTime;
	double _duration;
	NSDate* _startDate;

}

@property (readonly) AVInterstitialTimeRange * interstice; 
@property (getter=isHidden,readonly) BOOL hidden; 
@property (getter=isSkipped,readonly) BOOL skipped; 
@property (getter=isCollapsedInTimeLine,readonly) BOOL collapsedInTimeLine; 
@property (readonly) SCD_Struct_AV1 startCMTime; 
@property (readonly) SCD_Struct_AV1 endCMTime; 
@property (nonatomic,retain) NSDate * startDate;                                         //@synthesize startDate=_startDate - In the implementation block
@property (readonly) double startTime;                                                   //@synthesize startTime=_startTime - In the implementation block
@property (readonly) double duration;                                                    //@synthesize duration=_duration - In the implementation block
@property (readonly) double endTime; 
+(id)timeRangeZero;
+(id)timeRangeWithInterstice:(id)arg1 ;
-(BOOL)containsDate:(id)arg1 ;
-(NSDate *)startDate;
-(id)endDate;
-(double)endTime;
-(id)initWithStartTime:(double)arg1 endTime:(double)arg2 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)initWithAVTimedMetadataGroup:(id)arg1 ;
-(id)initWithUnionOfCMTimeRanges:(id)arg1 ;
-(void)setMapTime:(double)arg1 toDate:(id)arg2 ;
-(id)dateForTime:(double)arg1 ;
-(double)timeForDate:(id)arg1 ;
-(SCD_Struct_AV1)startCMTime;
-(SCD_Struct_AV1)endCMTime;
-(SCD_Struct_AV5)cmTimeRange;
-(double)deltaTimeFromOutsideTime:(double)arg1 ;
-(double)pinnedTime:(double)arg1 ;
-(id)timeRangeIntersectingWithTimeRange:(id)arg1 ;
-(id)timeRangeExcludingTimeRange:(id)arg1 ;
-(id)timeRangeByAddingTimeInterval:(double)arg1 shiftingDates:(BOOL)arg2 ;
-(id)timeRangeByAddingTimeInterval:(double)arg1 ;
-(BOOL)isEqualToTimeRange:(id)arg1 ;
-(AVInterstitialTimeRange *)interstice;
-(BOOL)isSkipped;
-(BOOL)isCollapsedInTimeLine;
-(id)initWithCMTimeRange:(SCD_Struct_AV5)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isHidden;
-(double)startTime;
-(double)duration;
-(long long)compare:(id)arg1 ;
-(id)initWithStartTime:(double)arg1 duration:(double)arg2 ;
-(BOOL)containsTime:(double)arg1 ;
@end

