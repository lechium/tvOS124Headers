/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFClientServiceDelegate <NSObject>
@required
-(oneway void)shouldSpeakChanged:(BOOL)arg1;
-(oneway void)audioSessionIDChanged:(unsigned)arg1;
-(oneway void)requestDidReceiveCommand:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)requestHandleCommand:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)requestRequestedOpenApplicationWithBundleID:(id)arg1 URL:(id)arg2 reply:(/*^block*/id)arg3;
-(oneway void)requestRequestedOpenURL:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)requestRequestedDismissAssistant;
-(oneway void)quickStopWasHandledWithActions:(unsigned long long)arg1;
-(oneway void)acousticIDRequestWillStart;
-(oneway void)musicWasDetected;
-(oneway void)acousticIDRequestDidFinishWithSuccess:(BOOL)arg1;
-(oneway void)setUserActivityInfo:(id)arg1 webpageURL:(id)arg2;
-(oneway void)invalidateCurrentUserActivity;
-(oneway void)cacheImage:(id)arg1;
-(oneway void)extensionRequestWillStartForApplication:(id)arg1;
-(oneway void)extensionRequestFinishedForApplication:(id)arg1 error:(id)arg2;
-(oneway void)startUIRequestWithText:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)getBulletinContext:(/*^block*/id)arg1;
-(oneway void)getClockContext:(/*^block*/id)arg1;
-(oneway void)speechRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)arg1;
-(oneway void)speechRecordingDidBeginOnAVRecordRoute:(id)arg1 audioSessionID:(unsigned)arg2;
-(oneway void)speechRecordingDidChangeAVRecordRoute:(id)arg1 isDucking:(BOOL)arg2 isTwoShot:(BOOL)arg3 speechEndHostTime:(unsigned long long)arg4;
-(oneway void)speechRecordingStartpointDetected;
-(oneway void)speechRecordingPerformTwoShotPromptWithType:(long long)arg1 reply:(/*^block*/id)arg2;
-(oneway void)speechRecordingDidEnd;
-(oneway void)speechRecordingDidCancel;
-(oneway void)speechRecordingDidFail:(id)arg1;
-(oneway void)speechRecognized:(id)arg1;
-(oneway void)speechRecognizedAdditionalInterpretation:(id)arg1 refId:(id)arg2;
-(oneway void)speechRecognizedPartialResult:(id)arg1;
-(oneway void)speechRecognitionDidFail:(id)arg1;
-(oneway void)speechRecordingDidUpdateRecognitionPhrases:(id)arg1 utterances:(id)arg2 refId:(id)arg3;
-(oneway void)speechRecordingDidFinishRecognitionUpdateWithError:(id)arg1;
-(oneway void)speechRecordingDidRecognizePhrases:(id)arg1 utterances:(id)arg2;
-(oneway void)speechRecordingWillBeginRecognitionUpdateForTask:(id)arg1;
-(oneway void)aceConnectionWillRetryOnError:(id)arg1;
-(oneway void)audioSessionDidBeginInterruption;
-(oneway void)audioSessionDidEndInterruption:(BOOL)arg1;
-(oneway void)audioPlaybackRequestWillStart:(id)arg1;
-(oneway void)audioPlaybackRequestDidStart:(id)arg1;
-(oneway void)audioPlaybackRequestDidNotStart:(id)arg1 error:(id)arg2;
-(oneway void)audioPlaybackRequestDidStop:(id)arg1 error:(id)arg2;
-(oneway void)willProcessStartPlayback:(long long)arg1;
-(oneway void)startPlaybackDidFail:(long long)arg1;
-(oneway void)audioSessionWillBecomeActive:(BOOL)arg1;
-(oneway void)audioSessionDidBecomeActive:(BOOL)arg1;

@end

