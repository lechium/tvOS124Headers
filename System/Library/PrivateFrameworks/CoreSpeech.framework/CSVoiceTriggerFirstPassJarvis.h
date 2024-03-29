/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSKeywordAnalyzerNDEAPIScoreDelegate.h>
#import <libobjc.A.dylib/CSActivationEventNotifierDelegate.h>
#import <libobjc.A.dylib/CSSPGEndpointAnalyzerDelegate.h>
#import <libobjc.A.dylib/CSSpeechManagerDelegate.h>

@protocol CSVoiceTriggerFirstPassJarvisDelegate, OS_dispatch_queue;
@class CSSpeechManager, NSObject, CSAsset, CSKeywordAnalyzerNDEAPI, NSDictionary, CSSPGEndpointAnalyzer, NSString, CSVoiceTriggerRTModel, CSPlainAudioFileWriter;

@interface CSVoiceTriggerFirstPassJarvis : NSObject <CSKeywordAnalyzerNDEAPIScoreDelegate, CSActivationEventNotifierDelegate, CSSPGEndpointAnalyzerDelegate, CSSpeechManagerDelegate> {

	BOOL _hasReceivedNDEAPIResult;
	BOOL _hasTriggerCandidate;
	CSSpeechManager* _speechManager;
	id<CSVoiceTriggerFirstPassJarvisDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	CSAsset* _currentAsset;
	CSKeywordAnalyzerNDEAPI* _keywordAnalyzerNDEAPI;
	unsigned long long _numProcessedSamples;
	unsigned long long _jarvisVoiceTriggerTimeout;
	unsigned long long _activeChannel;
	NSDictionary* _jarvisTriggerResult;
	unsigned long long _earlyDetectFiredMachTime;
	CSSPGEndpointAnalyzer* _endpointAnalyzer;
	NSString* _deviceId;
	CSVoiceTriggerRTModel* _rtModel;
	CSPlainAudioFileWriter* _audioFileWriter;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CSAsset * currentAsset;                                                 //@synthesize currentAsset=_currentAsset - In the implementation block
@property (nonatomic,retain) CSKeywordAnalyzerNDEAPI * keywordAnalyzerNDEAPI;                        //@synthesize keywordAnalyzerNDEAPI=_keywordAnalyzerNDEAPI - In the implementation block
@property (assign,nonatomic) BOOL hasReceivedNDEAPIResult;                                           //@synthesize hasReceivedNDEAPIResult=_hasReceivedNDEAPIResult - In the implementation block
@property (assign,nonatomic) BOOL hasTriggerCandidate;                                               //@synthesize hasTriggerCandidate=_hasTriggerCandidate - In the implementation block
@property (assign,nonatomic) unsigned long long numProcessedSamples;                                 //@synthesize numProcessedSamples=_numProcessedSamples - In the implementation block
@property (assign,nonatomic) unsigned long long jarvisVoiceTriggerTimeout;                           //@synthesize jarvisVoiceTriggerTimeout=_jarvisVoiceTriggerTimeout - In the implementation block
@property (assign,nonatomic) unsigned long long activeChannel;                                       //@synthesize activeChannel=_activeChannel - In the implementation block
@property (nonatomic,retain) NSDictionary * jarvisTriggerResult;                                     //@synthesize jarvisTriggerResult=_jarvisTriggerResult - In the implementation block
@property (assign,nonatomic) unsigned long long earlyDetectFiredMachTime;                            //@synthesize earlyDetectFiredMachTime=_earlyDetectFiredMachTime - In the implementation block
@property (nonatomic,retain) CSSPGEndpointAnalyzer * endpointAnalyzer;                               //@synthesize endpointAnalyzer=_endpointAnalyzer - In the implementation block
@property (nonatomic,retain) NSString * deviceId;                                                    //@synthesize deviceId=_deviceId - In the implementation block
@property (nonatomic,retain) CSVoiceTriggerRTModel * rtModel;                                        //@synthesize rtModel=_rtModel - In the implementation block
@property (nonatomic,retain) CSPlainAudioFileWriter * audioFileWriter;                               //@synthesize audioFileWriter=_audioFileWriter - In the implementation block
@property (assign,nonatomic,__weak) CSSpeechManager * speechManager;                                 //@synthesize speechManager=_speechManager - In the implementation block
@property (assign,nonatomic,__weak) id<CSVoiceTriggerFirstPassJarvisDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)jarvisAudioLoggingFilePath;
+(id)jarvisAudioLogDirectory;
+(id)timeStampString;
-(void)_setAsset:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(CSAsset *)currentAsset;
-(void)setCurrentAsset:(CSAsset *)arg1 ;
-(void)setDeviceId:(NSString *)arg1 ;
-(void)speechManagerRecordBufferAvailable:(id)arg1 buffer:(id)arg2 ;
-(void)speechManagerLPCMRecordBufferAvailable:(id)arg1 chunk:(id)arg2 ;
-(void)speechManagerDidStartForwarding:(id)arg1 successfully:(BOOL)arg2 error:(id)arg3 ;
-(void)speechManagerDidStopForwarding:(id)arg1 forReason:(long long)arg2 ;
-(void)setActiveChannel:(unsigned long long)arg1 ;
-(id)initWithManager:(id)arg1 asset:(id)arg2 ;
-(CSSpeechManager *)speechManager;
-(void)setSpeechManager:(CSSpeechManager *)arg1 ;
-(unsigned long long)activeChannel;
-(void)_clearTriggerCandidate;
-(void)_notifyJarvisVoiceTriggerReject;
-(void)_reportJarvisVoiceTriggerFire;
-(void)_didDetectKeywordFromDeviceId:(id)arg1 activationInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_handleJarvisVoiceTriggerFromDeviceId:(id)arg1 activationInfo:(id)arg2 error:(id*)arg3 ;
-(void)keywordAnalyzerNDEAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3 ;
-(void)activationEventNotifier:(id)arg1 event:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)spgEndpointAnalyzerDidDetectEndpoint:(id)arg1 ;
-(CSKeywordAnalyzerNDEAPI *)keywordAnalyzerNDEAPI;
-(void)setKeywordAnalyzerNDEAPI:(CSKeywordAnalyzerNDEAPI *)arg1 ;
-(BOOL)hasReceivedNDEAPIResult;
-(void)setHasReceivedNDEAPIResult:(BOOL)arg1 ;
-(BOOL)hasTriggerCandidate;
-(void)setHasTriggerCandidate:(BOOL)arg1 ;
-(unsigned long long)numProcessedSamples;
-(void)setNumProcessedSamples:(unsigned long long)arg1 ;
-(unsigned long long)jarvisVoiceTriggerTimeout;
-(void)setJarvisVoiceTriggerTimeout:(unsigned long long)arg1 ;
-(NSDictionary *)jarvisTriggerResult;
-(void)setJarvisTriggerResult:(NSDictionary *)arg1 ;
-(unsigned long long)earlyDetectFiredMachTime;
-(void)setEarlyDetectFiredMachTime:(unsigned long long)arg1 ;
-(CSSPGEndpointAnalyzer *)endpointAnalyzer;
-(void)setEndpointAnalyzer:(CSSPGEndpointAnalyzer *)arg1 ;
-(CSVoiceTriggerRTModel *)rtModel;
-(void)setRtModel:(CSVoiceTriggerRTModel *)arg1 ;
-(CSPlainAudioFileWriter *)audioFileWriter;
-(void)setAudioFileWriter:(CSPlainAudioFileWriter *)arg1 ;
-(NSString *)deviceId;
-(void)setDelegate:(id<CSVoiceTriggerFirstPassJarvisDelegate>)arg1 ;
-(id<CSVoiceTriggerFirstPassJarvisDelegate>)delegate;
-(void)reset;
-(void)_reset;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setAsset:(id)arg1 ;
@end

