/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CLPAccessoryMeta : PBCodable <NSCopying> {

	NSString* _make;
	NSString* _model;
	NSString* _version;

}

@property (nonatomic,readonly) BOOL hasMake; 
@property (nonatomic,retain) NSString * make;                 //@synthesize make=_make - In the implementation block
@property (nonatomic,readonly) BOOL hasModel; 
@property (nonatomic,retain) NSString * model;                //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) BOOL hasVersion; 
@property (nonatomic,retain) NSString * version;              //@synthesize version=_version - In the implementation block
-(void)setMake:(NSString *)arg1 ;
-(BOOL)hasMake;
-(NSString *)make;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasVersion;
-(void)setModel:(NSString *)arg1 ;
-(BOOL)hasModel;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(NSString *)model;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

