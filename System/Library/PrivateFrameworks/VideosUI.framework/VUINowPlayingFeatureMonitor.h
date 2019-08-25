/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/TVMediaPlaybackManagerDelegate.h>

@protocol VUINowPlayingFeatureMonitorDelegate, TVPAVFPlayback, VUINowPlayingFeature, OS_dispatch_queue;
@class NSObject, TVMediaPlaybackManager, NSMutableSet, NSMapTable, NSMutableArray, NSMutableDictionary, NSArray, NSString;

@interface VUINowPlayingFeatureMonitor : NSObject <TVMediaPlaybackManagerDelegate> {

	struct {
		BOOL respondsToFeatureDidChangeState;
		BOOL respondsToActiveFeatureChangedFrom;
	}  _delegateFlags;
	BOOL _observingElapsedTime;
	id<VUINowPlayingFeatureMonitorDelegate> _delegate;
	NSObject*<TVPAVFPlayback> _player;
	TVMediaPlaybackManager* _playbackManager;
	NSMutableSet* _features;
	NSMapTable* _featureDependencies;
	NSMapTable* _featureTokens;
	NSMapTable* _featureBoundaryInfos;
	NSMapTable* _featureTimers;
	id<VUINowPlayingFeature> _featureLastRequestedUI;
	NSMutableArray* _enabledUIModes;
	double _lastProcessedElapsedTime;
	NSMutableDictionary* _boundaryTimeObserverInfos;
	id _elapsedTimeObserverToken;
	NSObject*<OS_dispatch_queue> _elapsedTimeProcessingQueue;
	NSMutableArray* _elapsedTimes;

}

