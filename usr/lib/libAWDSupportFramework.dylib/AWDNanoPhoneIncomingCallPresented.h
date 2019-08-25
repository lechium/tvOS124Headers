/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDNanoPhoneIncomingCallPresented : PBCodable <NSCopying> {

	unsigned long long _clientDisplayLatencyMs;
	unsigned long long _timestamp;
	NSString* _callProviderIdentifier;
	BOOL _isHosted;
	BOOL _isVideo;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasClientDisplayLatencyMs; 
@property (assign,nonatomic) unsigned long long clientDisplayLatencyMs;              //@synthesize clientDisplayLatencyMs=_clientDisplayLatencyMs - In the implementation block
@property (nonatomic,readonly) BOOL hasCallProviderIdentifier; 
@property (nonatomic,retain) NSString * callProviderIdentifier;                      //@synthesize callProviderIdentifier=_callProviderIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasIsVideo; 
@property (assign,nonatomic) BOOL isVideo;                                           //@synthesize isVideo=_isVideo - In the implementation block
@property (assign,nonatomic) BOOL hasIsHosted; 
@property (assign,nonatomic) BOOL isHosted;                                          //@synthesize isHosted=_isHosted - In the implementation block
-(void)setHasIsVideo:(BOOL)arg1 ;
-(BOOL)hasIsVideo;
-(void)setCallProviderIdentifier:(NSString *)arg1 ;
-(BOOL)hasCallProviderIdentifier;
-(void)setIsHosted:(BOOL)arg1 ;
-(void)setHasIsHosted:(BOOL)arg1 ;
-(BOOL)hasIsHosted;
-(NSString *)callProviderIdentifier;
-(BOOL)isHosted;
-(void)setClientDisplayLatencyMs:(unsigned long long)arg1 ;
-(void)setHasClientDisplayLatencyMs:(BOOL)arg1 ;
-(BOOL)hasClientDisplayLatencyMs;
-(unsigned long long)clientDisplayLatencyMs;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setIsVideo:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isVideo;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

