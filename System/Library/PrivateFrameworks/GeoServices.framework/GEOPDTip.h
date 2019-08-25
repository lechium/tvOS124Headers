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

@class PBUnknownFields, NSMutableArray, NSString, GEOPDUser;

@interface GEOPDTip : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _tipTime;
	NSMutableArray* _snippets;
	NSString* _tipId;
	GEOPDUser* _tipster;
	SCD_Struct_GE1 _has;

}

@property (nonatomic,retain) NSMutableArray * snippets;                      //@synthesize snippets=_snippets - In the implementation block
@property (assign,nonatomic) BOOL hasTipTime; 
@property (assign,nonatomic) double tipTime;                                 //@synthesize tipTime=_tipTime - In the implementation block
@property (nonatomic,readonly) BOOL hasTipster; 
@property (nonatomic,retain) GEOPDUser * tipster;                            //@synthesize tipster=_tipster - In the implementation block
@property (nonatomic,readonly) BOOL hasTipId; 
@property (nonatomic,retain) NSString * tipId;                               //@synthesize tipId=_tipId - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)tipsForPlaceData:(id)arg1 ;
+(Class)snippetType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(NSMutableArray *)snippets;
-(BOOL)hasTipTime;
-(double)tipTime;
-(GEOPDUser *)tipster;
-(BOOL)hasTipId;
-(NSString *)tipId;
-(void)addSnippet:(id)arg1 ;
-(unsigned long long)snippetsCount;
-(void)clearSnippets;
-(id)snippetAtIndex:(unsigned long long)arg1 ;
-(void)setSnippets:(NSMutableArray *)arg1 ;
-(void)setTipster:(GEOPDUser *)arg1 ;
-(void)setTipId:(NSString *)arg1 ;
-(void)setTipTime:(double)arg1 ;
-(void)setHasTipTime:(BOOL)arg1 ;
-(BOOL)hasTipster;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

