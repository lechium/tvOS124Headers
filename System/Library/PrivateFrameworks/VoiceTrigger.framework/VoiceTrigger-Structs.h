/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _compressed_pair<voicetrigger::VTAudioCircularBufferImpl<unsigned short> *, std::__1::default_delete<voicetrigger::VTAudioCircularBufferImpl<unsigned short> > > {
	VTAudioCircularBufferImpl<unsigned short> __value_;
} compressed_pair<voicetrigger::VTAudioCircularBufferImpl<unsigned short> *, std::__1::default_delete<voicetrigger::VTAudioCircularBufferImpl<unsigned short> > >;

typedef struct unique_ptr<voicetrigger::VTAudioCircularBufferImpl<unsigned short>, std::__1::default_delete<voicetrigger::VTAudioCircularBufferImpl<unsigned short> > > {
	compressed_pair<voicetrigger::VTAudioCircularBufferImpl<unsigned short> *, std::__1::default_delete<voicetrigger::VTAudioCircularBufferImpl<unsigned short> > > __ptr_;
} unique_ptr<voicetrigger::VTAudioCircularBufferImpl<unsigned short>, std::__1::default_delete<voicetrigger::VTAudioCircularBufferImpl<unsigned short> > >;

typedef struct OpaqueExtAudioFile* OpaqueExtAudioFileRef;

typedef struct __CFNotificationCenter* CFNotificationCenterRef;

typedef struct opaqueCMSession* opaqueCMSessionRef;

typedef struct AudioStreamBasicDescription {
	double mSampleRate;
	unsigned mFormatID;
	unsigned mFormatFlags;
	unsigned mBytesPerPacket;
	unsigned mFramesPerPacket;
	unsigned mBytesPerFrame;
	unsigned mChannelsPerFrame;
	unsigned mBitsPerChannel;
	unsigned mReserved;
} AudioStreamBasicDescription;

typedef struct OpaqueAudioConverter* OpaqueAudioConverterRef;

