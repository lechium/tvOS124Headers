/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NRPBPropertyValue;

@interface NRPBDevicePropertyDiff : PBCodable <NSCopying> {

	NRPBPropertyValue* _value;

}

@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) NRPBPropertyValue * value;              //@synthesize value=_value - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasValue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NRPBPropertyValue *)value;
-(void)setValue:(NRPBPropertyValue *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

