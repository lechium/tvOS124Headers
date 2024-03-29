/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject;

@interface RTLifeCycleManager : NSObject {

	BOOL _activeTransaction;
	BOOL _exitWhenNoTransactions;
	NSMutableArray* _signals;
	NSMutableDictionary* _transactions;
	NSMutableDictionary* _listeners;
	NSMutableSet* _services;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSMutableArray * signals;                        //@synthesize signals=_signals - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * transactions;              //@synthesize transactions=_transactions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * listeners;                 //@synthesize listeners=_listeners - In the implementation block
@property (nonatomic,retain) NSMutableSet * services;                         //@synthesize services=_services - In the implementation block
@property (assign,nonatomic) BOOL activeTransaction;                          //@synthesize activeTransaction=_activeTransaction - In the implementation block
@property (assign,nonatomic) BOOL exitWhenNoTransactions;                     //@synthesize exitWhenNoTransactions=_exitWhenNoTransactions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(id)sharedInstance;
-(void)exit;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)keyForObject:(id)arg1 ;
-(NSMutableDictionary *)transactions;
-(void)setTransactions:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)services;
-(void)setServices:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)listeners;
-(void)setListeners:(NSMutableDictionary *)arg1 ;
-(void)addService:(id)arg1 ;
-(void)submitUptimeMetricsWithDefaultsMananger:(id)arg1 ;
-(NSMutableArray *)signals;
-(id)createSourceForSignal:(int)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)processTransactions;
-(void)setActiveTransaction:(BOOL)arg1 ;
-(BOOL)exitWhenNoTransactions;
-(void)_exit;
-(id)serviceWithClass:(Class)arg1 ;
-(BOOL)activeTransaction;
-(void)setExitWhenNoTransactions:(BOOL)arg1 ;
-(void)incrementTransactionsForObject:(id)arg1 ;
-(void)decrementTransactionsForObject:(id)arg1 ;
-(void)exitWithDelay:(double)arg1 ;
-(void)setSignals:(NSMutableArray *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)start;
-(void)_start;
-(NSObject*<OS_dispatch_queue>)queue;
@end

