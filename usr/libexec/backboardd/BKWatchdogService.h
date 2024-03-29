//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKHIDSystemInterface, BKSystemAppSentinel;

@interface BKWatchdogService : NSObject
{
    BKHIDSystemInterface *_hidSystem;	// 8 = 0x8
    BKSystemAppSentinel *_systemAppSentinel;	// 16 = 0x10
}

@property(retain, nonatomic) BKSystemAppSentinel *systemAppSentinel; // @synthesize systemAppSentinel=_systemAppSentinel;
@property(retain, nonatomic) BKHIDSystemInterface *hidSystem; // @synthesize hidSystem=_hidSystem;
- (void).cxx_destruct;	// IMP=0x00000001000234e4
- (_Bool)isAlive;	// IMP=0x0000000100023444
- (id)init;	// IMP=0x0000000100023394

@end

