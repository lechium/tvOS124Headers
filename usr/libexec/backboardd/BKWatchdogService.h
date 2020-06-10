//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun  9 2020 17:35:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKHIDSystemInterface, BKSystemAppSentinel;

@interface BKWatchdogService : NSObject
{
    BKHIDSystemInterface *_hidSystem;
    BKSystemAppSentinel *_systemAppSentinel;
}

@property(retain, nonatomic) BKSystemAppSentinel *systemAppSentinel; // @synthesize systemAppSentinel=_systemAppSentinel;
@property(retain, nonatomic) BKHIDSystemInterface *hidSystem; // @synthesize hidSystem=_hidSystem;
- (void).cxx_destruct;
- (_Bool)isAlive;
- (id)init;

@end

