/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class PKPaymentTransaction, PKPaymentApplication, NSObject;

@interface PKPaymentTransactionMapsLookupRequest : NSObject {

	PKPaymentTransaction* _transaction;
	PKPaymentApplication* _paymentApplication;
	NSObject*<OS_dispatch_queue> _internalQueue;
	BOOL _clearingAttempt;

}

@property (assign,getter=isClearingAttempt,nonatomic) BOOL clearingAttempt;              //@synthesize clearingAttempt=_clearingAttempt - In the implementation block
-(id)_merchantLookupRequest;
-(id)_brandFromMapItem:(id)arg1 ;
-(id)_merchantFromMapItem:(id)arg1 ;
-(id)initWithTransaction:(id)arg1 paymentApplication:(id)arg2 ;
-(void)startLookupWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isClearingAttempt;
-(void)setClearingAttempt:(BOOL)arg1 ;
@end

