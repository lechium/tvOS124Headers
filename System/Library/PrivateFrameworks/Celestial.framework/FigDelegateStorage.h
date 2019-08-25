/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Celestial/Celestial-Structs.h>
@class NSObject;

@interface FigDelegateStorage : NSObject {

	NSObject*<OS_dispatch_queue> _delegateQueue;
	id _delegate;
	os_unfair_lock_s _lock;

}

@property (readonly) id delegate; 
@property (readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
+(void)initialize;
-(void)invokeDelegateCallbackWithBlock:(/*^block*/id)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)delegate;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
@end

