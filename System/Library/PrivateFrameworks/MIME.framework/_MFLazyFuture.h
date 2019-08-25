/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFFuture.h>

@class NSConditionLock, MFPromise;

@interface _MFLazyFuture : MFFuture {

	NSConditionLock* _stateLock;
	/*^block*/id _block;
	MFPromise* _promise;

}
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(void)onScheduler:(id)arg1 addSuccessBlock:(/*^block*/id)arg2 ;
-(void)onScheduler:(id)arg1 addFailureBlock:(/*^block*/id)arg2 ;
-(BOOL)tryCancel;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(BOOL)isCancelled;
-(BOOL)run;
-(BOOL)isFinished;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end

