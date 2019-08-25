/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_os_log;
@class NSMutableArray, NSMutableDictionary, NSObject, NSString, NSArray;

@interface TVPStateMachine : NSObject {

	/*^block*/id _stateChangeHandler;
	NSMutableArray* _events;
	NSMutableDictionary* _handlers;
	NSMutableDictionary* _defaultHandlers;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableArray* _blocksToExecuteAfterStateTransition;
	BOOL _handlingEvent;
	BOOL _shouldAcceptEvents;
	BOOL _callsStateChangeHandlerSynchronously;
	NSString* _loggingComponent;
	NSString* _name;
	NSString* _currentState;
	long long _mode;
	NSObject*<OS_os_log> _logObject;
	NSArray* _ignorableEvents;

}

@property (copy) NSString * currentState;                                            //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long mode;                                       //@synthesize mode=_mode - In the implementation block
@property (assign) BOOL shouldAcceptEvents;                                          //@synthesize shouldAcceptEvents=_shouldAcceptEvents - In the implementation block
@property (nonatomic,copy) NSString * loggingComponent;                              //@synthesize loggingComponent=_loggingComponent - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> logObject;                         //@synthesize logObject=_logObject - In the implementation block
@property (copy) NSArray * ignorableEvents;                                          //@synthesize ignorableEvents=_ignorableEvents - In the implementation block
@property (assign,nonatomic) BOOL callsStateChangeHandlerSynchronously;              //@synthesize callsStateChangeHandlerSynchronously=_callsStateChangeHandlerSynchronously - In the implementation block
+(void)registerStateMachine:(id)arg1 ;
+(id)stateMachineWithName:(id)arg1 ;
+(void)initialize;
+(id)stateMachinesOfType:(Class)arg1 ;
+(void)deregisterStateMachine:(id)arg1 ;
-(void)registerHandlerForEvents:(id)arg1 onStates:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)deregisterHandlers;
-(NSObject*<OS_os_log>)logObject;
-(void)purgeEventQueue;
-(BOOL)shouldAcceptEvents;
-(NSArray *)ignorableEvents;
-(void)_processNextEvent;
-(void)setLoggingComponent:(NSString *)arg1 ;
-(NSString *)loggingComponent;
-(void)logUnhandledEvents;
-(void)setIgnorableEvents:(NSArray *)arg1 ;
-(BOOL)callsStateChangeHandlerSynchronously;
-(void)_executePostTransitionBlocks;
-(void)_processEvent:(id)arg1 ;
-(void)_dispatchEvent:(id)arg1 ;
-(/*^block*/id)_eventHandlerForEvent:(id)arg1 ;
-(void)_transitionToState:(id)arg1 withEvent:(id)arg2 context:(id)arg3 userInfo:(id)arg4 ;
-(NSString *)name;
-(NSString *)currentState;
-(long long)mode;
-(void)setCurrentState:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 initialState:(id)arg2 mode:(long long)arg3 stateChangeHandler:(/*^block*/id)arg4 ;
-(void)setLogObject:(NSObject*<OS_os_log>)arg1 ;
-(void)setCallsStateChangeHandlerSynchronously:(BOOL)arg1 ;
-(void)setShouldAcceptEvents:(BOOL)arg1 ;
-(void)postEvent:(id)arg1 ;
-(void)postEvent:(id)arg1 withContext:(id)arg2 userInfo:(id)arg3 ;
-(void)executeBlockAfterCurrentStateTransition:(/*^block*/id)arg1 ;
-(void)registerHandlerForEvent:(id)arg1 onStates:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)registerHandlerForEvent:(id)arg1 onState:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)registerDefaultHandlerForEvent:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)postEvent:(id)arg1 withContext:(id)arg2 ;
-(id)initWithName:(id)arg1 initialState:(id)arg2 mode:(long long)arg3 ;
-(void)registerStateTransitionFromState:(id)arg1 onEvent:(id)arg2 toState:(id)arg3 ;
@end

