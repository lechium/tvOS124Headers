/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CoreSpeech-Structs.h>
#import <libobjc.A.dylib/CSEndpointAnalyzerImpl.h>

@protocol CSEndpointAnalyzerDelegate, OS_dispatch_queue;
@class NSString, NSMutableData, NSDictionary, NSObject;

@interface CSVAD2EndpointAnalyzer : NSObject <CSEndpointAnalyzerImpl> {

	OpaqueAudioComponentInstanceRef _audioUnitEPVAD2;
	BOOL _saveSamplesSeenInReset;
	BOOL _detectedOneShotStartpoint;
	BOOL _detectedRecurrentStartpoint;
	BOOL _communicatedStartPointDetection;
	BOOL _detectedOneShotEndpoint;
	BOOL _detectedRecurrentEndpoint;
	BOOL _communicatedEndpointDetection;
	BOOL _isConfigured;
	BOOL _recordingDidStop;
	unsigned _frameRate;
	id<CSEndpointAnalyzerDelegate> _delegate;
	long long _endpointStyle;
	unsigned long long _activeChannel;
	long long _endpointMode;
	double _interspeechWaitTime;
	double _startWaitTime;
	double _endWaitTime;
	double _automaticEndpointingSuspensionEndTime;
	double _minimumDurationForEndpointer;
	double _bypassSamples;
	double _delay;
	double _sampleRate;
	double _samplesSeen;
	double _numSamplesProcessed;
	double _lastOneShotStartpoint;
	double _lastOneShotEndpoint;
	double _lastRecurrentStartpoint;
	double _lastRecurrentEndpoint;
	NSMutableData* _floatSampleBuffer;
	NSDictionary* _topLevelParameterDict;
	NSString* _modelDictPath;
	double _previousSamplesSeen;
	NSObject*<OS_dispatch_queue> _apQueue;
	unsigned long long _vtEndInSampleCount;
	double _trailingSilenceDurationAtEndpoint;

}

