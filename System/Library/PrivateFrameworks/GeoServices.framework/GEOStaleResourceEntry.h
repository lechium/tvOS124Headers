/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOStaleResourceEntry : PBCodable <NSCopying> {

	int _ageInSeconds;
	NSString* _canonicalName;
	NSString* _desiredName;
	NSString* _storedName;
	SCD_Struct_GE1 _has;

}

@property (nonatomic,readonly) BOOL hasCanonicalName; 
@property (nonatomic,retain) NSString * canonicalName;              //@synthesize canonicalName=_canonicalName - In the implementation block
@property (nonatomic,readonly) BOOL hasStoredName; 
@property (nonatomic,retain) NSString * storedName;                 //@synthesize storedName=_storedName - In the implementation block
@property (nonatomic,readonly) BOOL hasDesiredName; 
@property (nonatomic,retain) NSString * desiredName;                //@synthesize desiredName=_desiredName - In the implementation block
@property (assign,nonatomic) BOOL hasAgeInSeconds; 
@property (assign,nonatomic) int ageInSeconds;                      //@synthesize ageInSeconds=_ageInSeconds - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setCanonicalName:(NSString *)arg1 ;
-(void)setDesiredName:(NSString *)arg1 ;
-(void)setStoredName:(NSString *)arg1 ;
-(void)setAgeInSeconds:(int)arg1 ;
-(NSString *)canonicalName;
-(BOOL)hasCanonicalName;
-(BOOL)hasStoredName;
-(BOOL)hasDesiredName;
-(void)setHasAgeInSeconds:(BOOL)arg1 ;
-(BOOL)hasAgeInSeconds;
-(NSString *)storedName;
-(NSString *)desiredName;
-(int)ageInSeconds;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

