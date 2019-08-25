/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureFileOutput.h>

@class AVCaptureMovieFileOutputInternal, NSArray;

@interface AVCaptureMovieFileOutput : AVCaptureFileOutput {

	AVCaptureMovieFileOutputInternal* _internal;

}

@property (assign,nonatomic) SCD_Struct_AV5 movieFragmentInterval; 
@property (nonatomic,copy) NSArray * metadata; 
@property (nonatomic,readonly) NSArray * availableVideoCodecTypes; 
+(long long)nextMovieFileSettingsID;
+(BOOL)consolidateMovieFragmentsInFile:(id)arg1 error:(id*)arg2 ;
+(BOOL)updateMovieMetadataInFile:(id)arg1 withMetadata:(id)arg2 error:(id*)arg3 ;
+(void)initialize;
+(id)new;
-(void)pauseRecording;
-(void)resumeRecording;
-(void)setMovieFragmentInterval:(SCD_Struct_AV5)arg1 ;
-(SCD_Struct_AV5)movieFragmentInterval;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)safelyHandleServerConnectionDeathForFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)connectionMediaTypes;
-(BOOL)canAddConnectionForMediaType:(id)arg1 ;
-(BOOL)_recordingInProgress;
-(id)outputFileURL;
-(BOOL)isRecording;
-(void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2 ;
-(void)stopRecording;
-(BOOL)isRecordingPaused;
-(id)bravoCameraSelectionBehaviorForRecording;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(void)_updateAvailableVideoCodecTypesForSourceDevice:(id)arg1 ;
-(void)_startRecording:(id)arg1 ;
-(int)_stopRecording;
-(NSArray *)availableVideoCodecTypes;
-(CGSize)outputSizeForSourceFormat:(id)arg1 ;
-(void)handleDidStopRecordingNotificationForWrapper:(id)arg1 withPayload:(id)arg2 demoof:(BOOL)arg3 addMetadata:(BOOL)arg4 ;
-(id)_avErrorUserInfoDictionaryForError:(int)arg1 wrapper:(id)arg2 payload:(id)arg3 ;
-(void)_removeRecordingDelegateWrapper:(id)arg1 ;
-(BOOL)recordsVideoOrientationAndMirroringChangesAsMetadataTrackForConnection:(id)arg1 ;
-(id)outputSettingsForConnection:(id)arg1 ;
-(void)setSendsLastVideoPreviewFrame:(BOOL)arg1 ;
-(BOOL)sendsLastVideoPreviewFrame;
-(void)setBravoCameraSelectionBehaviorForRecording:(id)arg1 ;
-(void)setOutputSettings:(id)arg1 forConnection:(id)arg2 ;
-(void)setRecordsVideoOrientationAndMirroringChanges:(BOOL)arg1 asMetadataTrackForConnection:(id)arg2 ;
-(void)handleNotification:(id)arg1 payload:(id)arg2 ;
-(NSArray *)metadata;
-(void)setMetadata:(NSArray *)arg1 ;
-(void)removeConnection:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

