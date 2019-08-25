/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFSpeechRecognitionTaskDelegate.h>
#import <libobjc.A.dylib/CSVTUIAudioSessionDelegate.h>
#import <libobjc.A.dylib/CSVTUIEndPointDelegate.h>

@protocol CSVTUIAudioSession, CSVTUITrainingSessionDelegate, OS_dispatch_queue;
@class NSString, CSVTUIKeywordDetector, SFSpeechRecognizer, SFSpeechAudioBufferRecognitionRequest, SFSpeechRecognitionTask, NSTimer, NSMutableArray, NSObject;

@interface CSVTUITrainingSession : NSObject <SFSpeechRecognitionTaskDelegate, CSVTUIAudioSessionDelegate, CSVTUIEndPointDelegate> {

	long long _status;
	long long _utteranceId;
	long long _sessionNumber;
	NSString* _locale;
	CSVTUIKeywordDetector* _keywordDetector;
	id<CSVTUIAudioSession> _audioSession;
	SFSpeechRecognizer* _speechRecognizer;
	SFSpeechAudioBufferRecognitionRequest* _speechRecognitionRequest;
	SFSpeechRecognitionTask* _speechRecognitionTask;
	NSTimer* _masterTimer;
	NSMutableArray* _pcmBufArray;
	BOOL _resultReported;
	BOOL _sessionProcess;
	BOOL _sessionSuspended;
	BOOL _ASRErrorOccured;
	id<CSVTUITrainingSessionDelegate> _sessionDelegate;
	/*^block*/id _trainingCompletion;
	NSObject*<OS_dispatch_queue> _queue;
	long long _numRequiredTrailingSamples;
	long long _numTrailingSamples;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUtteranceId:(long long)arg1 sessionNumber:(long long)arg2 Locale:(id)arg3 audioSession:(id)arg4 keywordDetector:(id)arg5 speechRecognizer:(id)arg6 speechRecognitionRequest:(id)arg7 sessionDelegate:(id)arg8 sessionDispatchQueue:(id)arg9 completion:(/*^block*/id)arg10 ;
-(void)startTraining;
-(void)suspendTraining;
-(void)closeSessionWithStatus:(int)arg1 successfully:(BOOL)arg2 complete:(/*^block*/id)arg3 ;
-(void)resumeTraining;
-(void)audioSessionDidStartRecording:(BOOL)arg1 error:(id)arg2 ;
-(void)audioSessionDidStopRecording:(long long)arg1 ;
-(void)audioSessionRecordBufferAvailable:(id)arg1 ;
-(void)audioSessionErrorDidOccur:(id)arg1 ;
-(void)audioSessionUnsupportedAudioRoute;
-(void)didDetectBeginOfSpeech;
-(void)didDetectEndOfSpeech:(long long)arg1 ;
-(BOOL)setupPhraseSpotter;
-(void)startMasterTimerWithTimeout:(float)arg1 ;
-(BOOL)resultAlreadyReported;
-(void)stopMasterTimer;
-(void)closeSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)updateMeterAndForward;
-(void)pushAudioInputIntoPCMBuffer:(id)arg1 ;
-(id)requestTriggeredUtterance:(id)arg1 ;
-(void)setupSpeechRecognitionTaskWithVoiceTriggerEventInfo:(id)arg1 ;
-(void)trimBeginingOfPCMBufferWithVoiceTriggerEventInfo:(id)arg1 ;
-(void)computeRequiredTrailingSamples;
-(void)feedSpeechRecognitionWithPCMBuffer;
-(void)closeSessionWithStatus:(int)arg1 successfully:(BOOL)arg2 ;
-(void)handleAudioBufferForVTWithAudioInput:(id)arg1 withDetectedBlock:(/*^block*/id)arg2 ;
-(void)finishSpeechRecognitionTask;
-(void)feedSpeechRecognitionTrailingSamplesWithCompletedBlock:(/*^block*/id)arg1 ;
-(long long)numSamplesInPCMBuffer;
-(id)createAVAudioPCMBufferWithNSData:(id)arg1 ;
-(void)handleAudioInput:(id)arg1 ;
-(void)_registerEndPointTimeout;
-(void)handleMasterTimeout:(id)arg1 ;
-(void)speechRecognitionTask:(id)arg1 didHypothesizeTranscription:(id)arg2 ;
@end

