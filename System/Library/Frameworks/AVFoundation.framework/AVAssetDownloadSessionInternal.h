/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSObject, NSError, NSURL, NSNumber, AVURLAsset;

@interface AVAssetDownloadSessionInternal : NSObject {

	AVWeakReference* weakReference;
	OpaqueFigPlayerRef player;
	OpaqueFigPlaybackItemRef playbackItem;
	OpaqueFigAssetRef figAsset;
	NSObject*<OS_dispatch_queue> readWriteQueue;
	long long status;
	NSError* error;
	long long priority;
	NSURL* URL;
	NSURL* destinationURL;
	unsigned long long downloadToken;
	NSNumber* cachePrimingDownloadTokenNum;
	AVURLAsset* asset;
	CMBaseObjectRef assetDownloader;

}
@end

