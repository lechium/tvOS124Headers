/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <RemoteUI/RemoteUI-Structs.h>
@class NSLock, NSMutableArray, NSMutableSet, NSMutableDictionary, NSNotificationCenter, NSTimer;

@interface RUIImageLoader : NSObject {

	NSLock* _queueLock;
	NSMutableArray* _loadQueue;
	NSMutableSet* _loadsInProgress;
	NSLock* _cacheLock;
	NSMutableDictionary* _imageCache;
	NSMutableArray* _imageCacheLRU;
	NSMutableDictionary* _loadCompletions;
	CFRunLoopRef _loaderRunLoop;
	CFRunLoopSourceRef _loaderSource;
	NSNotificationCenter* _notificationCenter;
	NSTimer* _loadStatusNotificationTimer;
	opaque_pthread_mutex_t _startupLock;
	opaque_pthread_cond_t _startupCondition;

}
+(id)sharedImageLoader;
-(void)_setImageData:(id)arg1 forURL:(id)arg2 error:(id)arg3 ;
-(void)_imageLoadFinished:(id)arg1 ;
-(void)_startLoader;
-(void)_loadImageURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_mainThread_postLoadingStatusChanged;
-(void)_postLoadingStatusChanged;
-(BOOL)_locked_URLIsLoading:(id)arg1 ;
-(void)_locked_loadImageForURL:(id)arg1 ;
-(void)_callCompletionsForURL:(id)arg1 image:(CGImageRef)arg2 error:(id)arg3 ;
-(void)_postImageLoadedNotification:(id)arg1 ;
-(void)_loadingStatusChanged;
-(BOOL)isLoadingImages;
-(void)imageForURL:(id)arg1 scale:(double)arg2 completion:(/*^block*/id)arg3 ;
-(CGImageRef)imageForURL:(id)arg1 loadIfAbsent:(BOOL)arg2 ;
-(void)_locked_imageLoadStarted:(id)arg1 ;
-(id)notificationCenter;
-(id)init;
@end

