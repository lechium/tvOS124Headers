//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IMStopWatch : NSObject
{
    unsigned long long _startTime;	// 8 = 0x8
    NSString *_descriptionString;	// 16 = 0x10
}

+ (id)stopwatch;	// IMP=0x00000001001bb6f8
+ (id)stopwatchWithDescription:(id)arg1;	// IMP=0x00000001001bb680
+ (void)initialize;	// IMP=0x00000001001bb5dc
- (void).cxx_destruct;	// IMP=0x00000001001bb9e0
- (void)reportWithMarker:(id)arg1;	// IMP=0x00000001001bb950
- (void)report;	// IMP=0x00000001001bb904
- (id)description;	// IMP=0x00000001001bb888
- (void)setDescription:(id)arg1;	// IMP=0x00000001001bb800
- (void)reset;	// IMP=0x00000001001bb7f4
- (double)time;	// IMP=0x00000001001bb798
- (void)start;	// IMP=0x00000001001bb738
- (id)init;	// IMP=0x00000001001bb628

@end

