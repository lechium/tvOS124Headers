/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PHAActivityGovernorDelegate, OS_dispatch_queue, OS_xpc_object, OS_dispatch_source;
@class NSObject;

@interface PHAActivityGovernor : NSObject {

	char* _backgroundActivityName;
	char* _foregroundActivityName;
	BOOL _hasBackgroundAccess;
	BOOL _hasForegroundAccess;
	BOOL _wantsBackgroundAccess;
	BOOL _wantsForegroundAccess;
	BOOL _overrideAccess;
	BOOL _simulatedWantsDefer;
	BOOL _simulatedNeverHasAccess;
	id<PHAActivityGovernorDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _foregroundActivity;
	NSObject*<OS_dispatch_source> _foregroundDeferCheckTimer;
	double _timeOfLastForegroundWantRequest;
	double _timeSpentWantingForeground;
	double _timeOfLastForegroundGrant;
	double _timeSpentForegroundGranted;
	NSObject*<OS_xpc_object> _backgroundActivity;
	NSObject*<OS_dispatch_source> _backgroundDeferCheckTimer;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
@property (retain) NSObject*<OS_xpc_object> foregroundActivity;                            //@synthesize foregroundActivity=_foregroundActivity - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> foregroundDeferCheckTimer;                //@synthesize foregroundDeferCheckTimer=_foregroundDeferCheckTimer - In the implementation block
@property (assign,nonatomic) BOOL hasForegroundAccess;                                     //@synthesize hasForegroundAccess=_hasForegroundAccess - In the implementation block
@property (assign,nonatomic) double timeOfLastForegroundWantRequest;                       //@synthesize timeOfLastForegroundWantRequest=_timeOfLastForegroundWantRequest - In the implementation block
@property (assign,nonatomic) double timeSpentWantingForeground;                            //@synthesize timeSpentWantingForeground=_timeSpentWantingForeground - In the implementation block
@property (assign,nonatomic) double timeOfLastForegroundGrant;                             //@synthesize timeOfLastForegroundGrant=_timeOfLastForegroundGrant - In the implementation block
@property (assign,nonatomic) double timeSpentForegroundGranted;                            //@synthesize timeSpentForegroundGranted=_timeSpentForegroundGranted - In the implementation block
@property (retain) NSObject*<OS_xpc_object> backgroundActivity;                            //@synthesize backgroundActivity=_backgroundActivity - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> backgroundDeferCheckTimer;                //@synthesize backgroundDeferCheckTimer=_backgroundDeferCheckTimer - In the implementation block
@property (assign,nonatomic) BOOL hasBackgroundAccess;                                     //@synthesize hasBackgroundAccess=_hasBackgroundAccess - In the implementation block
@property (assign,nonatomic) BOOL simulatedWantsDefer;                                     //@synthesize simulatedWantsDefer=_simulatedWantsDefer - In the implementation block
@property (assign,nonatomic) BOOL simulatedNeverHasAccess;                                 //@synthesize simulatedNeverHasAccess=_simulatedNeverHasAccess - In the implementation block
@property (assign,nonatomic) BOOL wantsBackgroundAccess;                                   //@synthesize wantsBackgroundAccess=_wantsBackgroundAccess - In the implementation block
@property (assign,nonatomic) BOOL wantsForegroundAccess;                                   //@synthesize wantsForegroundAccess=_wantsForegroundAccess - In the implementation block
@property (assign,nonatomic) BOOL overrideAccess;                                          //@synthesize overrideAccess=_overrideAccess - In the implementation block
@property (assign,nonatomic,__weak) id<PHAActivityGovernorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)statusAsDictionary;
-(void)setOverrideAccess:(BOOL)arg1 ;
-(void)setWantsForegroundAccess:(BOOL)arg1 ;
-(BOOL)hasForegroundAccess;
-(BOOL)overrideAccess;
-(void)_inq_removeDeferTimer:(id)arg1 ;
-(const char*)_activityNameForLevel:(unsigned long long)arg1 ;
-(BOOL)simulatedWantsDefer;
-(void)setHasBackgroundAccess:(BOOL)arg1 ;
-(void)setHasForegroundAccess:(BOOL)arg1 ;
-(void)_inq_installDeferMonitorForActivity:(id)arg1 accessLevel:(unsigned long long)arg2 ;
-(void)_inq_teardownActivity:(id*)arg1 accessLevel:(unsigned long long)arg2 timer:(id)arg3 ;
-(BOOL)hasBackgroundAccess;
-(BOOL)wantsBackgroundAccess;
-(BOOL)wantsForegroundAccess;
-(BOOL)_inq_wantsAccessForLevel:(unsigned long long)arg1 ;
-(BOOL)_inq_hasAccessForLevel:(unsigned long long)arg1 ;
-(void)_inq_registerActivityNamed:(const char*)arg1 withCriteria:(id)arg2 accessLevel:(unsigned long long)arg3 ;
-(void)_inq_finishActivity:(id*)arg1 accessLevel:(unsigned long long)arg2 timer:(id)arg3 ;
-(double)timeSpentWantingForeground;
-(double)timeSpentForegroundGranted;
-(void)_generateActivityNames;
-(void)_inq_handleRequestChangeForAccessLevel:(unsigned long long)arg1 ;
-(void)setWantsBackgroundAccess:(BOOL)arg1 ;
-(void)setSimulatedNeverHasAccess:(BOOL)arg1 ;
-(NSObject*<OS_xpc_object>)foregroundActivity;
-(void)setForegroundActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_dispatch_source>)foregroundDeferCheckTimer;
-(void)setForegroundDeferCheckTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(double)timeOfLastForegroundWantRequest;
-(void)setTimeOfLastForegroundWantRequest:(double)arg1 ;
-(void)setTimeSpentWantingForeground:(double)arg1 ;
-(double)timeOfLastForegroundGrant;
-(void)setTimeOfLastForegroundGrant:(double)arg1 ;
-(void)setTimeSpentForegroundGranted:(double)arg1 ;
-(NSObject*<OS_xpc_object>)backgroundActivity;
-(void)setBackgroundActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_dispatch_source>)backgroundDeferCheckTimer;
-(void)setBackgroundDeferCheckTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setSimulatedWantsDefer:(BOOL)arg1 ;
-(BOOL)simulatedNeverHasAccess;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setDelegate:(id<PHAActivityGovernorDelegate>)arg1 ;
-(id<PHAActivityGovernorDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)queue;
@end

