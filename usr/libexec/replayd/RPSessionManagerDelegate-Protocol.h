//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSError, NSURL, RPRecordingSession;

@protocol RPSessionManagerDelegate
- (void)failedToSaveRecordingForRecordingSession:(RPRecordingSession *)arg1 withError:(NSError *)arg2;
- (void)recordingSession:(RPRecordingSession *)arg1 stoppedWithError:(NSError *)arg2 movieURL:(NSURL *)arg3;
- (void)resetStatesForSession:(RPRecordingSession *)arg1;
- (void)prepareForStoppingSession:(RPRecordingSession *)arg1;
@end

