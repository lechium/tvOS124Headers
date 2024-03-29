/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKContinuityPaymentCoordinatorDelegate <PKContinuityPaymentServiceDelegate>
@required
-(void)continuityPaymentCoordinatorDidTimeoutUpdatePaymentDevices:(id)arg1;
-(void)continuityPaymentCoordinator:(id)arg1 didTimeoutTotalWithPaymentDevices:(id)arg2;
-(void)continuityPaymentCoordinator:(id)arg1 didReceiveUpdatedPaymentDevices:(id)arg2;
-(void)continuityPaymentCoordinator:(id)arg1 didReceivePayment:(id)arg2;
-(void)continuityPaymentCoordinatorDidReceiveCancellation:(id)arg1;

@end

