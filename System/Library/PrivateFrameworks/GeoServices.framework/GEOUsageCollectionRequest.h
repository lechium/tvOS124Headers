/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, GEOABExperimentAssignment;

@interface GEOUsageCollectionRequest : PBRequest <NSCopying> {

	NSMutableArray* _abExperimentAssignments;
	GEOABExperimentAssignment* _tilesAbExperimentAssignment;
	NSMutableArray* _timeToLeaveHypothesisFeedbackCollections;
	NSMutableArray* _timeToLeaveInitialTravelTimeFeedbackCollections;

}

@property (nonatomic,retain) NSMutableArray * abExperimentAssignments;                                      //@synthesize abExperimentAssignments=_abExperimentAssignments - In the implementation block
@property (nonatomic,retain) NSMutableArray * timeToLeaveHypothesisFeedbackCollections;                     //@synthesize timeToLeaveHypothesisFeedbackCollections=_timeToLeaveHypothesisFeedbackCollections - In the implementation block
@property (nonatomic,retain) NSMutableArray * timeToLeaveInitialTravelTimeFeedbackCollections;              //@synthesize timeToLeaveInitialTravelTimeFeedbackCollections=_timeToLeaveInitialTravelTimeFeedbackCollections - In the implementation block
@property (nonatomic,readonly) BOOL hasTilesAbExperimentAssignment; 
@property (nonatomic,retain) GEOABExperimentAssignment * tilesAbExperimentAssignment;                       //@synthesize tilesAbExperimentAssignment=_tilesAbExperimentAssignment - In the implementation block
+(Class)abExperimentAssignmentType;
+(Class)timeToLeaveHypothesisFeedbackCollectionType;
+(Class)timeToLeaveInitialTravelTimeFeedbackCollectionType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setTilesAbExperimentAssignment:(GEOABExperimentAssignment *)arg1 ;
-(void)addAbExperimentAssignment:(id)arg1 ;
-(void)addTimeToLeaveHypothesisFeedbackCollection:(id)arg1 ;
-(void)addTimeToLeaveInitialTravelTimeFeedbackCollection:(id)arg1 ;
-(unsigned long long)abExperimentAssignmentsCount;
-(void)clearAbExperimentAssignments;
-(id)abExperimentAssignmentAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)timeToLeaveHypothesisFeedbackCollectionsCount;
-(void)clearTimeToLeaveHypothesisFeedbackCollections;
-(id)timeToLeaveHypothesisFeedbackCollectionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)timeToLeaveInitialTravelTimeFeedbackCollectionsCount;
-(void)clearTimeToLeaveInitialTravelTimeFeedbackCollections;
-(id)timeToLeaveInitialTravelTimeFeedbackCollectionAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasTilesAbExperimentAssignment;
-(NSMutableArray *)abExperimentAssignments;
-(void)setAbExperimentAssignments:(NSMutableArray *)arg1 ;
-(NSMutableArray *)timeToLeaveHypothesisFeedbackCollections;
-(void)setTimeToLeaveHypothesisFeedbackCollections:(NSMutableArray *)arg1 ;
-(NSMutableArray *)timeToLeaveInitialTravelTimeFeedbackCollections;
-(void)setTimeToLeaveInitialTravelTimeFeedbackCollections:(NSMutableArray *)arg1 ;
-(GEOABExperimentAssignment *)tilesAbExperimentAssignment;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

