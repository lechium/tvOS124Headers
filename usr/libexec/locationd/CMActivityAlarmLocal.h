//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMotion/CMActivityAlarm.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CMActivityAlarmLocal : CMActivityAlarm
{
    struct CLActivityAlarmConcentrator *fConcentrator;	// 8 = 0x8
    _Bool fIsValid;	// 16 = 0x10
    struct __CFRunLoop *fRunLoop;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *fQueue;	// 32 = 0x20
    CDUnknownBlockType fHandler;	// 40 = 0x28
    NSString *_bundleId;	// 48 = 0x30
    NSString *_executable;	// 56 = 0x38
}

+ (id)activityAlarmInfo;	// IMP=0x00000001007f6480
+ (_Bool)activityAlarmAvailable;	// IMP=0x00000001007f6464
@property(copy, nonatomic) NSString *executable; // @synthesize executable=_executable;
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (void)fire;	// IMP=0x00000001007f6f84
- (_Bool)isValid;	// IMP=0x00000001007f6f4c
- (void)invalidate;	// IMP=0x00000001007f6ea0
- (void)dealloc;	// IMP=0x00000001007f6e20
- (id)initWithTrigger:(unsigned int)arg1 duration:(double)arg2 onRunLoop:(struct __CFRunLoop *)arg3 withHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001007f6b70
- (id)initWithTrigger:(unsigned int)arg1 duration:(double)arg2 onQueue:(id)arg3 forClient:(const struct Name *)arg4 withHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000001007f6820
- (id)initWithTrigger:(unsigned int)arg1 duration:(double)arg2 onQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001007f64a8

@end

