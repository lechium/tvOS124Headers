/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOVCharacteristics, NSData, NSMutableArray;

@interface GEOVFeature : PBCodable <NSCopying> {

	SCD_Struct_GE2* _extrusionHeights;
	SCD_Struct_GE2* _labelOffsets;
	SCD_Struct_GE2* _shieldLabelOffsets;
	SCD_Struct_GE2* _shieldLabelTypes;
	unsigned long long _businessID;
	long long _uID;
	unsigned _centerlineCount;
	unsigned _centerlineStart;
	GEOVCharacteristics* _characteristics;
	float _endLaneWidth;
	float _endOffset;
	float _endRoadOffset;
	unsigned _entryPointMask;
	int _formOfWay;
	float _minzoomRank;
	NSData* _oBSOLETECenterlines;
	NSData* _oBSOLETEShieldLabelPositions;
	NSData* _oBSOLETEVertexLabelPositions;
	int _placeType;
	NSData* _pointLabelPosition;
	int _roadClass;
	int _sectionCount;
	int _sectionStart;
	int _speedLimit;
	float _startLaneWidth;
	float _startOffset;
	float _startRoadOffset;
	NSMutableArray* _styleAttributes;
	unsigned _styleGroup;
	int _travelDirection;
	int _type;
	BOOL _polyIsConvex;
	SCD_Struct_GE183 _has;

}

