/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKDPAssetUploadTokenRetrieveRequestHeaderInfo : PBCodable <NSCopying> {

	NSString* _headerKey;
	NSString* _headerValue;

}

@property (nonatomic,retain) NSString * headerKey;                //@synthesize headerKey=_headerKey - In the implementation block
@property (nonatomic,retain) NSString * headerValue;              //@synthesize headerValue=_headerValue - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHeaderKey:(NSString *)arg1 ;
-(void)setHeaderValue:(NSString *)arg1 ;
-(NSString *)headerKey;
-(NSString *)headerValue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

