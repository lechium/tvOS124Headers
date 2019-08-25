/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPLocationCoordinate, CKDPRecordFieldIdentifier;

@interface CKDPQuerySort : PBCodable <NSCopying> {

	CKDPLocationCoordinate* _coordinate;
	CKDPRecordFieldIdentifier* _fieldName;
	int _order;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasFieldName; 
@property (nonatomic,retain) CKDPRecordFieldIdentifier * fieldName;              //@synthesize fieldName=_fieldName - In the implementation block
@property (assign,nonatomic) BOOL hasOrder; 
@property (assign,nonatomic) int order;                                          //@synthesize order=_order - In the implementation block
@property (nonatomic,readonly) BOOL hasCoordinate; 
@property (nonatomic,retain) CKDPLocationCoordinate * coordinate;                //@synthesize coordinate=_coordinate - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(CKDPLocationCoordinate *)coordinate;
-(void)setCoordinate:(CKDPLocationCoordinate *)arg1 ;
-(BOOL)hasCoordinate;
-(void)setFieldName:(CKDPRecordFieldIdentifier *)arg1 ;
-(BOOL)hasFieldName;
-(CKDPRecordFieldIdentifier *)fieldName;
-(void)setHasOrder:(BOOL)arg1 ;
-(BOOL)hasOrder;
-(id)orderAsString:(int)arg1 ;
-(int)StringAsOrder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOrder:(int)arg1 ;
-(int)order;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end
