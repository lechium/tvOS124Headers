//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTSingleton.h"

@interface MTStoreReportingController : MTSingleton
{
}

+ (id)reportingStringForPlayReason:(unsigned long long)arg1;	// IMP=0x0000000100025dac
- (id)pageTypeForReportType:(int)arg1;	// IMP=0x0000000100025d08
- (void)recordMetricsEventForType:(int)arg1 withData:(id)arg2;	// IMP=0x0000000100025b18
- (id)_dictionaryForPodcastUuid:(id)arg1;	// IMP=0x00000001000258c8
- (void)reportBrowse:(id)arg1;	// IMP=0x0000000100025864
- (void)reportPlaybackFromStore:(id)arg1 reason:(unsigned long long)arg2;	// IMP=0x0000000100025800
- (void)reportWithType:(int)arg1 userInfo:(id)arg2 location:(id)arg3 reason:(unsigned long long)arg4;	// IMP=0x0000000100024c98

@end

