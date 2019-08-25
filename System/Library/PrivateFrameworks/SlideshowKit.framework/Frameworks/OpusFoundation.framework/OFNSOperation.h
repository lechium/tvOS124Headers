/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OFNSOperationDelegate, OS_dispatch_source;
@class NSError, NSString, NSCondition, NSMutableArray, NSObject;

@interface OFNSOperation : NSOperation {

	BOOL _canBeCancelled;
	BOOL _isExecuting;
	BOOL _isFinishing;
	BOOL _isFinished;
	float _progress;
	id _userData;
	NSError* _error;
	NSString* _identifier;
	void* _context;
	double _startTime;
	/*^block*/id _executionBlock;
	/*^block*/id _cancelBlock;
	/*^block*/id _progressBlock;
	/*^block*/id _finishBlock;
	id<OFNSOperationDelegate> _finishDelegate;
	NSCondition* _finishingCondition;
	BOOL _isFinishingCondition;
	NSMutableArray* _subOperations;
	OFNSOperation* _mainOperation;
	NSObject*<OS_dispatch_source> _cancelTimer;
	BOOL _needsToRetry;
	unsigned long long _retryCount;

}

@property (assign) BOOL isExecuting;                                                //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign) BOOL isFinishing;                                                //@synthesize isFinishing=_isFinishing - In the implementation block
@property (assign) BOOL isFinished;                                                 //@synthesize isFinished=_isFinished - In the implementation block
@property (copy) id executionBlock;                                                 //@synthesize executionBlock=_executionBlock - In the implementation block
@property (retain) NSMutableArray * subOperations;                                  //@synthesize subOperations=_subOperations - In the implementation block
@property (assign) OFNSOperation * mainOperation;                                   //@synthesize mainOperation=_mainOperation - In the implementation block
@property (assign) BOOL canBeCancelled;                                             //@synthesize canBeCancelled=_canBeCancelled - In the implementation block
@property (assign) float progress;                                                  //@synthesize progress=_progress - In the implementation block
@property (retain) id userData;                                                     //@synthesize userData=_userData - In the implementation block
@property (copy) NSError * error;                                                   //@synthesize error=_error - In the implementation block
@property (copy) NSString * identifier;                                             //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) void* context;                                         //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) id<OFNSOperationDelegate> finishDelegate;              //@synthesize finishDelegate=_finishDelegate - In the implementation block
@property (copy) id cancelBlock;                                                    //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (copy) id finishBlock;                                                    //@synthesize finishBlock=_finishBlock - In the implementation block
@property (copy) id progressBlock;                                                  //@synthesize progressBlock=_progressBlock - In the implementation block
@property (assign) BOOL needsToRetry;                                               //@synthesize needsToRetry=_needsToRetry - In the implementation block
@property (readonly) unsigned long long retryCount;                                 //@synthesize retryCount=_retryCount - In the implementation block
+(id)operationWithFinishBlock:(/*^block*/id)arg1 andFinishDelegate:(id)arg2 ;
+(id)nullOperationWithFinishBlock:(/*^block*/id)arg1 andFinishDelegate:(id)arg2 ;
+(id)blockOperationWithExecutionBlock:(/*^block*/id)arg1 finishBlock:(/*^block*/id)arg2 andFinishDelegate:(id)arg3 ;
+(id)operationWithBlock:(/*^block*/id)arg1 progressBlock:(/*^block*/id)arg2 cancelBlock:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)blockOperationWithExecutionBlock:(/*^block*/id)arg1 ;
-(id)operationDescription;
-(unsigned long long)retryCount;
-(OFNSOperation *)mainOperation;
-(BOOL)isConcurrent;
-(BOOL)canBeCancelled;
-(void)setCanBeCancelled:(BOOL)arg1 ;
-(id)cancelBlock;
-(void)setCancelBlock:(id)arg1 ;
-(id)finishBlock;
-(void)setFinishDelegate:(id<OFNSOperationDelegate>)arg1 ;
-(void)setExecutionBlock:(id)arg1 ;
-(void)setIsFinishing:(BOOL)arg1 ;
-(void)_launchOperation;
-(BOOL)isFinishing;
-(id<OFNSOperationDelegate>)finishDelegate;
-(void)_updateProgressBlock;
-(void)setMainOperation:(OFNSOperation *)arg1 ;
-(void)performAsynchronously:(id)arg1 progressBlock:(/*^block*/id)arg2 timeout:(unsigned long long)arg3 ;
-(void)performAsynchronously:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)performAsynchronously:(id)arg1 ;
-(id)executionBlock;
-(NSMutableArray *)subOperations;
-(void)setSubOperations:(NSMutableArray *)arg1 ;
-(BOOL)needsToRetry;
-(void)setNeedsToRetry:(BOOL)arg1 ;
-(void)setFinishBlock:(id)arg1 ;
-(BOOL)performSynchronously:(/*^block*/id)arg1 ;
-(BOOL)hasSucceeded;
-(unsigned long long)launchOperation;
-(BOOL)performSubOperationSynchronously:(id)arg1 progressBlock:(/*^block*/id)arg2 timeout:(unsigned long long)arg3 ;
-(void)finishOperation;
-(void)cleanupOperation;
-(BOOL)shouldContinue;
-(BOOL)performSynchronously;
-(BOOL)performSynchronously:(/*^block*/id)arg1 timeout:(unsigned long long)arg2 ;
-(void)setIsExecuting:(BOOL)arg1 ;
-(void)setIsFinished:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)identifier;
-(void)setContext:(void*)arg1 ;
-(void*)context;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setProgress:(float)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)cancelOperation;
-(void)cancel;
-(void)start;
-(float)progress;
-(double)elapsedTime;
-(BOOL)_finish:(BOOL)arg1 ;
-(id)userData;
-(void)setUserData:(id)arg1 ;
-(void)setProgressBlock:(id)arg1 ;
-(id)progressBlock;
-(void)finish;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
@end

