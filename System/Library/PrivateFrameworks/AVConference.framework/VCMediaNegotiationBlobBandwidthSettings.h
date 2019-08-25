/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCMediaNegotiationBlobBandwidthSettings : PBCodable <NSCopying> {

	int _configuration;
	unsigned _maxBandwidth;

}

@property (assign,nonatomic) int configuration;                  //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) unsigned maxBandwidth;              //@synthesize maxBandwidth=_maxBandwidth - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)configurationAsString:(int)arg1 ;
-(int)StringAsConfiguration:(id)arg1 ;
-(unsigned)maxBandwidth;
-(void)setMaxBandwidth:(unsigned)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)configuration;
-(void)setConfiguration:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

