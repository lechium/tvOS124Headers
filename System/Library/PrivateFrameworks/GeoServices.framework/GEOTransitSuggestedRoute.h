/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOTransitRouteDisplayStrings, NSData, NSMutableArray, GEOPBTransitRoutingIncidentMessage;

@interface GEOTransitSuggestedRoute : PBCodable <NSCopying> {

	SCD_Struct_GE2* _routeBadges;
	unsigned _absEndTime;
	unsigned _absStartTime;
	GEOTransitRouteDisplayStrings* _displayStrings;
	unsigned _rank;
	NSData* _routeHandle;
	NSMutableArray* _routePlanningArtworks;
	NSMutableArray* _sectionOptions;
	NSMutableArray* _sections;
	NSMutableArray* _steps;
	GEOPBTransitRoutingIncidentMessage* _transitIncidentMessage;
	unsigned _travelTimeAggressiveEstimate;
	unsigned _travelTimeConservativeEstimate;
	SCD_Struct_GE87 _has;

}

@property (getter=isWalkingOnlyRoute,nonatomic,readonly) BOOL walkingOnlyRoute; 
@property (assign,nonatomic) BOOL hasAbsStartTime; 
@property (assign,nonatomic) unsigned absStartTime;                                                    //@synthesize absStartTime=_absStartTime - In the implementation block
@property (assign,nonatomic) BOOL hasAbsEndTime; 
@property (assign,nonatomic) unsigned absEndTime;                                                      //@synthesize absEndTime=_absEndTime - In the implementation block
@property (nonatomic,retain) NSMutableArray * steps;                                                   //@synthesize steps=_steps - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteHandle; 
@property (nonatomic,retain) NSData * routeHandle;                                                     //@synthesize routeHandle=_routeHandle - In the implementation block
@property (assign,nonatomic) BOOL hasRank; 
@property (assign,nonatomic) unsigned rank;                                                            //@synthesize rank=_rank - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitIncidentMessage; 
@property (nonatomic,retain) GEOPBTransitRoutingIncidentMessage * transitIncidentMessage;              //@synthesize transitIncidentMessage=_transitIncidentMessage - In the implementation block
@property (nonatomic,retain) NSMutableArray * routePlanningArtworks;                                   //@synthesize routePlanningArtworks=_routePlanningArtworks - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayStrings; 
@property (nonatomic,retain) GEOTransitRouteDisplayStrings * displayStrings;                           //@synthesize displayStrings=_displayStrings - In the implementation block
@property (nonatomic,readonly) unsigned long long routeBadgesCount; 
@property (nonatomic,readonly) int* routeBadges; 
@property (nonatomic,retain) NSMutableArray * sectionOptions;                                          //@synthesize sectionOptions=_sectionOptions - In the implementation block
@property (nonatomic,retain) NSMutableArray * sections;                                                //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) BOOL hasTravelTimeAggressiveEstimate; 
@property (assign,nonatomic) unsigned travelTimeAggressiveEstimate;                                    //@synthesize travelTimeAggressiveEstimate=_travelTimeAggressiveEstimate - In the implementation block
@property (assign,nonatomic) BOOL hasTravelTimeConservativeEstimate; 
@property (assign,nonatomic) unsigned travelTimeConservativeEstimate;                                  //@synthesize travelTimeConservativeEstimate=_travelTimeConservativeEstimate - In the implementation block
+(Class)stepsType;
+(Class)routePlanningArtworkType;
+(Class)sectionOptionType;
+(Class)sectionType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)sectionsCount;
-(void)clearSections;
-(unsigned long long)stepsCount;
-(id)stepsAtIndex:(unsigned long long)arg1 ;
-(GEOPBTransitRoutingIncidentMessage *)transitIncidentMessage;
-(void)setRouteHandle:(NSData *)arg1 ;
-(BOOL)hasRouteHandle;
-(NSData *)routeHandle;
-(void)setTransitIncidentMessage:(GEOPBTransitRoutingIncidentMessage *)arg1 ;
-(BOOL)hasTransitIncidentMessage;
-(void)clearSteps;
-(void)setTravelTimeAggressiveEstimate:(unsigned)arg1 ;
-(void)setHasTravelTimeAggressiveEstimate:(BOOL)arg1 ;
-(BOOL)hasTravelTimeAggressiveEstimate;
-(void)setTravelTimeConservativeEstimate:(unsigned)arg1 ;
-(void)setHasTravelTimeConservativeEstimate:(BOOL)arg1 ;
-(BOOL)hasTravelTimeConservativeEstimate;
-(NSMutableArray *)steps;
-(void)setSteps:(NSMutableArray *)arg1 ;
-(unsigned)travelTimeAggressiveEstimate;
-(unsigned)travelTimeConservativeEstimate;
-(GEOTransitRouteDisplayStrings *)displayStrings;
-(BOOL)hasAbsStartTime;
-(unsigned)absStartTime;
-(unsigned)absEndTime;
-(NSMutableArray *)routePlanningArtworks;
-(unsigned long long)sectionOptionsCount;
-(id)sectionAtIndex:(unsigned long long)arg1 ;
-(id)sectionOptionAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)sectionOptions;
-(void)addSection:(id)arg1 ;
-(void)setAbsStartTime:(unsigned)arg1 ;
-(void)setHasAbsStartTime:(BOOL)arg1 ;
-(void)setAbsEndTime:(unsigned)arg1 ;
-(void)setHasAbsEndTime:(BOOL)arg1 ;
-(BOOL)hasAbsEndTime;
-(BOOL)isWalkingOnlyRoute;
-(BOOL)hasRank;
-(unsigned)rank;
-(void)addSteps:(id)arg1 ;
-(void)addRoutePlanningArtwork:(id)arg1 ;
-(void)addSectionOption:(id)arg1 ;
-(unsigned long long)routePlanningArtworksCount;
-(void)clearRoutePlanningArtworks;
-(id)routePlanningArtworkAtIndex:(unsigned long long)arg1 ;
-(void)setDisplayStrings:(GEOTransitRouteDisplayStrings *)arg1 ;
-(unsigned long long)routeBadgesCount;
-(void)clearRouteBadges;
-(int)routeBadgeAtIndex:(unsigned long long)arg1 ;
-(void)addRouteBadge:(int)arg1 ;
-(void)clearSectionOptions;
-(void)setRank:(unsigned)arg1 ;
-(void)setHasRank:(BOOL)arg1 ;
-(BOOL)hasDisplayStrings;
-(int*)routeBadges;
-(void)setRouteBadges:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)routeBadgesAsString:(int)arg1 ;
-(int)StringAsRouteBadges:(id)arg1 ;
-(void)setRoutePlanningArtworks:(NSMutableArray *)arg1 ;
-(void)setSectionOptions:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)sections;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSections:(NSMutableArray *)arg1 ;
@end

