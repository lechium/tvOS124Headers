/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 3:39:10 AM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDAppBBPower : PBCodable <NSCopying> {

	NSString* _bundleName;
	unsigned _powerMicroWatt;
	int _rAT;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasRAT; 
@property (assign,nonatomic) int rAT;                              //@synthesize rAT=_rAT - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleName; 
@property (nonatomic,retain) NSString * bundleName;                //@synthesize bundleName=_bundleName - In the implementation block
@property (assign,nonatomic) BOOL hasPowerMicroWatt; 
@property (assign,nonatomic) unsigned powerMicroWatt;              //@synthesize powerMicroWatt=_powerMicroWatt - In the implementation block
-(void)setBundleName:(NSString *)arg1 ;
-(int)rAT;
-(void)setRAT:(int)arg1 ;
-(void)setHasRAT:(BOOL)arg1 ;
-(BOOL)hasRAT;
-(id)rATAsString:(int)arg1 ;
-(int)StringAsRAT:(id)arg1 ;
-(BOOL)hasBundleName;
-(void)setPowerMicroWatt:(unsigned)arg1 ;
-(void)setHasPowerMicroWatt:(BOOL)arg1 ;
-(BOOL)hasPowerMicroWatt;
-(NSString *)bundleName;
-(unsigned)powerMicroWatt;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

