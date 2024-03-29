//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLIntersiloService.h"

#import "CLOdometerAlarmManagerProtocol-Protocol.h"

@class CLOdometerAlarm, NSMutableArray, NSString;

@interface CLOdometerAlarmManager : CLIntersiloService <CLOdometerAlarmManagerProtocol>
{
    NSMutableArray *fAlarms;	// 8 = 0x8
    struct unique_ptr<CLLocationController_Type::Client, std::__1::default_delete<CLLocationController_Type::Client>> fLocationClient;	// 16 = 0x10
    struct unique_ptr<CLGnssProvider_Type::Client, std::__1::default_delete<CLGnssProvider_Type::Client>> fGpsClient;	// 24 = 0x18
    CLOdometerAlarm *currentlyScheduled;	// 32 = 0x20
    double lastOdometer;	// 40 = 0x28
}

+ (id)getSilo;	// IMP=0x0000000100699ff8
@property(nonatomic) double lastOdometer; // @synthesize lastOdometer;
@property(nonatomic) CLOdometerAlarm *currentlyScheduled; // @synthesize currentlyScheduled;
- (id).cxx_construct;	// IMP=0x000000010069b2b0
- (void).cxx_destruct;	// IMP=0x000000010069b24c
@property(readonly, nonatomic) CLOdometerAlarm *firstAlarm;
- (void)reset;	// IMP=0x000000010069afe4
- (void)handleOdometer:(double)arg1;	// IMP=0x000000010069ae7c
- (void)handleOdometerData:(const struct NotificationData *)arg1;	// IMP=0x000000010069ac78
- (void)handleLocationData:(const struct NotificationData *)arg1;	// IMP=0x000000010069a914
- (void)reschedule;	// IMP=0x000000010069a760
- (void)removeAlarm:(id)arg1;	// IMP=0x000000010069a6f4
- (void)addAlarm:(id)arg1;	// IMP=0x000000010069a5e0
- (void)endService;	// IMP=0x000000010069a548
- (void)beginService;	// IMP=0x000000010069a0c8
- (id)init;	// IMP=0x000000010069a084

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

