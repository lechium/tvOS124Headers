/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>
#import <libobjc.A.dylib/CNObserver.h>

@protocol CNSchedulerProvider, CNScheduler;
@class NSMutableArray, _CNObservableEventBufferingStrategy, CNObservableContractEnforcement, NSString;

@interface CNReplaySubject : CNObservable <CNObserver> {

	NSMutableArray* _observers;
	_CNObservableEventBufferingStrategy* _recentEvents;
	id<CNSchedulerProvider> _schedulerProvider;
	id<CNScheduler> _resourceLock;
	CNObservableContractEnforcement* _enforcement;

}

@property (nonatomic,readonly) NSMutableArray * observers;                                    //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) _CNObservableEventBufferingStrategy * recentEvents;              //@synthesize recentEvents=_recentEvents - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                     //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> resourceLock;                                  //@synthesize resourceLock=_resourceLock - In the implementation block
@property (nonatomic,readonly) CNObservableContractEnforcement * enforcement;                 //@synthesize enforcement=_enforcement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_removeObserver:(id)arg1 ;
-(void)performWithResourceLock:(/*^block*/id)arg1 ;
-(id)resultWithResourceLock:(/*^block*/id)arg1 ;
-(CNObservableContractEnforcement *)enforcement;
-(id)initWithQueue:(id)arg1 schedulerProvider:(id)arg2 ;
-(void)resourceLock_scheduleReplayToObserver:(id)arg1 ;
-(void)resourceLock_swapBufferingStrategiesGivenNewTerminatingEvent:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 schedulerProvider:(id)arg2 ;
-(void)observerDidFailWithError:(id)arg1 ;
-(void)observerDidComplete;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id)initWithSchedulerProvider:(id)arg1 ;
-(id<CNScheduler>)resourceLock;
-(id)subscribe:(id)arg1 ;
-(id)_addObserver:(id)arg1 ;
-(void)observerDidReceiveResult:(id)arg1 ;
-(_CNObservableEventBufferingStrategy *)recentEvents;
-(void)setRecentEvents:(_CNObservableEventBufferingStrategy *)arg1 ;
-(id)init;
-(NSMutableArray *)observers;
@end

