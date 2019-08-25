/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOTransitDecoderData : PBCodable <NSCopying> {

	NSMutableArray* _accessPoints;
	NSMutableArray* _artworks;
	NSMutableArray* _halls;
	NSMutableArray* _lines;
	NSMutableArray* _stations;
	NSMutableArray* _steps;
	NSMutableArray* _stops;
	NSMutableArray* _systems;
	NSMutableArray* _transitIncidentMessages;
	NSMutableArray* _transitIncidents;
	NSMutableArray* _walkings;
	NSMutableArray* _zilchPoints;

}

@property (nonatomic,retain) NSMutableArray * stations;                             //@synthesize stations=_stations - In the implementation block
@property (nonatomic,retain) NSMutableArray * lines;                                //@synthesize lines=_lines - In the implementation block
@property (nonatomic,retain) NSMutableArray * accessPoints;                         //@synthesize accessPoints=_accessPoints - In the implementation block
@property (nonatomic,retain) NSMutableArray * walkings;                             //@synthesize walkings=_walkings - In the implementation block
@property (nonatomic,retain) NSMutableArray * stops;                                //@synthesize stops=_stops - In the implementation block
@property (nonatomic,retain) NSMutableArray * zilchPoints;                          //@synthesize zilchPoints=_zilchPoints - In the implementation block
@property (nonatomic,retain) NSMutableArray * systems;                              //@synthesize systems=_systems - In the implementation block
@property (nonatomic,retain) NSMutableArray * transitIncidents;                     //@synthesize transitIncidents=_transitIncidents - In the implementation block
@property (nonatomic,retain) NSMutableArray * halls;                                //@synthesize halls=_halls - In the implementation block
@property (nonatomic,retain) NSMutableArray * artworks;                             //@synthesize artworks=_artworks - In the implementation block
@property (nonatomic,retain) NSMutableArray * transitIncidentMessages;              //@synthesize transitIncidentMessages=_transitIncidentMessages - In the implementation block
@property (nonatomic,retain) NSMutableArray * steps;                                //@synthesize steps=_steps - In the implementation block
+(Class)artworkType;
+(Class)stepType;
+(Class)lineType;
+(Class)systemType;
+(Class)transitIncidentType;
+(Class)stationType;
+(Class)accessPointType;
+(Class)walkingType;
+(Class)stopType;
+(Class)zilchPointsType;
+(Class)hallType;
+(Class)transitIncidentMessageType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setZilchPoints:(NSMutableArray *)arg1 ;
-(NSMutableArray *)zilchPoints;
-(unsigned long long)stepsCount;
-(unsigned long long)stopsCount;
-(id)stopAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)accessPointsCount;
-(id)accessPointAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)lines;
-(void)addStep:(id)arg1 ;
-(void)clearSteps;
-(id)stepAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)steps;
-(void)setSteps:(NSMutableArray *)arg1 ;
-(NSMutableArray *)walkings;
-(id)artworkFromIndices:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)hallsCount;
-(id)hallAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)stationsCount;
-(id)stationAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)stops;
-(NSMutableArray *)halls;
-(unsigned long long)transitIncidentMessagesCount;
-(unsigned long long)artworksCount;
-(NSMutableArray *)artworks;
-(NSMutableArray *)transitIncidents;
-(void)addLine:(id)arg1 ;
-(void)addSystem:(id)arg1 ;
-(unsigned long long)linesCount;
-(void)clearLines;
-(id)lineAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)systemsCount;
-(void)clearSystems;
-(id)systemAtIndex:(unsigned long long)arg1 ;
-(void)setLines:(NSMutableArray *)arg1 ;
-(NSMutableArray *)systems;
-(void)setSystems:(NSMutableArray *)arg1 ;
-(void)addTransitIncident:(id)arg1 ;
-(unsigned long long)transitIncidentsCount;
-(void)clearTransitIncidents;
-(id)transitIncidentAtIndex:(unsigned long long)arg1 ;
-(void)setTransitIncidents:(NSMutableArray *)arg1 ;
-(id)artworkAtIndex:(unsigned long long)arg1 ;
-(id)transitIncidentMessageAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)accessPoints;
-(id)walkingAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)zilchPointsCount;
-(id)zilchPointsAtIndex:(unsigned long long)arg1 ;
-(void)addArtwork:(id)arg1 ;
-(void)clearArtworks;
-(void)setArtworks:(NSMutableArray *)arg1 ;
-(void)addStation:(id)arg1 ;
-(void)addAccessPoint:(id)arg1 ;
-(void)addWalking:(id)arg1 ;
-(void)addStop:(id)arg1 ;
-(void)addZilchPoints:(id)arg1 ;
-(void)addHall:(id)arg1 ;
-(void)addTransitIncidentMessage:(id)arg1 ;
-(void)clearStations;
-(void)clearAccessPoints;
-(unsigned long long)walkingsCount;
-(void)clearWalkings;
-(void)clearStops;
-(void)clearZilchPoints;
-(void)clearHalls;
-(void)clearTransitIncidentMessages;
-(NSMutableArray *)stations;
-(void)setStations:(NSMutableArray *)arg1 ;
-(void)setAccessPoints:(NSMutableArray *)arg1 ;
-(void)setWalkings:(NSMutableArray *)arg1 ;
-(void)setStops:(NSMutableArray *)arg1 ;
-(void)setHalls:(NSMutableArray *)arg1 ;
-(NSMutableArray *)transitIncidentMessages;
-(void)setTransitIncidentMessages:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

