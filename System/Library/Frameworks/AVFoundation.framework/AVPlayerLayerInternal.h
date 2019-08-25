/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, AVCallbackCancellation;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVNetworkPlaybackPerfHUDLayer, NSObject, NSString, AVKeyPathDependencyManager, AVPlayer, NSDictionary, FigBaseCALayer, FigVideoContainerLayer, FigSubtitleCALayer, NSSet;

@interface AVPlayerLayerInternal : NSObject {

	AVNetworkPlaybackPerfHUDLayer* hudLayer;
	NSObject*<OS_dispatch_queue> serialQueue;
	BOOL isPresentationLayer;
	OpaqueFigSimpleMutexRef isReadyForDisplayMutex;
	NSObject*<OS_dispatch_queue> configurationQueue;
	NSString* subtitleGravity;
	AVKeyPathDependencyManager* dependencyManager;
	AVPlayer* player;
	NSString* videoGravity;
	NSDictionary* pixelBufferAttributes;
	BOOL lanczosDownscalingEnabled;
	long long lanczosDownscalingFactor;
	BOOL shouldObservePlayer;
	FigBaseCALayer* maskLayer;
	FigVideoContainerLayer* videoLayer;
	FigSubtitleCALayer* subtitleLayer;
	FigBaseCALayer* closedCaptionLayer;
	BOOL isReadyForDisplay;
	AVPlayer* playerBeingObserved;
	NSSet* KVOInvokers;
	CGSize latestAppliedPresentationSize;
	id<AVCallbackCancellation> playerCurrentItemHasVideoFrameEnqueuedKVOInvoker;

}
@end

