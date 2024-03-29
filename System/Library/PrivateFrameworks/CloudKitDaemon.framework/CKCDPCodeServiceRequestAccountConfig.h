/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CKCDPCodeServiceRequestAccountConfig : PBCodable <NSCopying> {

	BOOL _corporateSharingEnabled;
	SCD_Struct_CK1 _has;

}

@property (assign,nonatomic) BOOL hasCorporateSharingEnabled; 
@property (assign,nonatomic) BOOL corporateSharingEnabled;                 //@synthesize corporateSharingEnabled=_corporateSharingEnabled - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setCorporateSharingEnabled:(BOOL)arg1 ;
-(void)setHasCorporateSharingEnabled:(BOOL)arg1 ;
-(BOOL)hasCorporateSharingEnabled;
-(BOOL)corporateSharingEnabled;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

