/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CLPMeta, NSData;

@interface CLPAppCollectionRequest : PBRequest <NSCopying> {

	NSMutableArray* _appLocations;
	CLPMeta* _meta;
	NSData* _signature;

}

@property (nonatomic,retain) CLPMeta * meta;                             //@synthesize meta=_meta - In the implementation block
@property (nonatomic,retain) NSMutableArray * appLocations;              //@synthesize appLocations=_appLocations - In the implementation block
@property (nonatomic,readonly) BOOL hasSignature; 
@property (nonatomic,retain) NSData * signature;                         //@synthesize signature=_signature - In the implementation block
+(Class)appLocationType;
-(void)addAppLocation:(id)arg1 ;
-(void)setMeta:(CLPMeta *)arg1 ;
-(unsigned long long)appLocationsCount;
-(void)clearAppLocations;
-(id)appLocationAtIndex:(unsigned long long)arg1 ;
-(CLPMeta *)meta;
-(NSMutableArray *)appLocations;
-(void)setAppLocations:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(NSData *)signature;
-(void)setSignature:(NSData *)arg1 ;
-(BOOL)hasSignature;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

