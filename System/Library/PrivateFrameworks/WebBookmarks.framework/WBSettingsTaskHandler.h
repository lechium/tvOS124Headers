/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:32 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, WBSettingsTask, WebBookmarksSettingsGateway;

@interface WBSettingsTaskHandler : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _tasks;
	WBSettingsTask* _currentTask;
	long long _currentRetryCount;
	WebBookmarksSettingsGateway* _settingsGateway;
	id _backgroundTaskAssertionToken;
	/*^block*/id _startBackgroundTaskAssertionBlock;
	/*^block*/id _finishBackgroundTaskAssertionBlock;

}

@property (nonatomic,copy) id startBackgroundTaskAssertionBlock;               //@synthesize startBackgroundTaskAssertionBlock=_startBackgroundTaskAssertionBlock - In the implementation block
@property (nonatomic,copy) id finishBackgroundTaskAssertionBlock;              //@synthesize finishBackgroundTaskAssertionBlock=_finishBackgroundTaskAssertionBlock - In the implementation block
-(void)_enqueueTask:(id)arg1 ;
-(BOOL)_shouldEnqueueTask:(id)arg1 ;
-(void)_attemptCurrentTask;
-(void)_finishCurrentTask;
-(void)_currentTaskAttemptDidFinishWithError:(id)arg1 ;
-(void)enqueueTask:(id)arg1 ;
-(id)startBackgroundTaskAssertionBlock;
-(void)setStartBackgroundTaskAssertionBlock:(id)arg1 ;
-(id)finishBackgroundTaskAssertionBlock;
-(void)setFinishBackgroundTaskAssertionBlock:(id)arg1 ;
-(void)_performNextTask;
-(id)init;
@end

