/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDAutocompleteResult : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _retainSearchTime;
	NSMutableArray* _sections;
	NSMutableArray* _sortPriorityMappings;
	BOOL _enableRap;
	BOOL _shouldDisplayNoResults;
	SCD_Struct_GE23 _has;

}

@property (nonatomic,retain) NSMutableArray * sections;                          //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) BOOL hasEnableRap; 
@property (assign,nonatomic) BOOL enableRap;                                     //@synthesize enableRap=_enableRap - In the implementation block
@property (assign,nonatomic) BOOL hasShouldDisplayNoResults; 
@property (assign,nonatomic) BOOL shouldDisplayNoResults;                        //@synthesize shouldDisplayNoResults=_shouldDisplayNoResults - In the implementation block
@property (assign,nonatomic) BOOL hasRetainSearchTime; 
@property (assign,nonatomic) unsigned retainSearchTime;                          //@synthesize retainSearchTime=_retainSearchTime - In the implementation block
@property (nonatomic,retain) NSMutableArray * sortPriorityMappings;              //@synthesize sortPriorityMappings=_sortPriorityMappings - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)sectionsType;
+(Class)sortPriorityMappingType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)addSections:(id)arg1 ;
-(void)addSortPriorityMapping:(id)arg1 ;
-(unsigned long long)sectionsCount;
-(void)clearSections;
-(id)sectionsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)sortPriorityMappingsCount;
-(void)clearSortPriorityMappings;
-(id)sortPriorityMappingAtIndex:(unsigned long long)arg1 ;
-(void)setEnableRap:(BOOL)arg1 ;
-(void)setHasEnableRap:(BOOL)arg1 ;
-(BOOL)hasEnableRap;
-(void)setShouldDisplayNoResults:(BOOL)arg1 ;
-(void)setHasShouldDisplayNoResults:(BOOL)arg1 ;
-(BOOL)hasShouldDisplayNoResults;
-(void)setRetainSearchTime:(unsigned)arg1 ;
-(void)setHasRetainSearchTime:(BOOL)arg1 ;
-(BOOL)hasRetainSearchTime;
-(BOOL)enableRap;
-(BOOL)shouldDisplayNoResults;
-(unsigned)retainSearchTime;
-(NSMutableArray *)sortPriorityMappings;
-(void)setSortPriorityMappings:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)sections;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSections:(NSMutableArray *)arg1 ;
@end

