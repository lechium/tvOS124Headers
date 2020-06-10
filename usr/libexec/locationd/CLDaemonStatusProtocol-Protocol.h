//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceProtocol-Protocol.h"

@class NSString;

@protocol CLDaemonStatusProtocol <CLNotifierServiceProtocol>
- (_Bool)syncgetRegisterPowerKeepAlive:(_Bool)arg1 client:(unsigned long long)arg2 dbgMessage:(NSString *)arg3;
- (_Bool)syncgetPushServiceConnectionState;
- (void)notifyMigrationPerformed;
- (_Bool)syncgetIsSleeping;
- (_Bool)syncgetHasLingerClients;
- (int)syncgetReachability;
- (_Bool)syncgetAirplaneMode:(_Bool *)arg1;
- (void)fetchWirelessModemClientCountWithReply:(void (^)(long long))arg1;
- (void)fetchIsBatteryConnectedWithReply:(void (^)(_Bool))arg1;
- (void)fetchReachabilityWithReply:(void (^)(int))arg1;
- (void)fetchIsAirplaneModeEnabledWithReply:(void (^)(_Bool))arg1;
- (_Bool)syncgetDoSync:(void (^)(struct CLDaemonStatus *))arg1;
- (void)doAsync:(void (^)(struct CLDaemonStatus *))arg1 withReply:(void (^)(void))arg2;
- (void)doAsync:(void (^)(struct CLDaemonStatus *))arg1;
@end

