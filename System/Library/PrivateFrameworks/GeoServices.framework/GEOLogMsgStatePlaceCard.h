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

@class GEOPlaceActionDetails, NSString;

@interface GEOLogMsgStatePlaceCard : PBCodable <NSCopying> {

	SCD_Struct_GE2* _possibleActions;
	SCD_Struct_GE2* _unactionableUiElements;
	GEOPlaceActionDetails* _placeActionDetails;
	NSString* _placecardCategory;
	int _placecardType;
	SCD_Struct_GE1 _has;

}

@property (nonatomic,readonly) BOOL hasPlaceActionDetails; 
@property (nonatomic,retain) GEOPlaceActionDetails * placeActionDetails;                    //@synthesize placeActionDetails=_placeActionDetails - In the implementation block
@property (nonatomic,readonly) unsigned long long possibleActionsCount; 
@property (nonatomic,readonly) int* possibleActions; 
@property (nonatomic,readonly) unsigned long long unactionableUiElementsCount; 
@property (nonatomic,readonly) int* unactionableUiElements; 
@property (nonatomic,readonly) BOOL hasPlacecardCategory; 
@property (nonatomic,retain) NSString * placecardCategory;                                  //@synthesize placecardCategory=_placecardCategory - In the implementation block
@property (assign,nonatomic) BOOL hasPlacecardType; 
@property (assign,nonatomic) int placecardType;                                             //@synthesize placecardType=_placecardType - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setPlaceActionDetails:(GEOPlaceActionDetails *)arg1 ;
-(BOOL)hasPlaceActionDetails;
-(GEOPlaceActionDetails *)placeActionDetails;
-(void)setPlacecardType:(int)arg1 ;
-(void)setPlacecardCategory:(NSString *)arg1 ;
-(void)addPossibleAction:(int)arg1 ;
-(void)addUnactionableUiElement:(int)arg1 ;
-(unsigned long long)possibleActionsCount;
-(void)clearPossibleActions;
-(int)possibleActionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)unactionableUiElementsCount;
-(void)clearUnactionableUiElements;
-(int)unactionableUiElementAtIndex:(unsigned long long)arg1 ;
-(int*)possibleActions;
-(void)setPossibleActions:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)possibleActionsAsString:(int)arg1 ;
-(int)StringAsPossibleActions:(id)arg1 ;
-(int*)unactionableUiElements;
-(void)setUnactionableUiElements:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)unactionableUiElementsAsString:(int)arg1 ;
-(int)StringAsUnactionableUiElements:(id)arg1 ;
-(BOOL)hasPlacecardCategory;
-(int)placecardType;
-(void)setHasPlacecardType:(BOOL)arg1 ;
-(BOOL)hasPlacecardType;
-(id)placecardTypeAsString:(int)arg1 ;
-(int)StringAsPlacecardType:(id)arg1 ;
-(NSString *)placecardCategory;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end