@property (assign,nonatomic) double sampleRate;                                           //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) unsigned frameRate;                                          //@synthesize frameRate=_frameRate - In the implementation block
@property (assign,nonatomic) BOOL detectedOneShotStartpoint;                              //@synthesize detectedOneShotStartpoint=_detectedOneShotStartpoint - In the implementation block
@property (assign,nonatomic) BOOL detectedRecurrentStartpoint;                            //@synthesize detectedRecurrentStartpoint=_detectedRecurrentStartpoint - In the implementation block
@property (assign,nonatomic) BOOL communicatedStartPointDetection;                        //@synthesize communicatedStartPointDetection=_communicatedStartPointDetection - In the implementation block
@property (assign,nonatomic) BOOL detectedOneShotEndpoint;                                //@synthesize detectedOneShotEndpoint=_detectedOneShotEndpoint - In the implementation block
@property (assign,nonatomic) BOOL detectedRecurrentEndpoint;                              //@synthesize detectedRecurrentEndpoint=_detectedRecurrentEndpoint - In the implementation block
@property (assign,nonatomic) BOOL communicatedEndpointDetection;                          //@synthesize communicatedEndpointDetection=_communicatedEndpointDetection - In the implementation block
@property (assign,nonatomic) double samplesSeen;                                          //@synthesize samplesSeen=_samplesSeen - In the implementation block
@property (assign,nonatomic) double numSamplesProcessed;                                  //@synthesize numSamplesProcessed=_numSamplesProcessed - In the implementation block
@property (assign,nonatomic) double lastOneShotStartpoint;                                //@synthesize lastOneShotStartpoint=_lastOneShotStartpoint - In the implementation block
@property (assign,nonatomic) double lastOneShotEndpoint;                                  //@synthesize lastOneShotEndpoint=_lastOneShotEndpoint - In the implementation block
@property (assign,nonatomic) double lastRecurrentStartpoint;                              //@synthesize lastRecurrentStartpoint=_lastRecurrentStartpoint - In the implementation block
@property (assign,nonatomic) double lastRecurrentEndpoint;                                //@synthesize lastRecurrentEndpoint=_lastRecurrentEndpoint - In the implementation block
@property (nonatomic,retain) NSMutableData * floatSampleBuffer;                           //@synthesize floatSampleBuffer=_floatSampleBuffer - In the implementation block
@property (nonatomic,retain) NSDictionary * topLevelParameterDict;                        //@synthesize topLevelParameterDict=_topLevelParameterDict - In the implementation block
@property (nonatomic,retain) NSString * modelDictPath;                                    //@synthesize modelDictPath=_modelDictPath - In the implementation block
@property (assign,nonatomic) BOOL isConfigured;                                           //@synthesize isConfigured=_isConfigured - In the implementation block
@property (assign,nonatomic) double previousSamplesSeen;                                  //@synthesize previousSamplesSeen=_previousSamplesSeen - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> apQueue;                        //@synthesize apQueue=_apQueue - In the implementation block
@property (assign,nonatomic) BOOL recordingDidStop;                                       //@synthesize recordingDidStop=_recordingDidStop - In the implementation block
@property (assign,nonatomic) unsigned long long vtEndInSampleCount;                       //@synthesize vtEndInSampleCount=_vtEndInSampleCount - In the implementation block
@property (assign,nonatomic) double trailingSilenceDurationAtEndpoint;                    //@synthesize trailingSilenceDurationAtEndpoint=_trailingSilenceDurationAtEndpoint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long endpointStyle;                                     //@synthesize endpointStyle=_endpointStyle - In the implementation block
@property (assign,nonatomic) double delay;                                                //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) double startWaitTime;                                        //@synthesize startWaitTime=_startWaitTime - In the implementation block
@property (assign,nonatomic) double automaticEndpointingSuspensionEndTime;                //@synthesize automaticEndpointingSuspensionEndTime=_automaticEndpointingSuspensionEndTime - In the implementation block
@property (assign,nonatomic) double minimumDurationForEndpointer;                         //@synthesize minimumDurationForEndpointer=_minimumDurationForEndpointer - In the implementation block
@property (nonatomic,readonly) double lastEndOfVoiceActivityTime; 
@property (nonatomic,readonly) double lastStartOfVoiceActivityTime; 
@property (assign,nonatomic) double bypassSamples;                                        //@synthesize bypassSamples=_bypassSamples - In the implementation block
@property (assign,nonatomic) long long endpointMode;                                      //@synthesize endpointMode=_endpointMode - In the implementation block
@property (assign,nonatomic) double interspeechWaitTime;                                  //@synthesize interspeechWaitTime=_interspeechWaitTime - In the implementation block
@property (assign,nonatomic) double endWaitTime;                                          //@synthesize endWaitTime=_endWaitTime - In the implementation block
@property (assign,nonatomic) BOOL saveSamplesSeenInReset;                                 //@synthesize saveSamplesSeenInReset=_saveSamplesSeenInReset - In the implementation block
@property (assign,nonatomic,__weak) id<CSEndpointAnalyzerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL canProcessCurrentRequest; 
@property (assign,nonatomic) unsigned long long activeChannel;                            //@synthesize activeChannel=_activeChannel - In the implementation block
@property (nonatomic,readonly) NSString * endpointerModelVersion; 
@property (nonatomic,readonly) double elapsedTimeWithNoSpeech; 
-(void)_configureWithSampleRate:(double)arg1 andFrameRate:(unsigned)arg2 ;
-(void)_detectVoiceActivityInSamples:(float*)arg1 numSamples:(unsigned)arg2 ;
-(long long)endpointMode;
-(void)setEndpointMode:(long long)arg1 ;
-(double)startWaitTime;
-(void)setStartWaitTime:(double)arg1 ;
-(double)interspeechWaitTime;
-(void)setInterspeechWaitTime:(double)arg1 ;
-(double)endWaitTime;
-(void)setEndWaitTime:(double)arg1 ;
-(double)lastStartOfVoiceActivityTime;
-(double)lastEndOfVoiceActivityTime;
-(void)setAutomaticEndpointingSuspensionEndTime:(double)arg1 ;
-(double)automaticEndpointingSuspensionEndTime;
-(double)minimumDurationForEndpointer;
-(void)setMinimumDurationForEndpointer:(double)arg1 ;
-(unsigned)frameRate;
-(void)setFrameRate:(unsigned)arg1 ;
-(void)setActiveChannel:(unsigned long long)arg1 ;
-(unsigned long long)activeChannel;
-(void)setEndpointStyle:(long long)arg1 ;
-(void)resetForNewRequestWithSampleRate:(unsigned long long)arg1 recordContext:(id)arg2 ;
-(void)processAudioSamplesAsynchronously:(id)arg1 ;
-(void)recordingStoppedForReason:(unsigned long long)arg1 ;
-(double)trailingSilenceDurationAtEndpoint;
-(void)setTrailingSilenceDurationAtEndpoint:(double)arg1 ;
-(BOOL)_configureWithASBD:(AudioStreamBasicDescription*)arg1 andFrameRate:(unsigned)arg2 ;
-(void)_resetWithSampleRate:(unsigned long long)arg1 ;
-(void)_processAudioSamples:(id)arg1 ;
-(id)_getEndpointMetricsForAudioTimestamp:(double)arg1 ;
-(long long)endpointStyle;
-(double)bypassSamples;
-(void)setBypassSamples:(double)arg1 ;
-(BOOL)saveSamplesSeenInReset;
-(void)setSaveSamplesSeenInReset:(BOOL)arg1 ;
-(BOOL)canProcessCurrentRequest;
-(void)handleVoiceTriggerWithActivationInfo:(id)arg1 ;
-(BOOL)detectedOneShotStartpoint;
-(void)setDetectedOneShotStartpoint:(BOOL)arg1 ;
-(BOOL)detectedRecurrentStartpoint;
-(void)setDetectedRecurrentStartpoint:(BOOL)arg1 ;
-(BOOL)communicatedStartPointDetection;
-(void)setCommunicatedStartPointDetection:(BOOL)arg1 ;
-(BOOL)detectedOneShotEndpoint;
-(void)setDetectedOneShotEndpoint:(BOOL)arg1 ;
-(BOOL)detectedRecurrentEndpoint;
-(void)setDetectedRecurrentEndpoint:(BOOL)arg1 ;
-(BOOL)communicatedEndpointDetection;
-(void)setCommunicatedEndpointDetection:(BOOL)arg1 ;
-(double)samplesSeen;
-(void)setSamplesSeen:(double)arg1 ;
-(double)numSamplesProcessed;
-(void)setNumSamplesProcessed:(double)arg1 ;
-(double)lastOneShotStartpoint;
-(void)setLastOneShotStartpoint:(double)arg1 ;
-(double)lastOneShotEndpoint;
-(void)setLastOneShotEndpoint:(double)arg1 ;
-(double)lastRecurrentStartpoint;
-(void)setLastRecurrentStartpoint:(double)arg1 ;
-(double)lastRecurrentEndpoint;
-(void)setLastRecurrentEndpoint:(double)arg1 ;
-(NSMutableData *)floatSampleBuffer;
-(void)setFloatSampleBuffer:(NSMutableData *)arg1 ;
-(NSDictionary *)topLevelParameterDict;
-(void)setTopLevelParameterDict:(NSDictionary *)arg1 ;
-(NSString *)modelDictPath;
-(void)setModelDictPath:(NSString *)arg1 ;
-(void)setIsConfigured:(BOOL)arg1 ;
-(double)previousSamplesSeen;
-(void)setPreviousSamplesSeen:(double)arg1 ;
-(NSObject*<OS_dispatch_queue>)apQueue;
-(void)setApQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)recordingDidStop;
-(void)setRecordingDidStop:(BOOL)arg1 ;
-(unsigned long long)vtEndInSampleCount;
-(void)setVtEndInSampleCount:(unsigned long long)arg1 ;
-(BOOL)isConfigured;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<CSEndpointAnalyzerDelegate>)arg1 ;
-(id<CSEndpointAnalyzerDelegate>)delegate;
-(void)reset;
-(void)setSampleRate:(double)arg1 ;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(void)preheat;
-(double)sampleRate;
@end

