//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DMDAppLifeCycle;

@protocol DMDAppLifeCycleObserving <NSObject>

@optional
- (void)didFinishUninstallingForLifeCycle:(DMDAppLifeCycle *)arg1;
- (void)didFailUninstallingForLifeCycle:(DMDAppLifeCycle *)arg1;
- (void)willStartUninstallingForLifeCycle:(DMDAppLifeCycle *)arg1;
- (void)didFinishUpdatingForLifeCycle:(DMDAppLifeCycle *)arg1;
- (void)didFailUpdatingForLifeCycle:(DMDAppLifeCycle *)arg1;
- (void)didCancelUpdatingForLifeCycle:(DMDAppLifeCycle *)arg1;
- (void)didResumeUpdatingForLifeCycle:(DMDAppLifeCycle *)arg1;
- (void)didPauseUpdatingForLifeCycle:(DMDAppLifeCycle *)arg1;
- (void)didChangeUpdatingProgressForLifeCycle:(DMDAppLifeCycle *)arg1;
- (void)didStartUpdatingForLifeCycle:(DMDAppLifeCycle *)arg1;
- (void)willStartUpdatingForLifeCycle:(DMDAppLifeCycle *)arg1;
- (void)didFinishInstallingForLifeCycle:(DMDAppLifeCycle *)arg1;
- (void)didFailInstallingForLifeCycle:(DMDAppLifeCycle *)arg1;
- (void)didCancelInstallingForLifeCycle:(DMDAppLifeCycle *)arg1;
- (void)didResumeInstallingForLifeCycle:(DMDAppLifeCycle *)arg1;
- (void)didPauseInstallingForLifeCycle:(DMDAppLifeCycle *)arg1;
- (void)didChangeInstallingProgressForLifeCycle:(DMDAppLifeCycle *)arg1;
- (void)didStartInstallingForLifeCycle:(DMDAppLifeCycle *)arg1;
- (void)willStartInstallingForLifeCycle:(DMDAppLifeCycle *)arg1;
@end
