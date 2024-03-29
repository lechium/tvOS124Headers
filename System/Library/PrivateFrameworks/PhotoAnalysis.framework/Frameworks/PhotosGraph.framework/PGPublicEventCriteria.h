/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface PGPublicEventCriteria : NSObject {

	BOOL _allowsExpandingTimeAttendance;
	NSString* _eventCategory;
	double _minimumTimeAttendance;
	double _maximumDistance;
	long long _minimumAttendance;
	NSArray* _disambiguationCriteria;
	NSArray* _highConfidenceCriteria;
	NSArray* _prohibitedCriteria;

}

@property (nonatomic,retain) NSString * eventCategory;                        //@synthesize eventCategory=_eventCategory - In the implementation block
@property (assign,nonatomic) double minimumTimeAttendance;                    //@synthesize minimumTimeAttendance=_minimumTimeAttendance - In the implementation block
@property (assign,nonatomic) double maximumDistance;                          //@synthesize maximumDistance=_maximumDistance - In the implementation block
@property (assign,nonatomic) BOOL allowsExpandingTimeAttendance;              //@synthesize allowsExpandingTimeAttendance=_allowsExpandingTimeAttendance - In the implementation block
@property (assign,nonatomic) long long minimumAttendance;                     //@synthesize minimumAttendance=_minimumAttendance - In the implementation block
@property (nonatomic,retain) NSArray * disambiguationCriteria;                //@synthesize disambiguationCriteria=_disambiguationCriteria - In the implementation block
@property (nonatomic,retain) NSArray * highConfidenceCriteria;                //@synthesize highConfidenceCriteria=_highConfidenceCriteria - In the implementation block
@property (nonatomic,retain) NSArray * prohibitedCriteria;                    //@synthesize prohibitedCriteria=_prohibitedCriteria - In the implementation block
@property (nonatomic,readonly) BOOL hasMinimumAttendance; 
-(double)maximumDistance;
-(void)setMaximumDistance:(double)arg1 ;
-(BOOL)isMatchingEvent:(id)arg1 matchingOptions:(id)arg2 withHighConfidence:(BOOL*)arg3 matchingDistance:(double*)arg4 ;
-(double)minimumTimeAttendance;
-(BOOL)allowsExpandingTimeAttendance;
-(NSArray *)prohibitedCriteria;
-(NSArray *)disambiguationCriteria;
-(NSArray *)highConfidenceCriteria;
-(BOOL)hasMinimumAttendance;
-(long long)minimumAttendance;
-(BOOL)_hasSufficientTimeOverlapForEvent:(id)arg1 matchingOptions:(id)arg2 ;
-(BOOL)_isMatchingMeaningDisambiguationForEvent:(id)arg1 matchingOptions:(id)arg2 withHighConfidence:(BOOL*)arg3 ;
-(NSString *)eventCategory;
-(void)setEventCategory:(NSString *)arg1 ;
-(void)setMinimumTimeAttendance:(double)arg1 ;
-(void)setMinimumAttendance:(long long)arg1 ;
-(void)setAllowsExpandingTimeAttendance:(BOOL)arg1 ;
-(void)setDisambiguationCriteria:(NSArray *)arg1 ;
-(void)setHighConfidenceCriteria:(NSArray *)arg1 ;
-(void)setProhibitedCriteria:(NSArray *)arg1 ;
@end

