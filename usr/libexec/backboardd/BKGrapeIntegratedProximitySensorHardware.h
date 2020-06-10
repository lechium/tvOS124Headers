//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun  9 2020 17:35:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BKProximitySensorHardwareBase.h"

@interface BKGrapeIntegratedProximitySensorHardware : BKProximitySensorHardwareBase
{
    int _lockedHIDMode;
}

+ (id)sensorConfiguredForWatch;
+ (id)sensorConfiguredForHandheld;
@property int lockedHIDMode; // @synthesize lockedHIDMode=_lockedHIDMode;
- (id)lowLevelDescriptionForMode:(long long)arg1 pocketTouchesExpected:(_Bool)arg2;
- (void)reallySetMode:(long long)arg1 pocketTouchesExpected:(_Bool)arg2;
- (int)_HIDDetectionModeForDetectionMode:(long long)arg1 pocketTouchesExpected:(_Bool)arg2;
- (void)reallyResetCalibration;

@end

