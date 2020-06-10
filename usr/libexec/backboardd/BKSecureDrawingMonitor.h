//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun  9 2020 17:35:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BKSecureDrawingMonitor : NSObject
{
    _Bool _secureModeEnabled;
}

+ (id)sharedInstance;
@property(getter=isSecureModeEnabled) _Bool secureModeEnabled; // @synthesize secureModeEnabled=_secureModeEnabled;
- (void)reportAndKillInsecureProcesses;
- (void)startMonitoringSecureDrawing;

@end
