/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOServicesState : PBCodable <NSCopying> {

	NSString* _bogusFieldForTestingPurposes;

}

@property (nonatomic,readonly) BOOL hasBogusFieldForTestingPurposes; 
@property (nonatomic,retain) NSString * bogusFieldForTestingPurposes;              //@synthesize bogusFieldForTestingPurposes=_bogusFieldForTestingPurposes - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setBogusFieldForTestingPurposes:(NSString *)arg1 ;
-(BOOL)hasBogusFieldForTestingPurposes;
-(NSString *)bogusFieldForTestingPurposes;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

