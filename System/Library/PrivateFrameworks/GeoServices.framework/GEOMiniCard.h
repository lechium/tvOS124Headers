/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GEOFormattedString;

@interface GEOMiniCard : PBCodable <NSCopying> {

	NSString* _buttonText;
	GEOFormattedString* _detail;
	GEOFormattedString* _title;
	BOOL _shouldEmphasize;
	SCD_Struct_GE1 _has;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) GEOFormattedString * title;               //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasDetail; 
@property (nonatomic,retain) GEOFormattedString * detail;              //@synthesize detail=_detail - In the implementation block
@property (nonatomic,readonly) BOOL hasButtonText; 
@property (nonatomic,retain) NSString * buttonText;                    //@synthesize buttonText=_buttonText - In the implementation block
@property (assign,nonatomic) BOOL hasShouldEmphasize; 
@property (assign,nonatomic) BOOL shouldEmphasize;                     //@synthesize shouldEmphasize=_shouldEmphasize - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDetail;
-(GEOFormattedString *)detail;
-(void)setButtonText:(NSString *)arg1 ;
-(BOOL)hasButtonText;
-(void)setShouldEmphasize:(BOOL)arg1 ;
-(void)setHasShouldEmphasize:(BOOL)arg1 ;
-(BOOL)hasShouldEmphasize;
-(NSString *)buttonText;
-(BOOL)shouldEmphasize;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setTitle:(GEOFormattedString *)arg1 ;
-(GEOFormattedString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasTitle;
-(void)setDetail:(GEOFormattedString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

