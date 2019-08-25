/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDChipCountersRx : PBCodable <NSCopying> {

	unsigned long long _rxbadcm;
	unsigned long long _rxbadda;
	unsigned long long _rxbadds;
	unsigned long long _rxbadproto;
	unsigned long long _rxbadsrcmac;
	unsigned long long _rxbyte;
	unsigned long long _rxctl;
	unsigned long long _rxerror;
	unsigned long long _rxfilter;
	unsigned long long _rxfragerr;
	unsigned long long _rxframe;
	unsigned long long _rxgiant;
	unsigned long long _rxnobuf;
	unsigned long long _rxnondata;
	unsigned long long _rxnoscb;
	unsigned long long _rxrtry;
	unsigned long long _rxrunt;
	SCD_Struct_AW35 _has;

}

@property (assign,nonatomic) BOOL hasRxframe; 
@property (assign,nonatomic) unsigned long long rxframe;                  //@synthesize rxframe=_rxframe - In the implementation block
@property (assign,nonatomic) BOOL hasRxbyte; 
@property (assign,nonatomic) unsigned long long rxbyte;                   //@synthesize rxbyte=_rxbyte - In the implementation block
@property (assign,nonatomic) BOOL hasRxerror; 
@property (assign,nonatomic) unsigned long long rxerror;                  //@synthesize rxerror=_rxerror - In the implementation block
@property (assign,nonatomic) BOOL hasRxctl; 
@property (assign,nonatomic) unsigned long long rxctl;                    //@synthesize rxctl=_rxctl - In the implementation block
@property (assign,nonatomic) BOOL hasRxnobuf; 
@property (assign,nonatomic) unsigned long long rxnobuf;                  //@synthesize rxnobuf=_rxnobuf - In the implementation block
@property (assign,nonatomic) BOOL hasRxrtry; 
@property (assign,nonatomic) unsigned long long rxrtry;                   //@synthesize rxrtry=_rxrtry - In the implementation block
@property (assign,nonatomic) BOOL hasRxnondata; 
@property (assign,nonatomic) unsigned long long rxnondata;                //@synthesize rxnondata=_rxnondata - In the implementation block
@property (assign,nonatomic) BOOL hasRxbadds; 
@property (assign,nonatomic) unsigned long long rxbadds;                  //@synthesize rxbadds=_rxbadds - In the implementation block
@property (assign,nonatomic) BOOL hasRxbadcm; 
@property (assign,nonatomic) unsigned long long rxbadcm;                  //@synthesize rxbadcm=_rxbadcm - In the implementation block
@property (assign,nonatomic) BOOL hasRxfragerr; 
@property (assign,nonatomic) unsigned long long rxfragerr;                //@synthesize rxfragerr=_rxfragerr - In the implementation block
@property (assign,nonatomic) BOOL hasRxrunt; 
@property (assign,nonatomic) unsigned long long rxrunt;                   //@synthesize rxrunt=_rxrunt - In the implementation block
@property (assign,nonatomic) BOOL hasRxgiant; 
@property (assign,nonatomic) unsigned long long rxgiant;                  //@synthesize rxgiant=_rxgiant - In the implementation block
@property (assign,nonatomic) BOOL hasRxnoscb; 
@property (assign,nonatomic) unsigned long long rxnoscb;                  //@synthesize rxnoscb=_rxnoscb - In the implementation block
@property (assign,nonatomic) BOOL hasRxbadproto; 
@property (assign,nonatomic) unsigned long long rxbadproto;               //@synthesize rxbadproto=_rxbadproto - In the implementation block
@property (assign,nonatomic) BOOL hasRxbadsrcmac; 
@property (assign,nonatomic) unsigned long long rxbadsrcmac;              //@synthesize rxbadsrcmac=_rxbadsrcmac - In the implementation block
@property (assign,nonatomic) BOOL hasRxbadda; 
@property (assign,nonatomic) unsigned long long rxbadda;                  //@synthesize rxbadda=_rxbadda - In the implementation block
@property (assign,nonatomic) BOOL hasRxfilter; 
@property (assign,nonatomic) unsigned long long rxfilter;                 //@synthesize rxfilter=_rxfilter - In the implementation block
-(void)setRxframe:(unsigned long long)arg1 ;
-(void)setHasRxframe:(BOOL)arg1 ;
-(BOOL)hasRxframe;
-(void)setRxbyte:(unsigned long long)arg1 ;
-(void)setHasRxbyte:(BOOL)arg1 ;
-(BOOL)hasRxbyte;
-(void)setRxerror:(unsigned long long)arg1 ;
-(void)setHasRxerror:(BOOL)arg1 ;
-(BOOL)hasRxerror;
-(void)setRxctl:(unsigned long long)arg1 ;
-(void)setHasRxctl:(BOOL)arg1 ;
-(BOOL)hasRxctl;
-(void)setRxnobuf:(unsigned long long)arg1 ;
-(void)setHasRxnobuf:(BOOL)arg1 ;
-(BOOL)hasRxnobuf;
-(void)setRxrtry:(unsigned long long)arg1 ;
-(void)setHasRxrtry:(BOOL)arg1 ;
-(BOOL)hasRxrtry;
-(void)setRxnondata:(unsigned long long)arg1 ;
-(void)setHasRxnondata:(BOOL)arg1 ;
-(BOOL)hasRxnondata;
-(void)setRxbadds:(unsigned long long)arg1 ;
-(void)setHasRxbadds:(BOOL)arg1 ;
-(BOOL)hasRxbadds;
-(void)setRxbadcm:(unsigned long long)arg1 ;
-(void)setHasRxbadcm:(BOOL)arg1 ;
-(BOOL)hasRxbadcm;
-(void)setRxfragerr:(unsigned long long)arg1 ;
-(void)setHasRxfragerr:(BOOL)arg1 ;
-(BOOL)hasRxfragerr;
-(void)setRxrunt:(unsigned long long)arg1 ;
-(void)setHasRxrunt:(BOOL)arg1 ;
-(BOOL)hasRxrunt;
-(void)setRxgiant:(unsigned long long)arg1 ;
-(void)setHasRxgiant:(BOOL)arg1 ;
-(BOOL)hasRxgiant;
-(void)setRxnoscb:(unsigned long long)arg1 ;
-(void)setHasRxnoscb:(BOOL)arg1 ;
-(BOOL)hasRxnoscb;
-(void)setRxbadproto:(unsigned long long)arg1 ;
-(void)setHasRxbadproto:(BOOL)arg1 ;
-(BOOL)hasRxbadproto;
-(void)setRxbadsrcmac:(unsigned long long)arg1 ;
-(void)setHasRxbadsrcmac:(BOOL)arg1 ;
-(BOOL)hasRxbadsrcmac;
-(void)setRxbadda:(unsigned long long)arg1 ;
-(void)setHasRxbadda:(BOOL)arg1 ;
-(BOOL)hasRxbadda;
-(void)setRxfilter:(unsigned long long)arg1 ;
-(void)setHasRxfilter:(BOOL)arg1 ;
-(BOOL)hasRxfilter;
-(unsigned long long)rxframe;
-(unsigned long long)rxbyte;
-(unsigned long long)rxerror;
-(unsigned long long)rxctl;
-(unsigned long long)rxnobuf;
-(unsigned long long)rxrtry;
-(unsigned long long)rxnondata;
-(unsigned long long)rxbadds;
-(unsigned long long)rxbadcm;
-(unsigned long long)rxfragerr;
-(unsigned long long)rxrunt;
-(unsigned long long)rxgiant;
-(unsigned long long)rxnoscb;
-(unsigned long long)rxbadproto;
-(unsigned long long)rxbadsrcmac;
-(unsigned long long)rxbadda;
-(unsigned long long)rxfilter;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

