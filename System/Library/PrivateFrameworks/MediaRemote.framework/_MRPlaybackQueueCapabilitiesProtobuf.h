/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRPlaybackQueueCapabilitiesProtobuf : PBCodable <NSCopying> {

	BOOL _requestByIdentifiers;
	BOOL _requestByRange;
	BOOL _requestByRequest;
	SCD_Struct_MR6 _has;

}

@property (assign,nonatomic) BOOL hasRequestByRange; 
@property (assign,nonatomic) BOOL requestByRange;                       //@synthesize requestByRange=_requestByRange - In the implementation block
@property (assign,nonatomic) BOOL hasRequestByIdentifiers; 
@property (assign,nonatomic) BOOL requestByIdentifiers;                 //@synthesize requestByIdentifiers=_requestByIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL hasRequestByRequest; 
@property (assign,nonatomic) BOOL requestByRequest;                     //@synthesize requestByRequest=_requestByRequest - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setRequestByRange:(BOOL)arg1 ;
-(void)setRequestByIdentifiers:(BOOL)arg1 ;
-(BOOL)requestByRange;
-(BOOL)requestByIdentifiers;
-(BOOL)requestByRequest;
-(void)setHasRequestByRange:(BOOL)arg1 ;
-(BOOL)hasRequestByRange;
-(void)setHasRequestByIdentifiers:(BOOL)arg1 ;
-(BOOL)hasRequestByIdentifiers;
-(void)setRequestByRequest:(BOOL)arg1 ;
-(void)setHasRequestByRequest:(BOOL)arg1 ;
-(BOOL)hasRequestByRequest;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

