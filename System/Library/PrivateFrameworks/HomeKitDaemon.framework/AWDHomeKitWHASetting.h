/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, AWDHomeKitValue;

@interface AWDHomeKitWHASetting : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _keyPath;
	AWDHomeKitValue* _value;
	SCD_Struct_AW6 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasKeyPath; 
@property (nonatomic,retain) NSString * keyPath;                        //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) AWDHomeKitValue * value;                   //@synthesize value=_value - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasValue;
-(BOOL)hasKeyPath;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(AWDHomeKitValue *)value;
-(void)setValue:(AWDHomeKitValue *)arg1 ;
-(NSString *)keyPath;
-(void)setKeyPath:(NSString *)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

