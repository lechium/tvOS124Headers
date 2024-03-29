/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SISchemaSiriCue : PBCodable <NSCopying> {

	int _siriCueType;
	SCD_Struct_SI1 _has;

}

@property (assign,nonatomic) BOOL hasSiriCueType; 
@property (assign,nonatomic) int siriCueType;                  //@synthesize siriCueType=_siriCueType - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)siriCueType;
-(void)setSiriCueType:(int)arg1 ;
-(void)setHasSiriCueType:(BOOL)arg1 ;
-(BOOL)hasSiriCueType;
-(id)siriCueTypeAsString:(int)arg1 ;
-(int)StringAsSiriCueType:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

