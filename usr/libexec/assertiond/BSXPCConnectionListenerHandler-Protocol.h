//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSString;
@protocol OS_xpc_object;

@protocol BSXPCConnectionListenerHandler <NSObject>
- (void)handleIncomingConnection:(NSObject<OS_xpc_object> *)arg1 forService:(NSString *)arg2;
@end

