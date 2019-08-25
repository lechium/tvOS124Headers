/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKRecordObject.h>

@class NSString, PKCurrencyAmount, PKCreditAccountRates;

@interface PKAccountCreditTermsUpdate : NSObject <NSSecureCoding, PKRecordObject> {

	long long _type;
	long long _initiator;
	NSString* _requestIdentifier;
	NSString* _adverseActionContentIdentifier;
	PKCurrencyAmount* _creditLimit;
	PKCreditAccountRates* _rates;

}

@property (assign,nonatomic) long long type;                                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long initiator;                                  //@synthesize initiator=_initiator - In the implementation block
@property (nonatomic,copy) NSString * requestIdentifier;                           //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,copy) NSString * adverseActionContentIdentifier;              //@synthesize adverseActionContentIdentifier=_adverseActionContentIdentifier - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * creditLimit;                       //@synthesize creditLimit=_creditLimit - In the implementation block
@property (nonatomic,retain) PKCreditAccountRates * rates;                         //@synthesize rates=_rates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recordNamePrefix;
+(id)recordType;
+(BOOL)supportsSecureCoding;
-(NSString *)requestIdentifier;
-(PKCurrencyAmount *)creditLimit;
-(void)setCreditLimit:(PKCurrencyAmount *)arg1 ;
-(void)encodeWithRecord:(id)arg1 ;
-(void)setInitiator:(long long)arg1 ;
-(NSString *)adverseActionContentIdentifier;
-(void)setAdverseActionContentIdentifier:(NSString *)arg1 ;
-(PKCreditAccountRates *)rates;
-(void)setRates:(PKCreditAccountRates *)arg1 ;
-(id)initWithRecord:(id)arg1 ;
-(long long)initiator;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setRequestIdentifier:(NSString *)arg1 ;
@end

