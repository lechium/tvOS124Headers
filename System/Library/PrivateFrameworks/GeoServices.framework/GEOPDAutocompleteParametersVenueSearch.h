/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray, NSString, GEOPDViewportInfo;

@interface GEOPDAutocompleteParametersVenueSearch : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _buildingId;
	unsigned long long _levelId;
	unsigned long long _sectionId;
	unsigned long long _venueId;
	NSMutableArray* _categorys;
	int _maxResults;
	NSString* _query;
	GEOPDViewportInfo* _viewportInfo;
	BOOL _highlightDiff;
	SCD_Struct_GE40 _has;

}

@property (nonatomic,readonly) BOOL hasQuery; 
@property (nonatomic,retain) NSString * query;                               //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) BOOL hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo;               //@synthesize viewportInfo=_viewportInfo - In the implementation block
@property (assign,nonatomic) BOOL hasMaxResults; 
@property (assign,nonatomic) int maxResults;                                 //@synthesize maxResults=_maxResults - In the implementation block
@property (assign,nonatomic) BOOL hasHighlightDiff; 
@property (assign,nonatomic) BOOL highlightDiff;                             //@synthesize highlightDiff=_highlightDiff - In the implementation block
@property (assign,nonatomic) BOOL hasVenueId; 
@property (assign,nonatomic) unsigned long long venueId;                     //@synthesize venueId=_venueId - In the implementation block
@property (assign,nonatomic) BOOL hasLevelId; 
@property (assign,nonatomic) unsigned long long levelId;                     //@synthesize levelId=_levelId - In the implementation block
@property (assign,nonatomic) BOOL hasSectionId; 
@property (assign,nonatomic) unsigned long long sectionId;                   //@synthesize sectionId=_sectionId - In the implementation block
@property (assign,nonatomic) BOOL hasBuildingId; 
@property (assign,nonatomic) unsigned long long buildingId;                  //@synthesize buildingId=_buildingId - In the implementation block
@property (nonatomic,retain) NSMutableArray * categorys;                     //@synthesize categorys=_categorys - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)categoryType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setQuery:(NSString *)arg1 ;
-(BOOL)hasQuery;
-(void)setVenueId:(unsigned long long)arg1 ;
-(void)setHasVenueId:(BOOL)arg1 ;
-(BOOL)hasVenueId;
-(void)setBuildingId:(unsigned long long)arg1 ;
-(void)setHasBuildingId:(BOOL)arg1 ;
-(BOOL)hasBuildingId;
-(void)setLevelId:(unsigned long long)arg1 ;
-(void)setHasLevelId:(BOOL)arg1 ;
-(BOOL)hasLevelId;
-(unsigned long long)venueId;
-(unsigned long long)buildingId;
-(unsigned long long)levelId;
-(unsigned long long)categorysCount;
-(void)clearCategorys;
-(id)categoryAtIndex:(unsigned long long)arg1 ;
-(void)addCategory:(id)arg1 ;
-(NSMutableArray *)categorys;
-(void)setCategorys:(NSMutableArray *)arg1 ;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(BOOL)hasViewportInfo;
-(int)maxResults;
-(void)setMaxResults:(int)arg1 ;
-(void)setHasMaxResults:(BOOL)arg1 ;
-(BOOL)hasMaxResults;
-(BOOL)highlightDiff;
-(void)setHighlightDiff:(BOOL)arg1 ;
-(void)setHasHighlightDiff:(BOOL)arg1 ;
-(BOOL)hasHighlightDiff;
-(GEOPDViewportInfo *)viewportInfo;
-(void)setSectionId:(unsigned long long)arg1 ;
-(void)setHasSectionId:(BOOL)arg1 ;
-(BOOL)hasSectionId;
-(unsigned long long)sectionId;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)query;
@end

