//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSTimer;

@interface DMDEventReportingSchedule : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    long long _frequency;	// 16 = 0x10
    NSString *_localTime;	// 24 = 0x18
    NSNumber *_spread;	// 32 = 0x20
    NSNumber *_day;	// 40 = 0x28
    NSTimer *_timer;	// 48 = 0x30
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) NSNumber *day; // @synthesize day=_day;
@property(readonly, nonatomic) NSNumber *spread; // @synthesize spread=_spread;
@property(readonly, copy, nonatomic) NSString *localTime; // @synthesize localTime=_localTime;
@property(readonly, nonatomic) long long frequency; // @synthesize frequency=_frequency;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;	// IMP=0x0000000100049428
- (void)startWithScheduleElapsedHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000491e8
- (unsigned long long)hash;	// IMP=0x00000001000490a0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100048e14
- (id)description;	// IMP=0x0000000100048d44
- (void)dealloc;	// IMP=0x0000000100048cec
- (id)initWithScheduleRegistration:(id)arg1;	// IMP=0x000000010004897c

@end

