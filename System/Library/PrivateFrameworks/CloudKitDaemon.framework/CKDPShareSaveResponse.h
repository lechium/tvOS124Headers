/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPShare;

@interface CKDPShareSaveResponse : PBCodable <NSCopying> {

	CKDPShare* _share;

}

@property (nonatomic,readonly) BOOL hasShare; 
@property (nonatomic,retain) CKDPShare * share;              //@synthesize share=_share - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasShare;
-(CKDPShare *)share;
-(void)setShare:(CKDPShare *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

