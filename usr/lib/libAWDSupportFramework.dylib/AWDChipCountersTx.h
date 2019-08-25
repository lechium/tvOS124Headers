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

@interface AWDChipCountersTx : PBCodable <NSCopying> {

	unsigned long long _txbyte;
	unsigned long long _txchit;
	unsigned long long _txcmiss;
	unsigned long long _txctl;
	unsigned long long _txerror;
	unsigned long long _txframe;
	unsigned long long _txnoassoc;
	unsigned long long _txnobuf;
	unsigned long long _txprshort;
	unsigned long long _txretrans;
	unsigned long long _txrunt;
	unsigned long long _txserr;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) BOOL hasTxframe; 
@property (assign,nonatomic) unsigned long long txframe;                //@synthesize txframe=_txframe - In the implementation block
@property (assign,nonatomic) BOOL hasTxbyte; 
@property (assign,nonatomic) unsigned long long txbyte;                 //@synthesize txbyte=_txbyte - In the implementation block
@property (assign,nonatomic) BOOL hasTxretrans; 
@property (assign,nonatomic) unsigned long long txretrans;              //@synthesize txretrans=_txretrans - In the implementation block
@property (assign,nonatomic) BOOL hasTxerror; 
@property (assign,nonatomic) unsigned long long txerror;                //@synthesize txerror=_txerror - In the implementation block
@property (assign,nonatomic) BOOL hasTxctl; 
@property (assign,nonatomic) unsigned long long txctl;                  //@synthesize txctl=_txctl - In the implementation block
@property (assign,nonatomic) BOOL hasTxprshort; 
@property (assign,nonatomic) unsigned long long txprshort;              //@synthesize txprshort=_txprshort - In the implementation block
@property (assign,nonatomic) BOOL hasTxserr; 
@property (assign,nonatomic) unsigned long long txserr;                 //@synthesize txserr=_txserr - In the implementation block
@property (assign,nonatomic) BOOL hasTxnobuf; 
@property (assign,nonatomic) unsigned long long txnobuf;                //@synthesize txnobuf=_txnobuf - In the implementation block
@property (assign,nonatomic) BOOL hasTxnoassoc; 
@property (assign,nonatomic) unsigned long long txnoassoc;              //@synthesize txnoassoc=_txnoassoc - In the implementation block
@property (assign,nonatomic) BOOL hasTxrunt; 
@property (assign,nonatomic) unsigned long long txrunt;                 //@synthesize txrunt=_txrunt - In the implementation block
@property (assign,nonatomic) BOOL hasTxchit; 
@property (assign,nonatomic) unsigned long long txchit;                 //@synthesize txchit=_txchit - In the implementation block
@property (assign,nonatomic) BOOL hasTxcmiss; 
@property (assign,nonatomic) unsigned long long txcmiss;                //@synthesize txcmiss=_txcmiss - In the implementation block
-(void)setTxframe:(unsigned long long)arg1 ;
-(void)setHasTxframe:(BOOL)arg1 ;
-(BOOL)hasTxframe;
-(void)setTxbyte:(unsigned long long)arg1 ;
-(void)setHasTxbyte:(BOOL)arg1 ;
-(BOOL)hasTxbyte;
-(void)setTxretrans:(unsigned long long)arg1 ;
-(void)setHasTxretrans:(BOOL)arg1 ;
-(BOOL)hasTxretrans;
-(void)setTxerror:(unsigned long long)arg1 ;
-(void)setHasTxerror:(BOOL)arg1 ;
-(BOOL)hasTxerror;
-(void)setTxctl:(unsigned long long)arg1 ;
-(void)setHasTxctl:(BOOL)arg1 ;
-(BOOL)hasTxctl;
-(void)setTxprshort:(unsigned long long)arg1 ;
-(void)setHasTxprshort:(BOOL)arg1 ;
-(BOOL)hasTxprshort;
-(void)setTxserr:(unsigned long long)arg1 ;
-(void)setHasTxserr:(BOOL)arg1 ;
-(BOOL)hasTxserr;
-(void)setTxnobuf:(unsigned long long)arg1 ;
-(void)setHasTxnobuf:(BOOL)arg1 ;
-(BOOL)hasTxnobuf;
-(void)setTxnoassoc:(unsigned long long)arg1 ;
-(void)setHasTxnoassoc:(BOOL)arg1 ;
-(BOOL)hasTxnoassoc;
-(void)setTxrunt:(unsigned long long)arg1 ;
-(void)setHasTxrunt:(BOOL)arg1 ;
-(BOOL)hasTxrunt;
-(void)setTxchit:(unsigned long long)arg1 ;
-(void)setHasTxchit:(BOOL)arg1 ;
-(BOOL)hasTxchit;
-(void)setTxcmiss:(unsigned long long)arg1 ;
-(void)setHasTxcmiss:(BOOL)arg1 ;
-(BOOL)hasTxcmiss;
-(unsigned long long)txframe;
-(unsigned long long)txbyte;
-(unsigned long long)txretrans;
-(unsigned long long)txerror;
-(unsigned long long)txctl;
-(unsigned long long)txprshort;
-(unsigned long long)txserr;
-(unsigned long long)txnobuf;
-(unsigned long long)txnoassoc;
-(unsigned long long)txrunt;
-(unsigned long long)txchit;
-(unsigned long long)txcmiss;
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

