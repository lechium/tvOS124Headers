/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/BWPipelineNotificationDelegate.h>
#import <libobjc.A.dylib/BWNodeFileWriterStatusDelegate.h>
#import <libobjc.A.dylib/BWStillImageCaptureStatusDelegate.h>
#import <libobjc.A.dylib/BWRemoteQueueSinkNodeDelegate.h>
#import <libobjc.A.dylib/BWNodeRenderDelegate.h>
#import <libobjc.A.dylib/BWImageQueueSinkNodePreviewTapDelegate.h>
#import <libobjc.A.dylib/BWGraphStatusDelegate.h>
#import <libobjc.A.dylib/BWIrisStagingNodeIrisRequestDelegate.h>
#import <libobjc.A.dylib/FigCaptureDisplayLayoutObserver.h>

@class NSString;

@interface BWFigCaptureSession : NSObject <BWPipelineNotificationDelegate, BWNodeFileWriterStatusDelegate, BWStillImageCaptureStatusDelegate, BWRemoteQueueSinkNodeDelegate, BWNodeRenderDelegate, BWImageQueueSinkNodePreviewTapDelegate, BWGraphStatusDelegate, BWIrisStagingNodeIrisRequestDelegate, FigCaptureDisplayLayoutObserver> {

	OpaqueFigCaptureSessionRef _captureSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fileWriter:(id)arg1 startedRecordingForSettingsID:(unsigned long long)arg2 ;
-(void)fileWriter:(id)arg1 pausedRecordingForSettingsID:(unsigned long long)arg2 ;
-(void)fileWriter:(id)arg1 resumedRecordingForSettingsID:(unsigned long long)arg2 ;
-(void)fileWriter:(id)arg1 stoppedRecordingForSettings:(id)arg2 withError:(int)arg3 thumbnailSurface:(IOSurfaceRef)arg4 irisMovieInfo:(id)arg5 debugMetadataSidecarFileURL:(id)arg6 recordingSucceeded:(BOOL)arg7 ;
-(void)graphDidPrepareNodes:(id)arg1 ;
-(void)graph:(id)arg1 didFinishStartingWithError:(int)arg2 ;
-(id)initWithFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)node:(id)arg1 format:(id)arg2 didBecomeLiveForOutput:(id)arg3 ;
-(void)postNotification:(id)arg1 notificationPayload:(id)arg2 ;
-(void)stillImageCoordinator:(id)arg1 willBeginCaptureForSettings:(id)arg2 resolvedCaptureSettings:(id)arg3 photoManifest:(id)arg4 ;
-(void)stillImageCoordinator:(id)arg1 willCapturePhotoForSettings:(id)arg2 sisActive:(BOOL)arg3 error:(int)arg4 ;
-(void)stillImageCoordinator:(id)arg1 didResolveStillImagePTS:(SCD_Struct_BW2)arg2 forSettings:(id)arg3 resolvedCaptureType:(int)arg4 isPreBracketedEV0:(BOOL)arg5 ;
-(void)stillImageCoordinator:(id)arg1 didCapturePhotoForSettings:(id)arg2 ;
-(void)stillImageCoordinator:(id)arg1 willPrepareStillImageCaptureWithSettings:(id)arg2 clientInitiated:(BOOL)arg3 ;
-(void)remoteQueueSinkNode:(id)arg1 queueBecameReady:(remoteQueueSenderOpaqueRef)arg2 ;
-(void)remoteQueueSinkNode:(id)arg1 localQueueBecameReady:(localQueueOpaqueRef)arg2 ;
-(void)node:(id)arg1 format:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)node:(id)arg1 willRenderSampleBuffer:(opaqueCMSampleBufferRef)arg2 forInput:(id)arg3 ;
-(void)imageQueueSinkNode:(id)arg1 didAttemptToEnqueuePreviewSampleBuffer:(opaqueCMSampleBufferRef)arg2 withSuccess:(BOOL)arg3 ;
-(void)imageQueueSinkNodeDidDisplayFirstFrame:(id)arg1 ;
-(void)imageQueueSinkNodeDidDisplayFirstFrame:(id)arg1 atHostTime:(long long)arg2 ;
-(void)stagingNode:(id)arg1 readyToReceiveRequestsWithEarliestAllowedStillImageCaptureHostPTS:(SCD_Struct_BW2)arg2 ;
-(void)stagingNode:(id)arg1 willEmitIrisRequest:(id)arg2 ;
-(void)layoutMonitor:(id)arg1 didUpdateLayoutWithForegroundApps:(id)arg2 layoutState:(int)arg3 ;
@end

