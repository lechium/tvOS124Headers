/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCalendar, NSMutableDictionary, PKCompoundInterestCalculatorConfiguration;

@interface PKCompoundInterestCalculator : NSObject {

	NSCalendar* _calendar;
	NSMutableDictionary* _toDateCache;
	PKCompoundInterestCalculatorConfiguration* _configuration;

}

@property (nonatomic,readonly) PKCompoundInterestCalculatorConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(id)compoundInterestWithPaymentOfAmount:(id)arg1 ;
-(id)compoundInterestForPaymentOfAmount:(id)arg1 onDate:(id)arg2 ;
-(BOOL)_interestCanBeCalculated;
-(id)_rawCompoundInterestForPaymentOfAmount:(id)arg1 onDate:(id)arg2 includeNewBalance:(BOOL)arg3 ;
-(id)_rawUnpostedInterestCalculationForPaymentOfAmount:(id)arg1 onDate:(id)arg2 includeNewPurchases:(BOOL)arg3 ;
-(BOOL)_date:(id)arg1 isApplicableForProcessingDate:(id)arg2 ;
-(id)_creditsForProcessingDate:(id)arg1 ;
-(id)_additionalBalanceForProcessingDate:(id)arg1 ;
-(id)compoundInterest;
-(PKCompoundInterestCalculatorConfiguration *)configuration;
-(id)initWithConfiguration:(id)arg1 ;
@end

