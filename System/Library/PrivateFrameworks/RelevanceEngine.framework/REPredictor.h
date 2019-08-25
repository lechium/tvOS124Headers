/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/REObservableSingleton.h>

@protocol OS_dispatch_queue;
@class NSObject, REObserverStore;

@interface REPredictor : REObservableSingleton {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _running;
	REObserverStore* _engines;

}
+(id)supportedFeatures;
+(id)systemPredictorsSupportingFeatureSet:(id)arg1 relevanceEngine:(id)arg2 ;
+(id)availablePredictors;
+(double)updateInterval;
-(id)engines;
-(void)collectLoggableState:(/*^block*/id)arg1 ;
-(void)updateObservers;
-(void)onQueue:(/*^block*/id)arg1 ;
-(id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4 ;
-(void)enumerateInflectionFeatureValues:(/*^block*/id)arg1 ;
-(void)addRelevanceEngine:(id)arg1 ;
-(void)removeRelevanceEngine:(id)arg1 ;
-(void)onQueueSync:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)update;
-(BOOL)isRunning;
-(void)resume;
-(id)queue;
-(void)setRunning:(BOOL)arg1 ;
-(void)pause;
@end

