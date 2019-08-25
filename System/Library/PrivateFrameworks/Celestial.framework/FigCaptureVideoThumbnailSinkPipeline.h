/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCapturePipeline.h>
#import <libobjc.A.dylib/BWImageQueueSinkNodePreviewTapDelegate.h>

@protocol OS_dispatch_queue, BWPipelineNotificationDelegate;
@class NSString, BWPixelTransferNode, BWImageQueueSinkNode, NSObject;

@interface FigCaptureVideoThumbnailSinkPipeline : FigCapturePipeline <BWImageQueueSinkNodePreviewTapDelegate> {

	NSString* _sinkID;
	BWPixelTransferNode* _scalerNode;
	BWImageQueueSinkNode* _imageQueueSinkNode;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	BOOL _didPropagateCurrentImageQueue;
	id<BWPipelineNotificationDelegate> _notificationDelegate;
	BWImageQueueSinkNode* _imageQueueNode;

}

@property (assign,getter=isConnectionDisabled,nonatomic) BOOL connectionDisabled; 
@property (nonatomic,readonly) BWImageQueueSinkNode * imageQueueNode;                          //@synthesize imageQueueNode=_imageQueueNode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(BWImageQueueSinkNode *)imageQueueNode;
-(void)imageQueueSinkNode:(id)arg1 didAttemptToEnqueuePreviewSampleBuffer:(opaqueCMSampleBufferRef)arg2 withSuccess:(BOOL)arg3 ;
-(void)imageQueueSinkNodeDidDisplayFirstFrame:(id)arg1 ;
-(void)imageQueueSinkNodeDidDisplayFirstFrame:(id)arg1 atHostTime:(long long)arg2 ;
-(void)setConnectionDisabled:(BOOL)arg1 ;
-(id)initWithConfiguration:(id)arg1 videoSourceOutput:(id)arg2 sourceVideoTransform:(FigCaptureVideoTransform)arg3 videoThumbnailConnectionConfiguration:(id)arg4 scalerConnectionConfiguration:(id)arg5 notificationDelegate:(id)arg6 ;
-(int)_buildVideoFilterThumbnailPipeline:(id)arg1 videoSourceOutput:(id)arg2 sourceVideoTransform:(FigCaptureVideoTransform)arg3 videoThumbnailConnectionConfiguration:(id)arg4 scalerConnectionConfiguration:(id)arg5 ;
-(BOOL)isConnectionDisabled;
-(void)dealloc;
@end
