//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLIntersiloServiceProtocol-Protocol.h"

@class NSMutableDictionary, NSString;

@protocol CLIntersiloServiceMockProtocol <CLIntersiloServiceProtocol>
- (NSMutableDictionary *)syncgetPayloadForKey:(NSString *)arg1;
- (NSMutableDictionary *)syncgetPayloadForSelector:(SEL)arg1;
- (void)removePayloadForKey:(NSString *)arg1;
- (void)removePayloadForSelector:(SEL)arg1;
- (void)setPayload:(NSMutableDictionary *)arg1 forKey:(NSString *)arg2;
- (void)setPayload:(NSMutableDictionary *)arg1 forSelector:(SEL)arg2;
@end

