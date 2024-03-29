/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVVoiceControllerRecordDelegate.h>

@protocol OS_dispatch_queue, RPMessageable;
@class AVAudioFormat, NSObject, AVVoiceController, NSString;

@interface RPSiriSession : NSObject <AVVoiceControllerRecordDelegate> {

	/*^block*/id _activateCompletion;
	int _activateState;
	AVAudioFormat* _audioFormat;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	RPSiriSession* _selfRef;
	int _startRecordingState;
	int _stopRecordingState;
	AVVoiceController* _voiceController;
	NSString* _destinationID;
	id<RPMessageable> _messenger;

}

@property (nonatomic,retain) NSString * destinationID;                 //@synthesize destinationID=_destinationID - In the implementation block
@property (nonatomic,retain) id<RPMessageable> messenger;              //@synthesize messenger=_messenger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_invalidated;
-(void)_activate2;
-(id<RPMessageable>)messenger;
-(void)setMessenger:(id<RPMessageable>)arg1 ;
-(BOOL)voiceControllerSetupAndReturnError:(id*)arg1 ;
-(void)voiceControllerTearDown;
-(void)_activateCompletedWithError:(id)arg1 ;
-(void)voiceControllerDidStartRecording:(id)arg1 successfully:(BOOL)arg2 error:(id)arg3 ;
-(void)voiceControllerDidStopRecording:(id)arg1 forReason:(long long)arg2 ;
-(void)voiceControllerDidDetectStartpoint:(id)arg1 ;
-(void)voiceControllerDidDetectEndpoint:(id)arg1 ofType:(int)arg2 atTime:(double)arg3 ;
-(void)voiceControllerEncoderErrorDidOccur:(id)arg1 error:(id)arg2 ;
-(void)voiceControllerMediaServicesWereReset:(id)arg1 ;
-(void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)destinationID;
-(void)setDestinationID:(NSString *)arg1 ;
-(id)init;
-(NSString *)description;
-(void)invalidate;
-(void)_invalidate;
@end

