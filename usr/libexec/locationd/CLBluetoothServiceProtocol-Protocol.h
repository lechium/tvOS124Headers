//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceProtocol-Protocol.h"

@class NSData;

@protocol CLBluetoothServiceProtocol <CLNotifierServiceProtocol>
- (void)scan;
- (_Bool)syncgetHasConnectedDevices;
- (void)setAFHChannelAvoidance:(NSData *)arg1;
- (void)clearAFHSettings;
- (void)fetchHasConnectedDevicesWithReply:(void (^)(_Bool))arg1;
- (_Bool)syncgetDoSync:(void (^)(struct CLBluetoothService *))arg1;
- (void)doAsync:(void (^)(struct CLBluetoothService *))arg1 withReply:(void (^)(void))arg2;
- (void)doAsync:(void (^)(struct CLBluetoothService *))arg1;
@end

