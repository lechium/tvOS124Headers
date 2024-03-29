/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, PKProtobufShippingMethod, PKProtobufPaymentToken;

@interface PKProtobufPayment : PBCodable <NSCopying> {

	NSData* _billingContact;
	NSData* _shippingContact;
	PKProtobufShippingMethod* _shippingMethod;
	PKProtobufPaymentToken* _token;

}

@property (nonatomic,readonly) BOOL hasToken; 
@property (nonatomic,retain) PKProtobufPaymentToken * token;                         //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) BOOL hasBillingContact; 
@property (nonatomic,retain) NSData * billingContact;                                //@synthesize billingContact=_billingContact - In the implementation block
@property (nonatomic,readonly) BOOL hasShippingContact; 
@property (nonatomic,retain) NSData * shippingContact;                               //@synthesize shippingContact=_shippingContact - In the implementation block
@property (nonatomic,readonly) BOOL hasShippingMethod; 
@property (nonatomic,retain) PKProtobufShippingMethod * shippingMethod;              //@synthesize shippingMethod=_shippingMethod - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasToken;
-(NSData *)shippingContact;
-(PKProtobufShippingMethod *)shippingMethod;
-(void)setBillingContact:(NSData *)arg1 ;
-(void)setShippingContact:(NSData *)arg1 ;
-(void)setShippingMethod:(PKProtobufShippingMethod *)arg1 ;
-(BOOL)hasBillingContact;
-(BOOL)hasShippingContact;
-(BOOL)hasShippingMethod;
-(NSData *)billingContact;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PKProtobufPaymentToken *)token;
-(void)setToken:(PKProtobufPaymentToken *)arg1 ;
@end

