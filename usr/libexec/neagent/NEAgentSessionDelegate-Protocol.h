//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NEAgentSession, NSObject, NSString;
@protocol OS_xpc_object;

@protocol NEAgentSessionDelegate
- (void)handleCancel;
- (void)handleMessage:(NSObject<OS_xpc_object> *)arg1 withOuterMessage:(NSObject<OS_xpc_object> *)arg2;
- (void)handleDisposeWithCompletionHandler:(void (^)(void))arg1;
- (void)handleInitWithCompletionHandler:(void (^)(_Bool))arg1;
- (id)initWithSession:(NEAgentSession *)arg1 pluginType:(NSString *)arg2 primaryPluginType:(NSString *)arg3 pluginBundle:(struct __CFBundle *)arg4 applicationPath:(NSString *)arg5;
@end
