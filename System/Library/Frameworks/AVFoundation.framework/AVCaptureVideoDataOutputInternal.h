/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, AVWeakReferencingDelegateStorage, NSDictionary, NSObject;

@interface AVCaptureVideoDataOutputInternal : NSObject {

	AVWeakReference* weakReference;
	AVWeakReferencingDelegateStorage* delegateStorage;
	AVWeakReferencingDelegateStorage* delegateOverrideStorage;
	NSDictionary* videoSettings;
	SCD_Struct_AV5 deprecatedMinFrameDuration;
	BOOL alwaysDiscardsLateVideoFrames;
	BOOL videoSettingsDimensionsOverrideEnabled;
	NSObject*<OS_dispatch_queue> bufferQueue;
	OpaqueFigSimpleMutexRef queueMutex;
	remoteQueueReceiverOpaqueRef remoteQueueReceiver;
	localQueueOpaqueRef localQueue;

}
-(id)init;
-(void)dealloc;
@end
