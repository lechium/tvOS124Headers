/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDSiriSessionLoadTimeout : PBCodable <NSCopying> {

	unsigned long long _connectionTechnology;
	unsigned long long _interfaceIndex;
	unsigned long long _sendBufferSize;
	unsigned long long _timestamp;
	NSString* _connectionURL;
	BOOL _wwanPreferred;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasConnectionURL; 
@property (nonatomic,retain) NSString * connectionURL;                             //@synthesize connectionURL=_connectionURL - In the implementation block
@property (assign,nonatomic) BOOL hasInterfaceIndex; 
@property (assign,nonatomic) unsigned long long interfaceIndex;                    //@synthesize interfaceIndex=_interfaceIndex - In the implementation block
@property (assign,nonatomic) BOOL hasSendBufferSize; 
@property (assign,nonatomic) unsigned long long sendBufferSize;                    //@synthesize sendBufferSize=_sendBufferSize - In the implementation block
@property (assign,nonatomic) BOOL hasWwanPreferred; 
@property (assign,nonatomic) BOOL wwanPreferred;                                   //@synthesize wwanPreferred=_wwanPreferred - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionTechnology; 
@property (assign,nonatomic) unsigned long long connectionTechnology;              //@synthesize connectionTechnology=_connectionTechnology - In the implementation block
-(void)setWwanPreferred:(BOOL)arg1 ;
-(void)setHasWwanPreferred:(BOOL)arg1 ;
-(BOOL)hasWwanPreferred;
-(BOOL)wwanPreferred;
-(void)setConnectionURL:(NSString *)arg1 ;
-(BOOL)hasConnectionURL;
-(void)setInterfaceIndex:(unsigned long long)arg1 ;
-(void)setHasInterfaceIndex:(BOOL)arg1 ;
-(BOOL)hasInterfaceIndex;
-(void)setSendBufferSize:(unsigned long long)arg1 ;
-(void)setHasSendBufferSize:(BOOL)arg1 ;
-(BOOL)hasSendBufferSize;
-(void)setConnectionTechnology:(unsigned long long)arg1 ;
-(void)setHasConnectionTechnology:(BOOL)arg1 ;
-(BOOL)hasConnectionTechnology;
-(NSString *)connectionURL;
-(unsigned long long)interfaceIndex;
-(unsigned long long)sendBufferSize;
-(unsigned long long)connectionTechnology;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

