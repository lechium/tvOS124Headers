/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:30 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PKAccountPaymentFundingDetails;

@interface PKAccountPaymentFundingSource : NSObject <NSSecureCoding> {

	NSString* _identifier;
	long long _type;
	NSString* _accountSuffix;
	PKAccountPaymentFundingDetails* _fundingDetails;

}

@property (nonatomic,copy) NSString * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long type;                                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * accountSuffix;                                     //@synthesize accountSuffix=_accountSuffix - In the implementation block
@property (nonatomic,copy) PKAccountPaymentFundingDetails * fundingDetails;              //@synthesize fundingDetails=_fundingDetails - In the implementation block
+(Class)fundingDetailsClassForFundingSourceType:(long long)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)jsonString;
-(id)jsonDictionaryRepresentation;
-(id)hashComponentWithCertificatesResponse:(id)arg1 ;
-(id)jsonDictionaryRepresentationWithCertificatesResponse:(id)arg1 ;
-(NSString *)accountSuffix;
-(id)bankAccountRepresentation;
-(void)setAccountSuffix:(NSString *)arg1 ;
-(PKAccountPaymentFundingDetails *)fundingDetails;
-(id)displayDescription;
-(void)setFundingDetails:(PKAccountPaymentFundingDetails *)arg1 ;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
@end

