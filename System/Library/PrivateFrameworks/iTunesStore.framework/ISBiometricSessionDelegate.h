/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ISBiometricSessionDelegate <NSObject>
@optional
-(void)sender:(id)arg1 didFallbackToPassword:(BOOL)arg2;
-(void)sender:(id)arg1 shouldContinueTouchIDSession:(BOOL)arg2;
-(void)sender:(id)arg1 willSendChallenge:(id)arg2 andSignature:(id)arg3 andPaymentTokenData:(id)arg4 isExtendedAction:(BOOL)arg5 isPayment:(BOOL)arg6 additionalHeaders:(id)arg7;

@end

