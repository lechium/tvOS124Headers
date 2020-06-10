//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TMDaemonCore, TMPreferences;
@protocol OS_os_transaction, TMMonotonicClock;

@interface TMBackgroundNtpSource : NSObject
{
    struct __SCNetworkReachability *_reachabilityTarget;	// 8 = 0x8
    NSObject<OS_os_transaction> *_reachabilityTransaction;	// 16 = 0x10
    NSObject<OS_os_transaction> *_fetchingTransaction;	// 24 = 0x18
    _Bool _fetchingTime;	// 32 = 0x20
    double lastFetchAttempt;	// 40 = 0x28
    double schedulingInterval;	// 48 = 0x30
    long long burstRetryCount;	// 56 = 0x38
    TMPreferences *_preferences;	// 64 = 0x40
    TMDaemonCore *_daemonCore;	// 72 = 0x48
    id <TMMonotonicClock> _clock;	// 80 = 0x50
    long long _servicePortRetryCount;	// 88 = 0x58
}

@property(nonatomic, getter=isFetchingTime) _Bool fetchingTime; // @synthesize fetchingTime=_fetchingTime;
@property long long servicePortRetryCount; // @synthesize servicePortRetryCount=_servicePortRetryCount;
@property(retain, nonatomic) id <TMMonotonicClock> clock; // @synthesize clock=_clock;
@property(nonatomic) TMDaemonCore *daemonCore; // @synthesize daemonCore=_daemonCore;
@property(retain, nonatomic) TMPreferences *preferences; // @synthesize preferences=_preferences;
@property long long burstRetryCount; // @synthesize burstRetryCount;
@property double schedulingInterval; // @synthesize schedulingInterval;
@property double lastFetchAttempt; // @synthesize lastFetchAttempt;
- (double)intervalRemaining;	// IMP=0x0000000100016560
- (void)setWantedTime:(double)arg1;	// IMP=0x0000000100016250
- (void)dealloc;	// IMP=0x0000000100016194
- (void)fetchTime;	// IMP=0x0000000100016128
- (void)retry;	// IMP=0x0000000100015fb4
- (void)_fetchTime;	// IMP=0x0000000100015084
- (void)_executeNTPJob:(id)arg1;	// IMP=0x0000000100014d60
- (void)waitForNetworkBeyondWantedThreshold;	// IMP=0x00000001000147cc

@end
