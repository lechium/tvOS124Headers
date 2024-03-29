//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HBThermalMonitor : NSObject
{
    int _thermalNotificationToken;	// 8 = 0x8
    _Bool _thermalNotificationTokenIsValid;	// 12 = 0xc
    _Bool _thermalShutdownEnabled;	// 13 = 0xd
}

+ (id)sharedThermalMonitor;	// IMP=0x000000010002bd98
@property(readonly, nonatomic, getter=isThermalShutdownEnabled) _Bool thermalShutdownEnabled; // @synthesize thermalShutdownEnabled=_thermalShutdownEnabled;
- (void)_updateThermalShutdownState;	// IMP=0x000000010002bfe0
- (void)dealloc;	// IMP=0x000000010002bf80
- (id)init;	// IMP=0x000000010002be18

@end

