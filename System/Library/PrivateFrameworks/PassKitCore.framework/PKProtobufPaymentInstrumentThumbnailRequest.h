/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKProtobufPaymentInstrumentThumbnailRequest : PBRequest <NSCopying> {

	double _height;
	double _width;
	NSString* _manifestHash;
	NSString* _passIdentifier;
	SCD_Struct_PK7 _has;

}

@property (nonatomic,readonly) BOOL hasPassIdentifier; 
@property (nonatomic,retain) NSString * passIdentifier;              //@synthesize passIdentifier=_passIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasManifestHash; 
@property (nonatomic,retain) NSString * manifestHash;                //@synthesize manifestHash=_manifestHash - In the implementation block
@property (assign,nonatomic) BOOL hasWidth; 
@property (assign,nonatomic) double width;                           //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) BOOL hasHeight; 
@property (assign,nonatomic) double height;                          //@synthesize height=_height - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setHasWidth:(BOOL)arg1 ;
-(BOOL)hasWidth;
-(void)setHasHeight:(BOOL)arg1 ;
-(BOOL)hasHeight;
-(NSString *)manifestHash;
-(void)setPassIdentifier:(NSString *)arg1 ;
-(void)setManifestHash:(NSString *)arg1 ;
-(NSString *)passIdentifier;
-(BOOL)hasPassIdentifier;
-(BOOL)hasManifestHash;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)width;
-(void)setWidth:(double)arg1 ;
-(void)setHeight:(double)arg1 ;
-(double)height;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

