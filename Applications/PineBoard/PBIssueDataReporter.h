//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PBIssueDataReporter : NSObject
{
}

- (void)_uploadSysdiagnoseAtPath:(id)arg1 toURL:(id)arg2 deleteAfterUpload:(_Bool)arg3;	// IMP=0x000000010008d014
- (id)_latestSysdiagnoseFilePath;	// IMP=0x000000010008c890
- (void)reportIssueDataAtPath:(id)arg1;	// IMP=0x000000010008c408
- (void)_reportLatestIssueDataWithRemainingAttempts:(long long)arg1;	// IMP=0x000000010008c248
- (void)reportLatestIssueData;	// IMP=0x000000010008c228

@end

