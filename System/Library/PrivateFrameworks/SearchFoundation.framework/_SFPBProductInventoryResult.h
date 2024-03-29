/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBProductInventoryResult.h>
@class NSString, NSArray, NSData;


@protocol _SFPBProductInventoryResult <NSObject>
@property (nonatomic,copy) NSString * productIdentifier; 
@property (nonatomic,copy) NSArray * availabilitys; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setAvailabilitys:(id)arg1;
-(NSArray *)availabilitys;
-(void)addAvailability:(id)arg1;
-(void)clearAvailability;
-(unsigned long long)availabilityCount;
-(id)availabilityAtIndex:(unsigned long long)arg1;
-(NSString *)productIdentifier;
-(id)initWithJSON:(id)arg1;
-(void)setProductIdentifier:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSData;

@interface _SFPBProductInventoryResult : PBCodable <_SFPBProductInventoryResult, NSSecureCoding> {

	NSString* _productIdentifier;
	NSArray* _availabilitys;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * productIdentifier;              //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * availabilitys;                   //@synthesize availabilitys=_availabilitys - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(void)setAvailability:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setAvailabilitys:(NSArray *)arg1 ;
-(NSArray *)availabilitys;
-(void)addAvailability:(id)arg1 ;
-(void)clearAvailability;
-(unsigned long long)availabilityCount;
-(id)availabilityAtIndex:(unsigned long long)arg1 ;
-(NSString *)productIdentifier;
-(id)initWithJSON:(id)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
@end

