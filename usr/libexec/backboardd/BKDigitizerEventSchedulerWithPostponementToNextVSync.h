//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BKDigitizerEventSchedulerWithDisplayLink.h"

@class NSMutableArray;

@interface BKDigitizerEventSchedulerWithPostponementToNextVSync : BKDigitizerEventSchedulerWithDisplayLink
{
    NSMutableArray *_blocks;	// 8 = 0x8
    _Bool _dispatchingTouchesOnDisplayLink;	// 16 = 0x10
    double _currentTime;	// 24 = 0x18
}

@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
- (void)_thread_scheduleEventWithBlock:(CDUnknownBlockType)arg1 event:(struct __IOHIDEvent *)arg2 clientTaskPort:(unsigned int)arg3;	// IMP=0x00000001000097d4
- (void)_thread_displayLinkFired:(id)arg1;	// IMP=0x00000001000097c8
- (void)_thread_dispatchEventBlockImmediately:(CDUnknownBlockType)arg1;	// IMP=0x0000000100009760
- (void)_thread_dispatchPendingEvents:(id)arg1;	// IMP=0x0000000100009624
- (void)_thread_dispatchEventBlockAtNextVSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001000095c0
- (_Bool)_thread_shouldDispatchUsingDisplayLinkAtTime:(double)arg1;	// IMP=0x000000010000953c
- (double)_thread_positionWithinCurrentFrameAtTime:(double)arg1 duration:(double *)arg2;	// IMP=0x00000001000094c8
- (void)dealloc;	// IMP=0x0000000100009454
- (id)init;	// IMP=0x00000001000093e0

@end

