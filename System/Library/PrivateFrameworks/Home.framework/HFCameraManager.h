/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFAccessoryObserver.h>
#import <libobjc.A.dylib/HFCameraObserver.h>
#import <libobjc.A.dylib/HFExecutionEnvironmentObserver.h>

@protocol NACancelable;
@class NSError, HMCameraProfile, NSMapTable, NSDate, HFExecutionEnvironment, NSString;

@interface HFCameraManager : NSObject <HFAccessoryObserver, HFCameraObserver, HFExecutionEnvironmentObserver> {

	BOOL _isRegisteredForEvents;
	NSError* _cachedStreamError;
	HMCameraProfile* _cameraProfile;
	NSMapTable* _snapshotRequesters;
	NSMapTable* _streamRequesters;
	id<NACancelable> _nextSnapshotEvent;
	NSDate* _snapshotErrorDate;
	unsigned long long _snapshotErrorCount;
	HFExecutionEnvironment* _executionEnvironment;

}

@property (nonatomic,__weak,readonly) HMCameraProfile * cameraProfile;                   //@synthesize cameraProfile=_cameraProfile - In the implementation block
@property (nonatomic,readonly) NSMapTable * snapshotRequesters;                          //@synthesize snapshotRequesters=_snapshotRequesters - In the implementation block
@property (nonatomic,readonly) NSMapTable * streamRequesters;                            //@synthesize streamRequesters=_streamRequesters - In the implementation block
@property (assign,nonatomic) BOOL isRegisteredForEvents;                                 //@synthesize isRegisteredForEvents=_isRegisteredForEvents - In the implementation block
@property (nonatomic,retain) id<NACancelable> nextSnapshotEvent;                         //@synthesize nextSnapshotEvent=_nextSnapshotEvent - In the implementation block
@property (nonatomic,retain) NSDate * snapshotErrorDate;                                 //@synthesize snapshotErrorDate=_snapshotErrorDate - In the implementation block
@property (assign,nonatomic) unsigned long long snapshotErrorCount;                      //@synthesize snapshotErrorCount=_snapshotErrorCount - In the implementation block
@property (nonatomic,retain) NSError * cachedStreamError;                                //@synthesize cachedStreamError=_cachedStreamError - In the implementation block
@property (nonatomic,retain) HFExecutionEnvironment * executionEnvironment;              //@synthesize executionEnvironment=_executionEnvironment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_startStreaming;
-(void)_stopStreaming;
-(HFExecutionEnvironment *)executionEnvironment;
-(void)setExecutionEnvironment:(HFExecutionEnvironment *)arg1 ;
-(void)executionEnvironmentDidBecomeActive:(id)arg1 ;
-(void)executionEnvironmentWillResignActive:(id)arg1 ;
-(void)executionEnvironmentDidBecomeVisible:(id)arg1 ;
-(void)executionEnvironmentDidBecomeOccluded:(id)arg1 ;
-(void)accessoryDidUpdateReachability:(id)arg1 ;
-(void)cameraSnapshotControl:(id)arg1 didTakeSnapshot:(id)arg2 error:(id)arg3 ;
-(void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)arg1 ;
-(void)cameraStreamControlDidStartStream:(id)arg1 ;
-(void)cameraStreamControl:(id)arg1 didStopStreamWithError:(id)arg2 ;
-(id<NACancelable>)nextSnapshotEvent;
-(NSMapTable *)snapshotRequesters;
-(void)endPeriodicSnapshotsWithRequester:(id)arg1 ;
-(void)_beginPeriodicSnapshots;
-(void)_updateEventRegistration;
-(void)_endPeriodicSnapshots;
-(NSMapTable *)streamRequesters;
-(void)endContinuousStreamingWithRequester:(id)arg1 ;
-(void)_beginContinuousStreaming;
-(void)_endContinuousStreaming;
-(void)_scheduleNextSnapshotEventWithPreviousError:(id)arg1 ;
-(void)_cancelNextSnapshotEvent;
-(NSDate *)snapshotErrorDate;
-(double)_snapshotTimeInterval;
-(unsigned long long)snapshotErrorCount;
-(void)setSnapshotErrorDate:(NSDate *)arg1 ;
-(void)setSnapshotErrorCount:(unsigned long long)arg1 ;
-(BOOL)_hasSnapshotRequesters;
-(id)_nextSnapshotDate;
-(void)setNextSnapshotEvent:(id<NACancelable>)arg1 ;
-(BOOL)_hasStreamRequesters;
-(void)setCachedStreamError:(NSError *)arg1 ;
-(void)_dispatchStreamStateUpdate;
-(BOOL)isRegisteredForEvents;
-(void)setIsRegisteredForEvents:(BOOL)arg1 ;
-(void)beginPeriodicSnapshotsWithRequester:(id)arg1 ;
-(void)beginContinuousStreamingWithRequester:(id)arg1 ;
-(NSError *)cachedStreamError;
-(id)initWithCameraProfile:(id)arg1 ;
-(HMCameraProfile *)cameraProfile;
-(void)dealloc;
@end

