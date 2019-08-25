/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKRecordObject.h>

@class NSString, NSDate, NSDecimalNumber;

@interface PKBillPaymentSelectedSuggestedAmountData : NSObject <NSSecureCoding, PKRecordObject> {

	NSString* _statementIdentifier;
	NSDate* _transactionDate;
	unsigned long long _suggestedAmountCategory;
	NSDecimalNumber* _transactionAmount;

}

@property (nonatomic,copy) NSString * statementIdentifier;                            //@synthesize statementIdentifier=_statementIdentifier - In the implementation block
@property (nonatomic,copy) NSDate * transactionDate;                                  //@synthesize transactionDate=_transactionDate - In the implementation block
@property (assign,nonatomic) unsigned long long suggestedAmountCategory;              //@synthesize suggestedAmountCategory=_suggestedAmountCategory - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * transactionAmount;                       //@synthesize transactionAmount=_transactionAmount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recordNamePrefix;
+(id)recordType;
+(BOOL)supportsSecureCoding;
-(void)encodeWithRecord:(id)arg1 ;
-(NSString *)statementIdentifier;
-(void)setStatementIdentifier:(NSString *)arg1 ;
-(NSDate *)transactionDate;
-(NSDecimalNumber *)transactionAmount;
-(void)setTransactionDate:(NSDate *)arg1 ;
-(id)initWithStatementIdentifier:(id)arg1 transactionDate:(id)arg2 transactionAmount:(id)arg3 suggestedAmountCategory:(unsigned long long)arg4 ;
-(unsigned long long)suggestedAmountCategory;
-(void)setSuggestedAmountCategory:(unsigned long long)arg1 ;
-(void)setTransactionAmount:(NSDecimalNumber *)arg1 ;
-(id)initWithRecord:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
@end
