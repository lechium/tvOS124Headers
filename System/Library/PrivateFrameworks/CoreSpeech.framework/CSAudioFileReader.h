/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, CSAudioFileReaderDelegate;
#import <CoreSpeech/CoreSpeech-Structs.h>
@class NSObject;

@interface CSAudioFileReader : NSObject {

	OpaqueExtAudioFileRef _fFile;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _audioFeedTimer;
	double _bufferDuration;
	AudioStreamBasicDescription _outASBD;
	id<CSAudioFileReaderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSAudioFileReaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)stopRecording;
-(void)_readAudioBufferAndFeed;
-(BOOL)setRecordBufferDuration:(double)arg1 ;
-(BOOL)prepareRecording:(id)arg1 ;
-(BOOL)startRecording;
-(id)readSamplesFromChannelIdx:(unsigned)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<CSAudioFileReaderDelegate>)arg1 ;
-(id<CSAudioFileReaderDelegate>)delegate;
-(id)initWithURL:(id)arg1 ;
-(void)close;
@end

