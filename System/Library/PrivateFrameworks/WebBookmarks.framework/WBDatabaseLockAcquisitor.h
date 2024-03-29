/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:32 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBDatabaseLockAcquisitorDelegate;
@class NSTimer;

@interface WBDatabaseLockAcquisitor : NSObject {

	NSTimer* _timer;
	Class _webBookmarkCollectionClass;
	BOOL _lockAcquired;
	long long _maxRetryCount;
	long long _retryCount;
	id<WBDatabaseLockAcquisitorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WBDatabaseLockAcquisitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithWebBookmarkCollectionClass:(Class)arg1 ;
-(void)releaseLock;
-(void)acquireLockWithTimeout:(double)arg1 ;
-(void)acquireLockWithTimeout:(double)arg1 retryInterval:(double)arg2 ;
-(BOOL)_attemptToLockSyncAndNotifyDelegateOnFailure:(BOOL)arg1 ;
-(void)_startTimerWithTimeout:(double)arg1 retryInterval:(double)arg2 ;
-(void)_retryTimerFired:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<WBDatabaseLockAcquisitorDelegate>)arg1 ;
-(id<WBDatabaseLockAcquisitorDelegate>)delegate;
-(void)_stopTimer;
@end

