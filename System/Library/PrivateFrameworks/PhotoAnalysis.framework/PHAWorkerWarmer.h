/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, PHAWorker, PHAJobConstraints;

@interface PHAWorkerWarmer : NSObject {

	NSArray* _workers;
	PHAWorker* _lastActiveWorker;
	PHAJobConstraints* _lastConstraints;

}

@property (nonatomic,readonly) NSArray * workers;                              //@synthesize workers=_workers - In the implementation block
@property (nonatomic,retain) PHAWorker * lastActiveWorker;                     //@synthesize lastActiveWorker=_lastActiveWorker - In the implementation block
@property (nonatomic,retain) PHAJobConstraints * lastConstraints;              //@synthesize lastConstraints=_lastConstraints - In the implementation block
+(unsigned long long)stateCode;
-(void)setActiveWorker:(id)arg1 withJob:(id)arg2 ;
-(id)statusAsDictionary;
-(void)setLastConstraints:(PHAJobConstraints *)arg1 ;
-(BOOL)_cooldownWorkerIfWarmed:(id)arg1 ;
-(void)_warmupWorkerIfCooled:(id)arg1 ;
-(void)setLastActiveWorker:(PHAWorker *)arg1 ;
-(id)initWithWorkers:(id)arg1 ;
-(void)recordConstraintChange:(id)arg1 ;
-(void)reportNoMoreJobsExpected;
-(NSArray *)workers;
-(PHAWorker *)lastActiveWorker;
-(PHAJobConstraints *)lastConstraints;
@end

