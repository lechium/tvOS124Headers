/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, AVCallbackCancellation;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVQueuePlayer, AVPlayerItem, NSMutableArray, NSObject, NSError, AVWeakReference;

@interface AVPlayerLooperInternal : NSObject {

	AVQueuePlayer* loopingPlayer;
	AVPlayerItem* loopingItem;
	NSMutableArray* loopingItemCopies;
	SCD_Struct_AV6 loopRange;
	long long loopCount;
	NSObject*<OS_dispatch_queue> ivarAccessQueue;
	long long playerOriginalActionAtItemEnd;
	SCD_Struct_AV5 forwardPlaybackStartTime;
	AVPlayerItem* lastEnqueuedLoopingItem;
	BOOL waitingForLastLoopingCopyToFinish;
	long long status;
	NSError* error;
	id<AVCallbackCancellation> playerCurrentItemKVOInvoker;
	NSMutableArray* loopingItemStatusKVOInvokers;
	AVWeakReference* weakReference;
	BOOL listeningForItemFailedToPlayToEndTime;

}
@end

