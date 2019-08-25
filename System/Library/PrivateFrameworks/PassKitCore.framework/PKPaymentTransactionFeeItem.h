/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:30 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PKCurrencyAmount;

@interface PKPaymentTransactionFeeItem : NSObject <NSSecureCoding> {

	NSString* _identifier;
	unsigned long long _type;
	PKCurrencyAmount* _currencyAmount;
	NSString* _localizedDisplayName;

}

@property (nonatomic,copy) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) PKCurrencyAmount * currencyAmount;              //@synthesize currencyAmount=_currencyAmount - In the implementation block
@property (nonatomic,copy) NSString * localizedDisplayName;                //@synthesize localizedDisplayName=_localizedDisplayName - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)localizedDisplayName;
-(void)setLocalizedDisplayName:(NSString *)arg1 ;
-(id)jsonDictionaryRepresentation;
-(PKCurrencyAmount *)currencyAmount;
-(void)setCurrencyAmount:(PKCurrencyAmount *)arg1 ;
-(void)_initWithFeeDictionary:(id)arg1 ;
-(BOOL)isEqualToFeeItem:(id)arg1 ;
-(id)initWithFeeDictionary:(id)arg1 ;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
@end

