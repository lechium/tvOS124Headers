/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEODirectionsCollectionRequest : PBRequest <NSCopying> {

	NSMutableArray* _requestElements;

}

@property (nonatomic,retain) NSMutableArray * requestElements;              //@synthesize requestElements=_requestElements - In the implementation block
+(Class)requestElementsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addRequestElements:(id)arg1 ;
-(unsigned long long)requestElementsCount;
-(void)clearRequestElements;
-(id)requestElementsAtIndex:(unsigned long long)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(NSMutableArray *)requestElements;
-(void)setRequestElements:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

