/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <CFNetwork/CFNetwork-Structs.h>
@class NSObject;

@interface __CoreSchedulingSetRunnable : NSObject {

	NSObject*<OS_dispatch_semaphore> _sem;
	/*^block*/id _setup;
	opaque_pthread_t* _tid;
	CFRunLoopRef _rl;
	long long _performCount;
	CFRunLoopSourceRef _pinnedSource;
	long long _count[5];

}
+(void)_run:(id)arg1 ;
-(void)__SITUATIONAL_ABORT__:(const char*)arg1 reason:(id)arg2 ;
-(void)pinCurrentRunLoop;
-(void)startedRunLoop:(CFRunLoopRef)arg1 ;
-(void)runForever;
-(id)initWithSetupHadler:(/*^block*/id)arg1 ;
-(CFRunLoopRef)copyRunLoopWhenAvailable;
-(void)performed;
-(void)canceled:(CFRunLoopRef)arg1 mode:(CFStringRef)arg2 ;
-(void)dealloc;
@end
