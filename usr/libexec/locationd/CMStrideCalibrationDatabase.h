//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CMStrideCalibrationDatabaseDelegate;

@interface CMStrideCalibrationDatabase : NSObject
{
    struct CMStrideCalRecorderDb fStrideCalDb;	// 8 = 0x8
    id <CMStrideCalibrationDatabaseDelegate> _delegate;	// 480 = 0x1e0
}

@property(nonatomic) id <CMStrideCalibrationDatabaseDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;	// IMP=0x000000010054eabc
- (void).cxx_destruct;	// IMP=0x000000010054eaac
- (id)copyHistory;	// IMP=0x000000010054e94c
- (_Bool)isCalibrationConvergedMedianForSpeed:(double)arg1;	// IMP=0x000000010054e558
- (_Bool)isCalibrationConvergedStdForBinWithSpeed:(double)arg1;	// IMP=0x000000010054e338
- (void)addEntry:(struct CLStrideCalEntry)arg1;	// IMP=0x000000010054e07c
- (id)initWithSilo:(id)arg1;	// IMP=0x000000010054dd40

@end

