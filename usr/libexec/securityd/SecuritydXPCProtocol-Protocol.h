//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSString;
@protocol SecuritydXPCCallbackProtocol;

@protocol SecuritydXPCProtocol <NSObject>
- (void)secItemDigest:(NSString *)arg1 accessGroup:(NSString *)arg2 complete:(void (^)(NSArray *, NSError *))arg3;
- (void)secItemFetchCurrentItemAcrossAllDevices:(NSString *)arg1 identifier:(NSString *)arg2 viewHint:(NSString *)arg3 fetchCloudValue:(_Bool)arg4 complete:(void (^)(NSData *, NSError *))arg5;
- (void)secItemSetCurrentItemAcrossAllDevices:(NSData *)arg1 newCurrentItemHash:(NSData *)arg2 accessGroup:(NSString *)arg3 identifier:(NSString *)arg4 viewHint:(NSString *)arg5 oldCurrentItemReference:(NSData *)arg6 oldCurrentItemHash:(NSData *)arg7 complete:(void (^)(NSError *))arg8;
- (void)SecItemAddAndNotifyOnSync:(NSDictionary *)arg1 syncCallback:(id <SecuritydXPCCallbackProtocol>)arg2 complete:(void (^)(NSDictionary *, NSArray *, NSError *))arg3;
@end

