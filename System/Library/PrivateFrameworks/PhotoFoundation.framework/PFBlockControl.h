/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <libobjc.A.dylib/PFBlockControlCanceling.h>
#import <libobjc.A.dylib/PFBlockControlQueueing.h>
#import <libobjc.A.dylib/PFBlockControlDirectExecution.h>

@protocol OS_dispatch_group;
@class PFDispatchQueue, NSObject, NSString;

@interface PFBlockControl : NSObject <PFBlockControlCanceling, PFBlockControlQueueing, PFBlockControlDirectExecution> {

	PFDispatchQueue* _queue;
	/*^block*/id _block;
	NSObject*<OS_dispatch_group> _workGroup;
	AQ _status;
	BOOL _executeOnDealloc;

}

@property (assign) BOOL executeOnDealloc;                           //@synthesize executeOnDealloc=_executeOnDealloc - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_execute;
-(BOOL)enqueue;
-(BOOL)dequeue;
-(BOOL)executeBlock;
-(BOOL)cancelBlock;
-(id)initWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)enqueueWithDelay:(unsigned long long)arg1 ;
-(BOOL)groupNotify:(id)arg1 ;
-(BOOL)tryCancelBlock;
-(BOOL)blockWasCanceled;
-(unsigned long long)_shouldEnqueue;
-(void)invoke:(unsigned long long)arg1 ;
-(void)waitForBlock;
-(void)notifyOnQueue:(id)arg1 whenFinished:(/*^block*/id)arg2 ;
-(BOOL)blockHasStarted;
-(BOOL)blockHasFinished;
-(BOOL)executeOnDealloc;
-(void)setExecuteOnDealloc:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end
