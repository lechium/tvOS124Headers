/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOMapItemTransitInfo.h>

@class NSArray, NSString, GEOPDTransitInfo, GEOPDTransitSchedule, NSTimeZone, NSDate, NSMapTable;

@interface _GEOMapItemTransitInfo : NSObject <GEOMapItemTransitInfo> {

	GEOPDTransitInfo* _transitInfo;
	GEOPDTransitSchedule* _transitSchedule;
	NSArray* _systems;
	NSArray* _lines;
	NSArray* _departureSequences;
	NSTimeZone* _timeZone;
	NSArray* _incidents;
	BOOL _hasTransitIncidentComponent;
	NSDate* _incidentExpirationDate;
	NSArray* _connections;
	NSString* _displayName;
	NSMapTable* _cachedHeadSignsForLine;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * departureSequences; 
@property (nonatomic,readonly) NSDate * lastFullScheduleValidDate; 
@property (nonatomic,readonly) NSArray * labelItems; 
@property (nonatomic,readonly) NSArray * connections; 
@property (nonatomic,readonly) NSArray * systems; 
@property (nonatomic,readonly) unsigned long long systemsCount; 
@property (nonatomic,readonly) NSArray * lines; 
@property (nonatomic,readonly) unsigned long long linesCount; 
@property (nonatomic,readonly) NSArray * incidents; 
@property (nonatomic,readonly) BOOL isTransitIncidentsTTLExpired; 
@property (nonatomic,readonly) BOOL hasTransitIncidentComponent;                //@synthesize hasTransitIncidentComponent=_hasTransitIncidentComponent - In the implementation block
@property (nonatomic,readonly) NSString * displayName; 
-(NSArray *)departureSequences;
-(NSArray *)lines;
-(unsigned long long)linesCount;
-(unsigned long long)systemsCount;
-(NSArray *)systems;
-(id)initWithTransitInfo:(id)arg1 schedule:(id)arg2 timeZone:(id)arg3 incidents:(id)arg4 hasTransitIncidentComponent:(BOOL)arg5 incidentExpirationDate:(id)arg6 providerID:(int)arg7 ;
-(NSArray *)labelItems;
-(NSArray *)incidents;
-(BOOL)hasTransitIncidentComponent;
-(BOOL)isTransitIncidentsTTLExpired;
-(id)_departureSequencesForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 ignoreDirectionFilter:(BOOL)arg3 direction:(id)arg4 validForDateFromBlock:(/*^block*/id)arg5 ;
-(id)departureSequencesForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 direction:(id)arg3 validForDateFromBlock:(/*^block*/id)arg4 ;
-(id)linesForSystem:(id)arg1 ;
-(unsigned long long)numAdditionalDeparturesForSequence:(id)arg1 ;
-(id)directionsForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 validForDateFromBlock:(/*^block*/id)arg3 hasSequencesWithNoDirection:(out BOOL*)arg4 ;
-(id)sequencesForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 direction:(id)arg3 validForDateFromBlock:(/*^block*/id)arg4 ;
-(id)serviceResumesDateForLine:(id)arg1 excludingIncidentEntities:(id)arg2 afterDate:(id)arg3 blocked:(out BOOL*)arg4 ;
-(id)inactiveLinesForSystem:(id)arg1 relativeToDateFromBlock:(/*^block*/id)arg2 excludingIncidentEntities:(id)arg3 ;
-(id)allSequencesForSystem:(id)arg1 direction:(id)arg2 ;
-(id)headSignsForLine:(id)arg1 ;
-(NSDate *)lastFullScheduleValidDate;
-(NSArray *)connections;
-(NSString *)displayName;
@end

