/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentDataItem.h>

@class NSDate, NSTimeZone;

@interface PKPaymentDateDataItem : PKPaymentDataItem {

	NSDate* _paymentDate;
	NSTimeZone* _paymentTimeZone;
	long long _paymentFrequency;

}

@property (nonatomic,retain) NSDate * paymentDate;                      //@synthesize paymentDate=_paymentDate - In the implementation block
@property (nonatomic,retain) NSTimeZone * paymentTimeZone;              //@synthesize paymentTimeZone=_paymentTimeZone - In the implementation block
@property (assign,nonatomic) long long paymentFrequency;                //@synthesize paymentFrequency=_paymentFrequency - In the implementation block
+(long long)dataType;
-(NSDate *)paymentDate;
-(long long)paymentFrequency;
-(NSTimeZone *)paymentTimeZone;
-(void)setPaymentDate:(NSDate *)arg1 ;
-(void)setPaymentFrequency:(long long)arg1 ;
-(void)setPaymentTimeZone:(NSTimeZone *)arg1 ;
-(BOOL)isValidWithError:(id*)arg1 ;
-(id)initWithModel:(id)arg1 ;
@end
