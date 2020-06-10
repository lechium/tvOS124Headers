//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDXPCDaemonProtocol-Protocol.h"

@class NSDate, NSDictionary, NSString;

@protocol SFPairedDeviceDaemonInterface <SDXPCDaemonProtocol>
- (void)triggerChargingUIWithDismissHandler:(void (^)(NSError *))arg1;
- (void)sendDashboardEntryWithName:(NSString *)arg1 dict:(NSDictionary *)arg2;
- (void)sendDismissUIWithReason:(long long)arg1;
- (void)initialViewControllerDidDisappear;
- (void)initialViewControllerDidAppear;
- (void)sendAnimationDate:(NSDate *)arg1;
- (void)requestAnimationDateWithCompletion:(void (^)(NSDate *, NSError *))arg1;
@end

