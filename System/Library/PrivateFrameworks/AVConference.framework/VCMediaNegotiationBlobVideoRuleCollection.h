/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCMediaNegotiationBlobVideoRuleCollection : PBCodable <NSCopying> {

	unsigned _formats;
	int _operation;
	unsigned _preferredFormat;
	int _transport;
	SCD_Struct_VC39 _has;

}

@property (assign,nonatomic) int transport;                         //@synthesize transport=_transport - In the implementation block
@property (assign,nonatomic) int operation;                         //@synthesize operation=_operation - In the implementation block
@property (assign,nonatomic) unsigned formats;                      //@synthesize formats=_formats - In the implementation block
@property (assign,nonatomic) BOOL hasPreferredFormat; 
@property (assign,nonatomic) unsigned preferredFormat;              //@synthesize preferredFormat=_preferredFormat - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setTransport:(int)arg1 ;
-(int)transport;
-(unsigned)formats;
-(void)setPreferredFormat:(unsigned)arg1 ;
-(void)setFormats:(unsigned)arg1 ;
-(BOOL)hasPreferredFormat;
-(id)operationAsString:(int)arg1 ;
-(int)StringAsOperation:(id)arg1 ;
-(void)setHasPreferredFormat:(BOOL)arg1 ;
-(id)transportAsString:(int)arg1 ;
-(int)StringAsTransport:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)preferredFormat;
-(void)setOperation:(int)arg1 ;
-(int)operation;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

