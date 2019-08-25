/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDBatchCategoryLookupParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _categoryLookupParameters;

}

@property (nonatomic,retain) NSMutableArray * categoryLookupParameters;              //@synthesize categoryLookupParameters=_categoryLookupParameters - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)categoryLookupParameterType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)addCategoryLookupParameter:(id)arg1 ;
-(unsigned long long)categoryLookupParametersCount;
-(void)clearCategoryLookupParameters;
-(id)categoryLookupParameterAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)categoryLookupParameters;
-(void)setCategoryLookupParameters:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

