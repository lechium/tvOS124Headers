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

@class NSData, NSString;

@interface SISchemaServerEnvelope : PBCodable <NSCopying> {

	int _connectionType;
	NSData* _podID;
	NSString* _serverVersion;
	SCD_Struct_SI1 _has;

}

@property (nonatomic,readonly) BOOL hasPodID; 
@property (nonatomic,retain) NSData * podID;                        //@synthesize podID=_podID - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) int connectionType;                    //@synthesize connectionType=_connectionType - In the implementation block
@property (nonatomic,readonly) BOOL hasServerVersion; 
@property (nonatomic,retain) NSString * serverVersion;              //@synthesize serverVersion=_serverVersion - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)connectionType;
-(void)setConnectionType:(int)arg1 ;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(BOOL)hasConnectionType;
-(id)connectionTypeAsString:(int)arg1 ;
-(int)StringAsConnectionType:(id)arg1 ;
-(BOOL)hasServerVersion;
-(NSString *)serverVersion;
-(void)setServerVersion:(NSString *)arg1 ;
-(void)setPodID:(NSData *)arg1 ;
-(BOOL)hasPodID;
-(NSData *)podID;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end
