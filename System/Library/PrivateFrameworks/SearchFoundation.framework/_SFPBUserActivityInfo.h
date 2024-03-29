/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBUserActivityInfo.h>
@class NSString, _SFPBURL, NSData;


@protocol _SFPBUserActivityInfo <NSObject>
@property (assign,nonatomic) int valueType; 
@property (nonatomic,copy) NSString * key; 
@property (nonatomic,copy) NSString * stringValue; 
@property (nonatomic,retain) _SFPBURL * urlValue; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setUrlValue:(id)arg1;
-(_SFPBURL *)urlValue;
-(int)valueType;
-(void)setValueType:(int)arg1;
-(id)initWithJSON:(id)arg1;
-(NSString *)stringValue;
-(NSString *)key;
-(id)initWithDictionary:(id)arg1;
-(void)setKey:(id)arg1;
-(void)setStringValue:(id)arg1;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _SFPBURL, NSData;

@interface _SFPBUserActivityInfo : PBCodable <_SFPBUserActivityInfo, NSSecureCoding> {

	int _valueType;
	NSString* _key;
	NSString* _stringValue;
	_SFPBURL* _urlValue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int valueType;                         //@synthesize valueType=_valueType - In the implementation block
@property (nonatomic,copy) NSString * key;                          //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * stringValue;                  //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,retain) _SFPBURL * urlValue;                   //@synthesize urlValue=_urlValue - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setUrlValue:(_SFPBURL *)arg1 ;
-(_SFPBURL *)urlValue;
-(int)valueType;
-(void)setValueType:(int)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)stringValue;
-(NSString *)key;
-(id)initWithDictionary:(id)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setStringValue:(NSString *)arg1 ;
-(NSData *)jsonData;
@end