@property (nonatomic,retain) NSMutableSet * features;                                              //@synthesize features=_features - In the implementation block
@property (nonatomic,retain) NSMapTable * featureDependencies;                                     //@synthesize featureDependencies=_featureDependencies - In the implementation block
@property (nonatomic,retain) NSMapTable * featureTokens;                                           //@synthesize featureTokens=_featureTokens - In the implementation block
@property (nonatomic,retain) NSMapTable * featureBoundaryInfos;                                    //@synthesize featureBoundaryInfos=_featureBoundaryInfos - In the implementation block
@property (nonatomic,retain) NSMapTable * featureTimers;                                           //@synthesize featureTimers=_featureTimers - In the implementation block
@property (nonatomic,retain) id<VUINowPlayingFeature> featureLastRequestedUI;                      //@synthesize featureLastRequestedUI=_featureLastRequestedUI - In the implementation block
@property (nonatomic,retain) NSMutableArray * enabledUIModes;                                      //@synthesize enabledUIModes=_enabledUIModes - In the implementation block
@property (assign,nonatomic) BOOL observingElapsedTime;                                            //@synthesize observingElapsedTime=_observingElapsedTime - In the implementation block
@property (assign,nonatomic) double lastProcessedElapsedTime;                                      //@synthesize lastProcessedElapsedTime=_lastProcessedElapsedTime - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * boundaryTimeObserverInfos;                      //@synthesize boundaryTimeObserverInfos=_boundaryTimeObserverInfos - In the implementation block
@property (nonatomic,retain) id elapsedTimeObserverToken;                                          //@synthesize elapsedTimeObserverToken=_elapsedTimeObserverToken - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> elapsedTimeProcessingQueue;              //@synthesize elapsedTimeProcessingQueue=_elapsedTimeProcessingQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * elapsedTimes;                                        //@synthesize elapsedTimes=_elapsedTimes - In the implementation block
@property (nonatomic,readonly) NSArray * allFeatures; 
@property (assign,nonatomic,__weak) id<VUINowPlayingFeatureMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<TVPAVFPlayback> player;                                     //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) TVMediaPlaybackManager * playbackManager;                             //@synthesize playbackManager=_playbackManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPlayer:(NSObject*<TVPAVFPlayback>)arg1 ;
-(NSObject*<TVPAVFPlayback>)player;
-(NSMutableSet *)features;
-(void)setFeatures:(NSMutableSet *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<VUINowPlayingFeatureMonitorDelegate>)arg1 ;
-(id<VUINowPlayingFeatureMonitorDelegate>)delegate;
-(void)enableUIMode:(long long)arg1 enabled:(BOOL)arg2 ;
-(void)setPlaybackManager:(TVMediaPlaybackManager *)arg1 ;
-(NSMutableArray *)enabledUIModes;
-(void)setEnabledUIModes:(NSMutableArray *)arg1 ;
-(void)_cleanUpEverything;
-(id)activeFeatureForType:(unsigned long long)arg1 ;
-(id)featuresForType:(unsigned long long)arg1 ;
-(void)addFeature:(id)arg1 ;
-(void)addFeature:(id)arg1 withDependencyToPreferredFeatures:(id)arg2 ;
-(void)evaluateFeature:(id)arg1 ;
-(void)removeFeaturesMatching:(id)arg1 ;
-(void)_unregisterPlaybackStateNotification;
-(void)_processAnyTimeBoundFeatures;
-(void)_registerPlaybackStateChangeNotification;
-(void)_processFeature:(id)arg1 ;
-(NSMapTable *)featureDependencies;
-(id<VUINowPlayingFeature>)featureLastRequestedUI;
-(TVMediaPlaybackManager *)playbackManager;
-(BOOL)_shouldAnimateFeature:(id)arg1 ;
-(void)_deactivateFeature:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_cleanupFeature:(id)arg1 ;
-(void)_cancelTimerForFeature:(id)arg1 ;
-(NSMapTable *)featureTimers;
-(void)_removeAllObservedTokensForFeature:(id)arg1 ;
-(void)removeFeature:(id)arg1 ;
-(BOOL)_isHybridFeature:(id)arg1 ;
-(void)_processUserTriggeredFeature:(id)arg1 activate:(BOOL)arg2 animated:(BOOL)arg3 ;
-(BOOL)observingElapsedTime;
-(void)setObservingElapsedTime:(BOOL)arg1 ;
-(void)_startObservingElapsedTime;
-(id)_activeFeatures;
-(BOOL)_isTimeBoundFeature:(id)arg1 ;
-(void)_processTimeBoundFeature:(id)arg1 ;
-(BOOL)_isTimerTriggeredFeature:(id)arg1 ;
-(void)_processTimerTriggeredFeature:(id)arg1 ;
-(BOOL)_isUserTriggeredFeature:(id)arg1 ;
-(id)_activeFeature;
-(void)setFeatureLastRequestedUI:(id<VUINowPlayingFeature>)arg1 ;
-(void)_removeTimeObservingForFeature:(id)arg1 withStartTime:(double)arg2 ;
-(void)_playbackStateChangedNottificaiton:(id)arg1 ;
-(BOOL)_isTVAdvisoryFeature:(id)arg1 ;
-(void)_processElapsedTime:(double)arg1 ;
-(id)elapsedTimeObserverToken;
-(void)setElapsedTimeObserverToken:(id)arg1 ;
-(double)lastProcessedElapsedTime;
-(void)setLastProcessedElapsedTime:(double)arg1 ;
-(NSMutableArray *)elapsedTimes;
-(void)_processLastElapsedTime;
-(void)_processElapsedTimeOnInternalQueue:(double)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)elapsedTimeProcessingQueue;
-(id)_timeBoundFeatures;
-(id)_observerInfoForFeature:(id)arg1 matchingTime:(double)arg2 ;
-(BOOL)_isElapsedTimeWithinFeatureTimeWindow:(id)arg1 ;
-(BOOL)_hasActiveFeaturesInArray:(id)arg1 ;
-(void)_scheduleDeactivationOfTimeBoundFeature:(id)arg1 ;
-(void)_activateFeature:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_needsUIForFeature:(id)arg1 ;
-(void)_addTimeObservingForFeature:(id)arg1 withStartTime:(double)arg2 andHandler:(/*^block*/id)arg3 ;
-(NSMapTable *)featureTokens;
-(NSMapTable *)featureBoundaryInfos;
-(void)_addObservedToken:(id)arg1 forFeature:(id)arg2 ;
-(void)setFeatureTimers:(NSMapTable *)arg1 ;
-(void)_cancelFeatureTimersIfNeeded;
-(void)mediaPlaybackManager:(id)arg1 shouldHideUI:(BOOL)arg2 animated:(BOOL)arg3 animations:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)mediaPlaybackManager:(id)arg1 shouldEnableUIModeImplicitly:(long long)arg2 ;
-(NSArray *)allFeatures;
-(BOOL)_hasAnyActiveFeature;
-(BOOL)_shouldActivateTimeBoundFeatureInitially:(id)arg1 ;
-(void)setFeatureDependencies:(NSMapTable *)arg1 ;
-(void)setFeatureTokens:(NSMapTable *)arg1 ;
-(void)setFeatureBoundaryInfos:(NSMapTable *)arg1 ;
-(NSMutableDictionary *)boundaryTimeObserverInfos;
-(void)setBoundaryTimeObserverInfos:(NSMutableDictionary *)arg1 ;
-(void)setElapsedTimeProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setElapsedTimes:(NSMutableArray *)arg1 ;
@end

