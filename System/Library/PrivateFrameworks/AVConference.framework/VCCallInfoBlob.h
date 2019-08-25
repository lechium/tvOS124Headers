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

@class NSString;

@interface VCCallInfoBlob : PBCodable <NSCopying> {

	unsigned _callID;
	unsigned _clientVersion;
	NSString* _deviceType;
	NSString* _frameworkVersion;
	NSString* _osVersion;

}

@property (assign,nonatomic) unsigned callID;                          //@synthesize callID=_callID - In the implementation block
@property (assign,nonatomic) unsigned clientVersion;                   //@synthesize clientVersion=_clientVersion - In the implementation block
@property (nonatomic,retain) NSString * deviceType;                    //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,retain) NSString * frameworkVersion;              //@synthesize frameworkVersion=_frameworkVersion - In the implementation block
@property (nonatomic,retain) NSString * osVersion;                     //@synthesize osVersion=_osVersion - In the implementation block
-(void)setCallID:(unsigned)arg1 ;
-(unsigned)callID;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)osVersion;
-(void)setOsVersion:(NSString *)arg1 ;
-(void)setClientVersion:(unsigned)arg1 ;
-(unsigned)clientVersion;
-(void)setFrameworkVersion:(NSString *)arg1 ;
-(NSString *)frameworkVersion;
-(void)setDeviceType:(NSString *)arg1 ;
-(NSString *)deviceType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

