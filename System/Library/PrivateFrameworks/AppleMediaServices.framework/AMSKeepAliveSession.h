/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BKSProcessDelegate.h>

@protocol OS_os_transaction;
@class NSString, NSCountedSet, BKSProcessAssertion, NSObject, BKSProcess;

@interface AMSKeepAliveSession : NSObject <BKSProcessDelegate> {

	BOOL _interrupted;
	NSString* _assertionName;
	NSCountedSet* _activeNames;
	NSString* _logKey;
	BKSProcessAssertion* _taskAssertion;
	NSObject*<OS_os_transaction> _osTransaction;
	BKSProcess* _process;
	long long _timerId;

}

@property (nonatomic,readonly) NSString * assertionName;                              //@synthesize assertionName=_assertionName - In the implementation block
@property (nonatomic,retain) NSCountedSet * activeNames;                              //@synthesize activeNames=_activeNames - In the implementation block
@property (assign,nonatomic) BOOL interrupted;                                        //@synthesize interrupted=_interrupted - In the implementation block
@property (nonatomic,readonly) NSString * logKey;                                     //@synthesize logKey=_logKey - In the implementation block
@property (nonatomic,retain) BKSProcessAssertion * taskAssertion;                     //@synthesize taskAssertion=_taskAssertion - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> osTransaction;              //@synthesize osTransaction=_osTransaction - In the implementation block
@property (nonatomic,retain) BKSProcess * process;                                    //@synthesize process=_process - In the implementation block
@property (assign,nonatomic) long long timerId;                                       //@synthesize timerId=_timerId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)interrupt;
+(void)addKeepAliveForName:(id)arg1 ;
+(void)removeKeepAliveForName:(id)arg1 ;
+(id)_sharedSessionQueue;
+(void)_reapplyAssertion;
+(void)_deactivateSession;
+(void)_afterDelay:(long long)arg1 coalesce:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
-(void)setProcess:(BKSProcess *)arg1 ;
-(BKSProcess *)process;
-(BOOL)interrupted;
-(void)setInterrupted:(BOOL)arg1 ;
-(NSString *)logKey;
-(void)processWillExpire:(id)arg1 ;
-(void)setOsTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(NSObject*<OS_os_transaction>)osTransaction;
-(NSCountedSet *)activeNames;
-(long long)timerId;
-(void)setTimerId:(long long)arg1 ;
-(void)setActiveNames:(NSCountedSet *)arg1 ;
-(NSString *)assertionName;
-(BKSProcessAssertion *)taskAssertion;
-(void)setTaskAssertion:(BKSProcessAssertion *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_invalidate;
@end

