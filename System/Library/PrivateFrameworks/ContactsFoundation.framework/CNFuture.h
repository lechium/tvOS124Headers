/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNFuture.h>

@protocol CNFuture <NSObject>
@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
@required
-(void)addSuccessBlock:(/*^block*/id)arg1 scheduler:(id)arg2;
-(void)addFailureBlock:(/*^block*/id)arg1 scheduler:(id)arg2;
-(id)resultWithTimeout:(double)arg1 error:(id*)arg2;
-(void)addSuccessBlock:(/*^block*/id)arg1;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2;
-(id)result:(id*)arg1;
-(id)flatMap:(/*^block*/id)arg1;
-(void)addFailureBlock:(/*^block*/id)arg1;
-(id)recover:(/*^block*/id)arg1;
-(BOOL)cancel;
-(BOOL)isCancelled;
-(BOOL)isFinished;

@end

#import <libobjc.A.dylib/CNPromise.h>

@class NSConditionLock, CNFutureResult, CNFutureCompletionBlocks, NSString;

@interface CNFuture : NSObject <CNFuture, CNPromise> {

	NSConditionLock* _stateLock;
	CNFutureResult* _futureResult;
	CNFutureCompletionBlocks* _completionBlocks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
+(void)finishPromise:(id)arg1 withFuture:(id)arg2 ;
+(id)chain:(id)arg1 ;
+(id)flatMap:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(id)recover:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(id)promiseFuture;
+(id)future;
+(id)join:(id)arg1 ;
+(id)sequence:(id)arg1 ;
+(id)futureWithResult:(id)arg1 ;
+(id)lazyFutureWithBlock:(/*^block*/id)arg1 ;
+(id)futureWithError:(id)arg1 ;
+(id)futureWithBlock:(/*^block*/id)arg1 ;
+(id)futureWithBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
-(BOOL)_nts_isFinished;
-(BOOL)nts_isFinished;
-(void)_flushCompletionBlocks;
-(id)futureResult;
-(void)addFailureBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
-(/*^block*/id)boolErrorCompletionHandlerAdapter;
-(/*^block*/id)completionHandlerAdapterWithDefaultValue:(id)arg1 ;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2 ;
-(/*^block*/id)completionHandlerAdapter;
-(id)resultWithTimeout:(double)arg1 error:(id*)arg2 ;
-(BOOL)finishWithResult:(id)arg1 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;
-(BOOL)finishWithError:(id)arg1 ;
-(id)result:(id*)arg1 ;
-(void)didCancel;
-(id)flatMap:(/*^block*/id)arg1 ;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(id)recover:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)cancel;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
@end

