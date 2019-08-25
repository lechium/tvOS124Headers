/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCSessionParticipantDelegate <NSObject>
@required
-(void)vcSessionParticipant:(id)arg1 audioPaused:(BOOL)arg2 didSucceed:(BOOL)arg3 error:(id)arg4;
-(void)vcSessionParticipant:(id)arg1 videoPaused:(BOOL)arg2 didSucceed:(BOOL)arg3 error:(id)arg4;
-(void)vcSessionParticipant:(id)arg1 remoteVideoEnabledDidChange:(BOOL)arg2;
-(void)vcSessionParticipant:(id)arg1 didRequestVideoRedundancy:(BOOL)arg2;
-(void)vcSessionParticipantDidChangeActualNetworkBitrateVideo:(id)arg1;
-(void)vcSessionParticipantDidChangeActualNetworkBitrateAudio:(id)arg1;
-(void)vcSessionParticipant:(id)arg1 didChangeProminence:(unsigned char)arg2 description:(id)arg3;
-(void)vcSessionParticipantDidMediaDecryptionTimeOut:(id)arg1;
-(void)vcSessionParticipant:(id)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;
-(void)vcSessionParticipantDidChangeReceivingStreams:(id)arg1;
-(void)vcSessionParticipant:(id)arg1 remoteAudioEnabledDidChange:(BOOL)arg2;
-(void)vcSessionParticipant:(id)arg1 remoteAudioPausedDidChange:(BOOL)arg2;
-(void)vcSessionParticipant:(id)arg1 remoteVideoPausedDidChange:(BOOL)arg2;
-(void)vcSessionParticipant:(id)arg1 audioEnabled:(BOOL)arg2 didSucceed:(BOOL)arg3 error:(id)arg4;
-(void)vcSessionParticipant:(id)arg1 videoEnabled:(BOOL)arg2 didSucceed:(BOOL)arg3 error:(id)arg4;
-(void)vcSessionParticipant:(id)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2;
-(void)vcSessionParticipantDidChangeSendingStreams:(id)arg1;
-(void)vcSessionParticipant:(id)arg1 didDetectError:(id)arg2;

@end

