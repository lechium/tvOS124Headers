/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSString;

@interface SSMetricsPurchaseEvent : SSMetricsBaseEvent

@property (assign,nonatomic) double requestStartTime; 
@property (assign,nonatomic) double responseEndTime; 
@property (assign,nonatomic) double responseStartTime; 
@property (nonatomic,retain) NSString * transactionIdentifier; 
-(void)setResponseEndTime:(double)arg1 ;
-(double)requestStartTime;
-(void)setRequestStartTime:(double)arg1 ;
-(double)responseEndTime;
-(double)responseStartTime;
-(void)setResponseStartTime:(double)arg1 ;
-(void)addFieldsFromPurchaseResponse:(id)arg1 ;
-(NSString *)transactionIdentifier;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(id)init;
@end
