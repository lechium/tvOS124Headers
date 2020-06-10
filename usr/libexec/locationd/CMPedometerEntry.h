//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CMPedometerEntry : NSObject
{
    struct CLExtendedStepCountEntry pedEntry;	// 8 = 0x8
}

- (struct CLExtendedStepCountEntry)pedEntry;	// IMP=0x00000001006a3c74
- (double)pedometerArmConstrainedState;	// IMP=0x00000001006a3c5c
- (double)stepCadenceCurrent;	// IMP=0x00000001006a3c48
- (double)speedCurrent;	// IMP=0x00000001006a3c18
- (double)speedInstant;	// IMP=0x00000001006a3be8
- (double)deltaDist;	// IMP=0x00000001006a3bd4
- (unsigned int)deltaSteps;	// IMP=0x00000001006a3bc0
- (double)deltaActiveTime;	// IMP=0x00000001006a3bac
- (id)lastStepTime;	// IMP=0x00000001006a3b84
- (id)firstStepTime;	// IMP=0x00000001006a3b5c
- (id)date;	// IMP=0x00000001006a3b34
- (id)initWithStepEntry:(struct CLExtendedStepCountEntry)arg1;	// IMP=0x00000001006a3a9c

@end

