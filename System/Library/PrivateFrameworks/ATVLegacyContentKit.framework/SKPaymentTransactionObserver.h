/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKPaymentTransactionObserver <NSObject>
@optional
-(void)paymentQueue:(id)arg1 removedTransactions:(id)arg2;
-(void)paymentQueue:(id)arg1 restoreCompletedTransactionsFailedWithError:(id)arg2;
-(void)paymentQueueRestoreCompletedTransactionsFinished:(id)arg1;
-(void)paymentQueue:(id)arg1 updatedDownloads:(id)arg2;
-(BOOL)paymentQueue:(id)arg1 shouldAddStorePayment:(id)arg2 forProduct:(id)arg3;

@required
-(void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;

@end

