//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  9 2019 14:18:44).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol BKHIDEventDispatcher, BKHIDEventSenderInfo;

@protocol BKHIDEventProcessor <NSObject>
- (long long)processEvent:(struct __IOHIDEvent *)arg1 sender:(id <BKHIDEventSenderInfo>)arg2 dispatcher:(id <BKHIDEventDispatcher>)arg3;
@end

