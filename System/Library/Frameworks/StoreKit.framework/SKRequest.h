/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SKPaymentQueueClient;

@interface SKRequest : NSObject {

	id _requestInternal;

}

@property (nonatomic,copy) SKPaymentQueueClient * paymentQueueClient; 
@property (assign,nonatomic,__weak) id<SKRequestDelegate> delegate; 
-(void)_shutdownRequest;
-(void)_beginBackgroundTask;
-(void)_endBackgroundTask;
-(void)_startWithMessage:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(SKPaymentQueueClient *)paymentQueueClient;
-(void)setPaymentQueueClient:(SKPaymentQueueClient *)arg1 ;
-(id)init;
-(void)setDelegate:(id<SKRequestDelegate>)arg1 ;
-(id<SKRequestDelegate>)delegate;
-(void)cancel;
-(void)start;
-(void)_start;
@end

