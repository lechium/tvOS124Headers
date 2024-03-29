//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"
#import "TMTimeProvider-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface TMTimeSynthesizer : NSObject <NSCopying, NSSecureCoding, TMTimeProvider>
{
    double _rtc;	// 8 = 0x8
    double _utc;	// 16 = 0x10
    double _rateSf;	// 24 = 0x18
    double _smoothedSf;	// 32 = 0x20
    double _lastRtcForSmoothSf;	// 40 = 0x28
    double _utc_var;	// 48 = 0x30
    double _sf_var;	// 56 = 0x38
    double _utc_sf_cov;	// 64 = 0x40
    NSMutableDictionary *_timeBuff;	// 72 = 0x48
    unsigned long long _rejects;	// 80 = 0x50
    unsigned long long _discards;	// 88 = 0x58
    _Bool _needTimeNow;	// 96 = 0x60
    double _clkSg;	// 104 = 0x68
    double _xoAccuracy;	// 112 = 0x70
    int _measNumber;	// 120 = 0x78
    double _lastTimeRtc;	// 128 = 0x80
    NSDictionary *_sourceReliabilityLevel;	// 136 = 0x88
    _Bool _running;	// 144 = 0x90
    NSString *_name;	// 152 = 0x98
}

+ (id)newSynthesizerFromDataRepresentation:(id)arg1;	// IMP=0x0000000100014488
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100013ecc
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
- (void)update:(id)arg1;	// IMP=0x000000010001c114
- (void)clampClockScaleFactorWithinValidRange;	// IMP=0x000000010001beb4
- (double)adjustUncertaintyToTime:(id)arg1;	// IMP=0x000000010001bcfc
- (void)start:(id)arg1;	// IMP=0x000000010001b838
- (void)reset;	// IMP=0x000000010001b828
- (id)predict:(double)arg1;	// IMP=0x000000010001b67c
- (double)rtcWhenBeyondUncertainty:(double)arg1;	// IMP=0x000000010001b558
- (id)synthesizedTimeAtLastRTC;	// IMP=0x000000010001b528
- (id)timeAtRtc:(double)arg1;	// IMP=0x000000010001b328
- (_Bool)determineReliability:(id)arg1;	// IMP=0x000000010001af3c
- (void)displayTimeBuffer;	// IMP=0x000000010001ac80
- (void)addTimeIntoBuffer:(id)arg1;	// IMP=0x000000010001ac14
- (id)initWithClockAccuracy:(double)arg1 noiseDensity:(double)arg2 name:(id)arg3;	// IMP=0x000000010001ab28
- (id)init;	// IMP=0x000000010001aad0
- (void)initSourceReliabilityLevel;	// IMP=0x000000010001a768
- (void)dealloc;	// IMP=0x000000010001a6d0
- (void)inflateHistoricalDataBy:(double)arg1;	// IMP=0x000000010001a4b0
- (id)dataRepresentation;	// IMP=0x00000001000146f4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000140e8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100013ed4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100013d4c
- (_Bool)intersects:(id)arg1;	// IMP=0x00000001000190f8

@end

