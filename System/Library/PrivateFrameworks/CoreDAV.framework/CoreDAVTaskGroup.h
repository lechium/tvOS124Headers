/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVSubmittable.h>

@protocol CoreDAVTaskManager, CoreDAVAccountInfoProvider, CoreDAVTaskGroupDelegate;
@class NSMutableSet, NSError, NSString;

@interface CoreDAVTaskGroup : NSObject <CoreDAVSubmittable> {

	id<CoreDAVTaskManager> _taskManager;
	id<CoreDAVAccountInfoProvider> _accountInfoProvider;
	double _timeoutInterval;
	NSMutableSet* _outstandingTasks;
	BOOL _isCancelling;
	BOOL _isTearingDown;
	BOOL _isFinished;
	id<CoreDAVTaskGroupDelegate> _delegate;
	/*^block*/id _progressBlock;
	/*^block*/id _completionBlock;
	NSError* _error;
	id _context;

}

@property (nonatomic,retain) NSError * error;                                                        //@synthesize error=_error - In the implementation block
@property (assign,nonatomic,__weak) id<CoreDAVTaskGroupDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                                                 //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (nonatomic,copy) id progressBlock;                                                         //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                       //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) id context;                                                             //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) id<CoreDAVTaskManager> taskManager;                              //@synthesize taskManager=_taskManager - In the implementation block
@property (assign,nonatomic,__weak) id<CoreDAVAccountInfoProvider> accountInfoProvider;              //@synthesize accountInfoProvider=_accountInfoProvider - In the implementation block
@property (nonatomic,readonly) NSMutableSet * outstandingTasks;                                      //@synthesize outstandingTasks=_outstandingTasks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)timeoutInterval;
-(void)submitWithTaskManager:(id)arg1 ;
-(void)finishEarlyWithError:(id)arg1 ;
-(void)syncAway;
-(void)_tearDownAllTasks;
-(void)finishCoreDAVTaskGroupWithError:(id)arg1 ;
-(void)setTimeoutInterval:(double)arg1 ;
-(id<CoreDAVTaskManager>)taskManager;
-(void)setTaskManager:(id<CoreDAVTaskManager>)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 ;
-(void)finishCoreDAVTaskGroupWithError:(id)arg1 delegateCallbackBlock:(/*^block*/id)arg2 ;
-(void)startTaskGroup;
-(NSMutableSet *)outstandingTasks;
-(void)taskGroupWillCancelWithError:(id)arg1 ;
-(void)cancelTaskGroup;
-(void)bailWithError:(id)arg1 ;
-(void)setAccountInfoProvider:(id<CoreDAVAccountInfoProvider>)arg1 ;
-(id<CoreDAVAccountInfoProvider>)accountInfoProvider;
-(void)dealloc;
-(void)setDelegate:(id<CoreDAVTaskGroupDelegate>)arg1 ;
-(id<CoreDAVTaskGroupDelegate>)delegate;
-(void)setContext:(id)arg1 ;
-(id)context;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setProgressBlock:(id)arg1 ;
-(id)progressBlock;
-(id)completionBlock;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

