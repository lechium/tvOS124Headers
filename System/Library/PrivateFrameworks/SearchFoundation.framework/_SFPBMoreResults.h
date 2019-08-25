/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBMoreResults.h>
@class NSString, NSData;


@protocol _SFPBMoreResults <NSObject>
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithJSON:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(NSString *)label;
-(void)setLabel:(id)arg1;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface _SFPBMoreResults : PBCodable <_SFPBMoreResults, NSSecureCoding> {

	NSString* _label;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * label;                        //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
@end