@property (nonatomic,readonly) unsigned long long labelOffsetsCount; 
@property (nonatomic,readonly) int* labelOffsets; 
@property (nonatomic,readonly) unsigned long long shieldLabelOffsetsCount; 
@property (nonatomic,readonly) int* shieldLabelOffsets; 
@property (nonatomic,readonly) unsigned long long shieldLabelTypesCount; 
@property (nonatomic,readonly) int* shieldLabelTypes; 
@property (assign,nonatomic) BOOL hasUID; 
@property (assign,nonatomic) long long uID;                                             //@synthesize uID=_uID - In the implementation block
@property (assign,nonatomic) BOOL hasBusinessID; 
@property (assign,nonatomic) unsigned long long businessID;                             //@synthesize businessID=_businessID - In the implementation block
@property (assign,nonatomic) BOOL hasPlaceType; 
@property (assign,nonatomic) int placeType;                                             //@synthesize placeType=_placeType - In the implementation block
@property (assign,nonatomic) BOOL hasPolyIsConvex; 
@property (assign,nonatomic) BOOL polyIsConvex;                                         //@synthesize polyIsConvex=_polyIsConvex - In the implementation block
@property (assign,nonatomic) BOOL hasRoadClass; 
@property (assign,nonatomic) int roadClass;                                             //@synthesize roadClass=_roadClass - In the implementation block
@property (assign,nonatomic) BOOL hasFormOfWay; 
@property (assign,nonatomic) int formOfWay;                                             //@synthesize formOfWay=_formOfWay - In the implementation block
@property (assign,nonatomic) BOOL hasTravelDirection; 
@property (assign,nonatomic) int travelDirection;                                       //@synthesize travelDirection=_travelDirection - In the implementation block
@property (assign,nonatomic) BOOL hasSectionStart; 
@property (assign,nonatomic) int sectionStart;                                          //@synthesize sectionStart=_sectionStart - In the implementation block
@property (assign,nonatomic) BOOL hasSectionCount; 
@property (assign,nonatomic) int sectionCount;                                          //@synthesize sectionCount=_sectionCount - In the implementation block
@property (nonatomic,readonly) BOOL hasPointLabelPosition; 
@property (nonatomic,retain) NSData * pointLabelPosition;                               //@synthesize pointLabelPosition=_pointLabelPosition - In the implementation block
@property (nonatomic,readonly) BOOL hasOBSOLETEVertexLabelPositions; 
@property (nonatomic,retain) NSData * oBSOLETEVertexLabelPositions;                     //@synthesize oBSOLETEVertexLabelPositions=_oBSOLETEVertexLabelPositions - In the implementation block
@property (nonatomic,readonly) BOOL hasOBSOLETEShieldLabelPositions; 
@property (nonatomic,retain) NSData * oBSOLETEShieldLabelPositions;                     //@synthesize oBSOLETEShieldLabelPositions=_oBSOLETEShieldLabelPositions - In the implementation block
@property (assign,nonatomic) BOOL hasStyleGroup; 
@property (assign,nonatomic) unsigned styleGroup;                                       //@synthesize styleGroup=_styleGroup - In the implementation block
@property (assign,nonatomic) BOOL hasSpeedLimit; 
@property (assign,nonatomic) int speedLimit;                                            //@synthesize speedLimit=_speedLimit - In the implementation block
@property (nonatomic,readonly) unsigned long long extrusionHeightsCount; 
@property (nonatomic,readonly) int* extrusionHeights; 
@property (nonatomic,readonly) BOOL hasCharacteristics; 
@property (nonatomic,retain) GEOVCharacteristics * characteristics;                     //@synthesize characteristics=_characteristics - In the implementation block
@property (assign,nonatomic) BOOL hasStartOffset; 
@property (assign,nonatomic) float startOffset;                                         //@synthesize startOffset=_startOffset - In the implementation block
@property (assign,nonatomic) BOOL hasEndOffset; 
@property (assign,nonatomic) float endOffset;                                           //@synthesize endOffset=_endOffset - In the implementation block
@property (assign,nonatomic) BOOL hasMinzoomRank; 
@property (assign,nonatomic) float minzoomRank;                                         //@synthesize minzoomRank=_minzoomRank - In the implementation block
@property (nonatomic,readonly) BOOL hasOBSOLETECenterlines; 
@property (nonatomic,retain) NSData * oBSOLETECenterlines;                              //@synthesize oBSOLETECenterlines=_oBSOLETECenterlines - In the implementation block
@property (assign,nonatomic) BOOL hasCenterlineCount; 
@property (assign,nonatomic) unsigned centerlineCount;                                  //@synthesize centerlineCount=_centerlineCount - In the implementation block
@property (assign,nonatomic) BOOL hasCenterlineStart; 
@property (assign,nonatomic) unsigned centerlineStart;                                  //@synthesize centerlineStart=_centerlineStart - In the implementation block
@property (nonatomic,retain) NSMutableArray * styleAttributes;                          //@synthesize styleAttributes=_styleAttributes - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                                  //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasStartLaneWidth; 
@property (assign,nonatomic) float startLaneWidth;                                      //@synthesize startLaneWidth=_startLaneWidth - In the implementation block
@property (assign,nonatomic) BOOL hasEndLaneWidth; 
@property (assign,nonatomic) float endLaneWidth;                                        //@synthesize endLaneWidth=_endLaneWidth - In the implementation block
@property (assign,nonatomic) BOOL hasStartRoadOffset; 
@property (assign,nonatomic) float startRoadOffset;                                     //@synthesize startRoadOffset=_startRoadOffset - In the implementation block
@property (assign,nonatomic) BOOL hasEndRoadOffset; 
@property (assign,nonatomic) float endRoadOffset;                                       //@synthesize endRoadOffset=_endRoadOffset - In the implementation block
@property (assign,nonatomic) BOOL hasEntryPointMask; 
@property (assign,nonatomic) unsigned entryPointMask;                                   //@synthesize entryPointMask=_entryPointMask - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)roadClass;
-(int)formOfWay;
-(int)travelDirection;
-(int)speedLimit;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setFormOfWay:(int)arg1 ;
-(void)setHasFormOfWay:(BOOL)arg1 ;
-(BOOL)hasFormOfWay;
-(void)setRoadClass:(int)arg1 ;
-(void)setHasRoadClass:(BOOL)arg1 ;
-(BOOL)hasRoadClass;
-(void)setHasStartOffset:(BOOL)arg1 ;
-(BOOL)hasStartOffset;
-(void)setEndOffset:(float)arg1 ;
-(void)setHasEndOffset:(BOOL)arg1 ;
-(BOOL)hasEndOffset;
-(void)setUID:(long long)arg1 ;
-(void)setHasUID:(BOOL)arg1 ;
-(BOOL)hasUID;
-(long long)uID;
-(int)placeType;
-(void)setPlaceType:(int)arg1 ;
-(void)setHasPlaceType:(BOOL)arg1 ;
-(BOOL)hasPlaceType;
-(unsigned long long)businessID;
-(void)setBusinessID:(unsigned long long)arg1 ;
-(void)setHasBusinessID:(BOOL)arg1 ;
-(BOOL)hasBusinessID;
-(void)addStyleAttributes:(id)arg1 ;
-(unsigned long long)labelOffsetsCount;
-(void)clearLabelOffsets;
-(int)labelOffsetAtIndex:(unsigned long long)arg1 ;
-(void)addLabelOffset:(int)arg1 ;
-(unsigned long long)shieldLabelOffsetsCount;
-(void)clearShieldLabelOffsets;
-(int)shieldLabelOffsetAtIndex:(unsigned long long)arg1 ;
-(void)addShieldLabelOffset:(int)arg1 ;
-(void)setPointLabelPosition:(NSData *)arg1 ;
-(void)setOBSOLETEVertexLabelPositions:(NSData *)arg1 ;
-(void)setOBSOLETEShieldLabelPositions:(NSData *)arg1 ;
-(unsigned long long)shieldLabelTypesCount;
-(void)clearShieldLabelTypes;
-(int)shieldLabelTypeAtIndex:(unsigned long long)arg1 ;
-(void)addShieldLabelType:(int)arg1 ;
-(unsigned long long)extrusionHeightsCount;
-(void)clearExtrusionHeights;
-(int)extrusionHeightAtIndex:(unsigned long long)arg1 ;
-(void)addExtrusionHeight:(int)arg1 ;
-(void)setCharacteristics:(GEOVCharacteristics *)arg1 ;
-(void)setOBSOLETECenterlines:(NSData *)arg1 ;
-(unsigned long long)styleAttributesCount;
-(void)clearStyleAttributes;
-(id)styleAttributesAtIndex:(unsigned long long)arg1 ;
-(int*)labelOffsets;
-(void)setLabelOffsets:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)shieldLabelOffsets;
-(void)setShieldLabelOffsets:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)shieldLabelTypes;
-(void)setShieldLabelTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setPolyIsConvex:(BOOL)arg1 ;
-(void)setHasPolyIsConvex:(BOOL)arg1 ;
-(BOOL)hasPolyIsConvex;
-(void)setTravelDirection:(int)arg1 ;
-(void)setHasTravelDirection:(BOOL)arg1 ;
-(BOOL)hasTravelDirection;
-(void)setSectionStart:(int)arg1 ;
-(void)setHasSectionStart:(BOOL)arg1 ;
-(BOOL)hasSectionStart;
-(void)setSectionCount:(int)arg1 ;
-(void)setHasSectionCount:(BOOL)arg1 ;
-(BOOL)hasSectionCount;
-(BOOL)hasPointLabelPosition;
-(BOOL)hasOBSOLETEVertexLabelPositions;
-(BOOL)hasOBSOLETEShieldLabelPositions;
-(void)setStyleGroup:(unsigned)arg1 ;
-(void)setHasStyleGroup:(BOOL)arg1 ;
-(BOOL)hasStyleGroup;
-(void)setSpeedLimit:(int)arg1 ;
-(void)setHasSpeedLimit:(BOOL)arg1 ;
-(BOOL)hasSpeedLimit;
-(int*)extrusionHeights;
-(void)setExtrusionHeights:(int*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasCharacteristics;
-(void)setMinzoomRank:(float)arg1 ;
-(void)setHasMinzoomRank:(BOOL)arg1 ;
-(BOOL)hasMinzoomRank;
-(BOOL)hasOBSOLETECenterlines;
-(void)setCenterlineCount:(unsigned)arg1 ;
-(void)setHasCenterlineCount:(BOOL)arg1 ;
-(BOOL)hasCenterlineCount;
-(void)setCenterlineStart:(unsigned)arg1 ;
-(void)setHasCenterlineStart:(BOOL)arg1 ;
-(BOOL)hasCenterlineStart;
-(void)setStartLaneWidth:(float)arg1 ;
-(void)setHasStartLaneWidth:(BOOL)arg1 ;
-(BOOL)hasStartLaneWidth;
-(void)setEndLaneWidth:(float)arg1 ;
-(void)setHasEndLaneWidth:(BOOL)arg1 ;
-(BOOL)hasEndLaneWidth;
-(void)setStartRoadOffset:(float)arg1 ;
-(void)setHasStartRoadOffset:(BOOL)arg1 ;
-(BOOL)hasStartRoadOffset;
-(void)setEndRoadOffset:(float)arg1 ;
-(void)setHasEndRoadOffset:(BOOL)arg1 ;
-(BOOL)hasEndRoadOffset;
-(void)setEntryPointMask:(unsigned)arg1 ;
-(void)setHasEntryPointMask:(BOOL)arg1 ;
-(BOOL)hasEntryPointMask;
-(BOOL)polyIsConvex;
-(int)sectionStart;
-(int)sectionCount;
-(NSData *)pointLabelPosition;
-(NSData *)oBSOLETEVertexLabelPositions;
-(NSData *)oBSOLETEShieldLabelPositions;
-(unsigned)styleGroup;
-(GEOVCharacteristics *)characteristics;
-(float)minzoomRank;
-(NSData *)oBSOLETECenterlines;
-(unsigned)centerlineCount;
-(unsigned)centerlineStart;
-(float)startLaneWidth;
-(float)endLaneWidth;
-(float)startRoadOffset;
-(float)endRoadOffset;
-(unsigned)entryPointMask;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)styleAttributes;
-(void)setStyleAttributes:(NSMutableArray *)arg1 ;
-(float)startOffset;
-(float)endOffset;
-(void)setStartOffset:(float)arg1 ;
@end

