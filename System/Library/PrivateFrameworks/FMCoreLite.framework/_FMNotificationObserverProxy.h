/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMCoreLite/_FMObserverProxy.h>

@class NSOperationQueue, NSString;

@interface _FMNotificationObserverProxy : _FMObserverProxy {

	id _notificationObserver;
	NSOperationQueue* _observerQueue;
	/*^block*/id _observerBlock;
	NSString* _notificationName;

}

@property (nonatomic,readonly) NSOperationQueue * observerQueue;              //@synthesize observerQueue=_observerQueue - In the implementation block
@property (nonatomic,copy,readonly) id observerBlock;                         //@synthesize observerBlock=_observerBlock - In the implementation block
@property (nonatomic,copy,readonly) NSString * notificationName;              //@synthesize notificationName=_notificationName - In the implementation block
-(id)initWithWeakObserver:(id)arg1 notificationName:(id)arg2 observerQueue:(id)arg3 observerBlock:(/*^block*/id)arg4 ;
-(void)performObserverBlock;
-(id)observerBlock;
-(NSOperationQueue *)observerQueue;
-(NSString *)notificationName;
-(void)invalidate;
@end

