/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFAudio/AVFAudio-Structs.h>
@interface AVVCAudioBuffer : NSObject {

	void* _impl;

}

@property (readonly) int channels; 
@property (readonly) int bytesCapacity; 
@property (assign) int bytesDataSize; 
@property (readonly) void* data; 
@property (readonly) int packetDescriptionCapacity; 
@property (readonly) int packetDescriptionCount; 
@property (readonly) AudioStreamPacketDescription* packetDescriptions; 
@property (readonly) unsigned long long timeStamp; 
@property (readonly) AudioStreamBasicDescription* streamDescription; 
@property (readonly) BOOL remoteVoiceActivityAvailable; 
@property (readonly) unsigned char remoteVoiceActivityRMS; 
@property (readonly) unsigned char remoteVoiceActivityVAD; 
-(int)channels;
-(void)finalize;
-(id)initWithAudioQueueBuffer:(MyAudioQueueBuffer*)arg1 channels:(int)arg2 timeStamp:(unsigned long long)arg3 ;
-(AudioStreamBasicDescription*)streamDescription;
-(int)bytesCapacity;
-(void)setBytesDataSize:(int)arg1 ;
-(int)packetDescriptionCapacity;
-(void)setPacketDescriptions:(const AudioStreamPacketDescription*)arg1 count:(int)arg2 ;
-(unsigned char)remoteVoiceActivityRMS;
-(AudioStreamPacketDescription*)packetDescriptions;
-(int)packetDescriptionCount;
-(int)bytesDataSize;
-(BOOL)remoteVoiceActivityAvailable;
-(unsigned char)remoteVoiceActivityVAD;
-(void)dealloc;
-(unsigned long long)timeStamp;
-(void*)data;
@end

