/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MNInstructionContents.h>

@protocol GEOServerFormattedString;
@class NSArray, NSString, GEOComposedWaypoint;

@interface MNListInstructionContents : NSObject <MNInstructionContents> {

	double _distance;
	id<GEOServerFormattedString> _distanceFormat;
	NSArray* _instructionFormats;
	int _maneuverType;
	int _transportType;
	NSString* _intersectionName;
	NSString* _destinationName;
	NSString* _exitNumber;
	NSArray* _branchNames;
	NSArray* _towardNames;
	int _junctionAngle;
	BOOL _toFreeway;
	BOOL _suppressNames;
	BOOL _suppressFallback;
	NSString* _roadName;
	GEOComposedWaypoint* _destination;

}

@property (assign,nonatomic) int transportType;                                        //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) double distance;                                          //@synthesize distance=_distance - In the implementation block
@property (nonatomic,retain) id<GEOServerFormattedString> distanceFormat;              //@synthesize distanceFormat=_distanceFormat - In the implementation block
@property (nonatomic,retain) NSArray * instructionFormats;                             //@synthesize instructionFormats=_instructionFormats - In the implementation block
@property (nonatomic,retain) GEOComposedWaypoint * destination;                        //@synthesize destination=_destination - In the implementation block
@property (nonatomic,retain) NSString * destinationName;                               //@synthesize destinationName=_destinationName - In the implementation block
@property (nonatomic,readonly) long long context; 
@property (assign,nonatomic) BOOL suppressNames;                                       //@synthesize suppressNames=_suppressNames - In the implementation block
@property (nonatomic,retain) NSString * roadName;                                      //@synthesize roadName=_roadName - In the implementation block
@property (nonatomic,readonly) BOOL hasServerContent; 
@property (assign,nonatomic) BOOL suppressFallback;                                    //@synthesize suppressFallback=_suppressFallback - In the implementation block
+(id)contentsWithStep:(id)arg1 transportType:(int)arg2 ;
-(id)instruction;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(void)setDistance:(double)arg1 ;
-(double)distance;
-(void)setDestinationName:(NSString *)arg1 ;
-(NSString *)destinationName;
-(NSString *)roadName;
-(void)setRoadName:(NSString *)arg1 ;
-(void)_populateFromStep:(id)arg1 ;
-(void)setDistanceFormat:(id<GEOServerFormattedString>)arg1 ;
-(id)_instructionsForFormats:(id)arg1 ;
-(id)stringForDistance:(double)arg1 ;
-(id)instructionWithShorterAlternatives;
-(id)instructionForStage:(unsigned long long)arg1 distance:(double)arg2 ;
-(BOOL)suppressNames;
-(void)setSuppressNames:(BOOL)arg1 ;
-(BOOL)hasServerContent;
-(BOOL)suppressFallback;
-(void)setSuppressFallback:(BOOL)arg1 ;
-(void)setInstructionFormats:(NSArray *)arg1 ;
-(NSArray *)instructionFormats;
-(id<GEOServerFormattedString>)distanceFormat;
-(id)init;
-(id)description;
-(long long)context;
-(void)setDestination:(GEOComposedWaypoint *)arg1 ;
-(GEOComposedWaypoint *)destination;
@end

