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

@class GEOMultiTabsState;

@interface GEOLogMsgStateMapUI : PBCodable <NSCopying> {

	int _layoutInfo;
	int _layoutStyle;
	GEOMultiTabsState* _multiTabsState;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) BOOL hasLayoutInfo; 
@property (assign,nonatomic) int layoutInfo;                                  //@synthesize layoutInfo=_layoutInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasMultiTabsState; 
@property (nonatomic,retain) GEOMultiTabsState * multiTabsState;              //@synthesize multiTabsState=_multiTabsState - In the implementation block
@property (assign,nonatomic) BOOL hasLayoutStyle; 
@property (assign,nonatomic) int layoutStyle;                                 //@synthesize layoutStyle=_layoutStyle - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setMultiTabsState:(GEOMultiTabsState *)arg1 ;
-(void)setHasLayoutInfo:(BOOL)arg1 ;
-(BOOL)hasLayoutInfo;
-(id)layoutInfoAsString:(int)arg1 ;
-(int)StringAsLayoutInfo:(id)arg1 ;
-(BOOL)hasMultiTabsState;
-(int)layoutStyle;
-(void)setLayoutStyle:(int)arg1 ;
-(void)setHasLayoutStyle:(BOOL)arg1 ;
-(BOOL)hasLayoutStyle;
-(id)layoutStyleAsString:(int)arg1 ;
-(int)StringAsLayoutStyle:(id)arg1 ;
-(GEOMultiTabsState *)multiTabsState;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)layoutInfo;
-(void)setLayoutInfo:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end
