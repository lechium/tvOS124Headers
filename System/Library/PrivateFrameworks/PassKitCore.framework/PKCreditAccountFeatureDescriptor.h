/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:31 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKAccountFeatureDescriptor.h>

@class NSString;

@interface PKCreditAccountFeatureDescriptor : PKAccountFeatureDescriptor {

	unsigned long long _paymentFundingSourceTypes;
	unsigned long long _paymentPresets;
	unsigned long long _paymentFrequencies;
	NSString* _paymentTermsIdentifier;
	NSString* _fundingSourceTermsIdentifier;

}

@property (assign,nonatomic) unsigned long long paymentFundingSourceTypes;              //@synthesize paymentFundingSourceTypes=_paymentFundingSourceTypes - In the implementation block
@property (assign,nonatomic) unsigned long long paymentPresets;                         //@synthesize paymentPresets=_paymentPresets - In the implementation block
@property (assign,nonatomic) unsigned long long paymentFrequencies;                     //@synthesize paymentFrequencies=_paymentFrequencies - In the implementation block
@property (nonatomic,copy) NSString * paymentTermsIdentifier;                           //@synthesize paymentTermsIdentifier=_paymentTermsIdentifier - In the implementation block
@property (nonatomic,copy) NSString * fundingSourceTermsIdentifier;                     //@synthesize fundingSourceTermsIdentifier=_fundingSourceTermsIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)fundingSourceTermsIdentifier;
-(void)setFundingSourceTermsIdentifier:(NSString *)arg1 ;
-(unsigned long long)paymentFundingSourceTypes;
-(NSString *)paymentTermsIdentifier;
-(void)setPaymentTermsIdentifier:(NSString *)arg1 ;
-(BOOL)isEqualToCreditAccountFeatureDescriptor:(id)arg1 ;
-(void)setPaymentFundingSourceTypes:(unsigned long long)arg1 ;
-(unsigned long long)paymentPresets;
-(void)setPaymentPresets:(unsigned long long)arg1 ;
-(unsigned long long)paymentFrequencies;
-(void)setPaymentFrequencies:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
@end

