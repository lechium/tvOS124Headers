//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceProtocol-Protocol.h"

@class CMMotionAlarm, NSString;
@protocol CLMotionAlarmNotifierClientProtocol;

@protocol CLMotionAlarmNotifierProtocol <CLNotifierServiceProtocol>
- (void)acknowledgeAlarm:(CMMotionAlarm *)arg1 withReply:(void (^)(CMMotionAlarm *, int))arg2;
- (void)unregisterAlarm:(CMMotionAlarm *)arg1 withReply:(void (^)(CMMotionAlarm *, int))arg2;
- (void)registerAlarm:(CMMotionAlarm *)arg1 withReply:(void (^)(CMMotionAlarm *, int))arg2;
- (void)unregisterClient:(struct Name (^)(void))arg1;
- (void)registerClient:(struct Name (^)(void))arg1 adapter:(byref id <CLMotionAlarmNotifierClientProtocol>)arg2;
- (_Bool)syncgetDoSync:(void (^)(struct CLMotionAlarmNotifier *))arg1;
- (void)doAsync:(void (^)(struct CLMotionAlarmNotifier *))arg1 withReply:(void (^)(void))arg2;
- (void)doAsync:(void (^)(struct CLMotionAlarmNotifier *))arg1;

@optional
- (void)launchWatchApplicationForCompanion:(NSString *)arg1;
- (void)launchRemoteApplication:(NSString *)arg1 withReply:(void (^)(int))arg2;
@end

