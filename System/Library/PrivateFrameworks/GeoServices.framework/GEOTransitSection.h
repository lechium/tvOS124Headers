/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOTransitSection : PBCodable <NSCopying> {

	SCD_Struct_GE20* _actionSheetArtworkIndexs;
	SCD_Struct_GE20* _routeDetailsArtworkIndexs;
	SCD_Struct_GE20* _stepIndexs;
	NSString* _actionSheetName;
	int _nextOptionsIndex;
	NSMutableArray* _ticketingSegments;
	BOOL _disableAlightNotifications;
	SCD_Struct_GE22 _has;

}

@property (nonatomic,readonly) unsigned long long stepIndexsCount; 
@property (nonatomic,readonly) unsigned* stepIndexs; 
@property (assign,nonatomic) BOOL hasNextOptionsIndex; 
@property (assign,nonatomic) int nextOptionsIndex;                                             //@synthesize nextOptionsIndex=_nextOptionsIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasActionSheetName; 
@property (nonatomic,retain) NSString * actionSheetName;                                       //@synthesize actionSheetName=_actionSheetName - In the implementation block
@property (nonatomic,readonly) unsigned long long actionSheetArtworkIndexsCount; 
@property (nonatomic,readonly) unsigned* actionSheetArtworkIndexs; 
@property (nonatomic,readonly) unsigned long long routeDetailsArtworkIndexsCount; 
@property (nonatomic,readonly) unsigned* routeDetailsArtworkIndexs; 
@property (assign,nonatomic) BOOL hasDisableAlightNotifications; 
@property (assign,nonatomic) BOOL disableAlightNotifications;                                  //@synthesize disableAlightNotifications=_disableAlightNotifications - In the implementation block
@property (nonatomic,retain) NSMutableArray * ticketingSegments;                               //@synthesize ticketingSegments=_ticketingSegments - In the implementation block
+(Class)ticketingSegmentType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasNextOptionsIndex;
-(int)nextOptionsIndex;
-(unsigned long long)stepIndexsCount;
-(unsigned)stepIndexAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)ticketingSegments;
-(void)addTicketingSegment:(id)arg1 ;
-(void)clearStepIndexs;
-(void)addStepIndex:(unsigned)arg1 ;
-(void)setActionSheetName:(NSString *)arg1 ;
-(unsigned long long)actionSheetArtworkIndexsCount;
-(void)clearActionSheetArtworkIndexs;
-(unsigned)actionSheetArtworkIndexAtIndex:(unsigned long long)arg1 ;
-(void)addActionSheetArtworkIndex:(unsigned)arg1 ;
-(unsigned long long)routeDetailsArtworkIndexsCount;
-(void)clearRouteDetailsArtworkIndexs;
-(unsigned)routeDetailsArtworkIndexAtIndex:(unsigned long long)arg1 ;
-(void)addRouteDetailsArtworkIndex:(unsigned)arg1 ;
-(unsigned long long)ticketingSegmentsCount;
-(void)clearTicketingSegments;
-(id)ticketingSegmentAtIndex:(unsigned long long)arg1 ;
-(unsigned*)stepIndexs;
-(void)setStepIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setNextOptionsIndex:(int)arg1 ;
-(void)setHasNextOptionsIndex:(BOOL)arg1 ;
-(BOOL)hasActionSheetName;
-(unsigned*)actionSheetArtworkIndexs;
-(void)setActionSheetArtworkIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)routeDetailsArtworkIndexs;
-(void)setRouteDetailsArtworkIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setDisableAlightNotifications:(BOOL)arg1 ;
-(void)setHasDisableAlightNotifications:(BOOL)arg1 ;
-(BOOL)hasDisableAlightNotifications;
-(NSString *)actionSheetName;
-(BOOL)disableAlightNotifications;
-(void)setTicketingSegments:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

