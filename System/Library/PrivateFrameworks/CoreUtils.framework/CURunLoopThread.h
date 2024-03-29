/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreUtils/CoreUtils-Structs.h>
@class NSObject, NSString;

@interface CURunLoopThread : NSObject {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	CFRunLoopRef _runLoop;
	BOOL _runLoopValid;
	NSMutableArray* _startBlocks;
	BOOL _threadRunning;
	LogCategory* _ucat;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	/*^block*/id _threadInitializeHandler;
	/*^block*/id _threadFinalizeHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) id threadInitializeHandler;                                //@synthesize threadInitializeHandler=_threadInitializeHandler - In the implementation block
@property (nonatomic,copy) id threadFinalizeHandler;                                  //@synthesize threadFinalizeHandler=_threadFinalizeHandler - In the implementation block
-(void)setThreadFinalizeHandler:(id)arg1 ;
-(void)setThreadInitializeHandler:(id)arg1 ;
-(BOOL)_scheduleStopThread;
-(id)threadInitializeHandler;
-(id)threadFinalizeHandler;
-(void)_invalidated;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)activate;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_threadMain;
@end

