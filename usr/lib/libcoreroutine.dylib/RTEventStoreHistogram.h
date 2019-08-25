/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTEventStore.h>
#import <libobjc.A.dylib/RTEventStore.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class RTMediaRemote, RTDefaultsManager, NSMutableArray, RTEventDateBasedDecayHistogram, RTEntropyFilter, NSMutableSet, NSString;

@interface RTEventStoreHistogram : RTEventStore <RTEventStore, NSSecureCoding> {

	double _confidence;
	RTMediaRemote* _mediaRemote;
	RTDefaultsManager* _defaultsManager;
	NSMutableArray* _events;
	RTEventDateBasedDecayHistogram* _processedEventModel;
	RTEntropyFilter* _entropyFilter;
	double _globalLaunchThreshold;
	NSMutableSet* _bundleIdentifiersSupportingPriming;

}

@property (nonatomic,retain) RTMediaRemote * mediaRemote;                                       //@synthesize mediaRemote=_mediaRemote - In the implementation block
@property (nonatomic,retain) RTDefaultsManager * defaultsManager;                               //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (nonatomic,retain) NSMutableArray * events;                                           //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) RTEventDateBasedDecayHistogram * processedEventModel;              //@synthesize processedEventModel=_processedEventModel - In the implementation block
@property (nonatomic,retain) RTEntropyFilter * entropyFilter;                                   //@synthesize entropyFilter=_entropyFilter - In the implementation block
@property (assign,nonatomic) double confidence;                                                 //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) double globalLaunchThreshold;                                      //@synthesize globalLaunchThreshold=_globalLaunchThreshold - In the implementation block
@property (nonatomic,retain) NSMutableSet * bundleIdentifiersSupportingPriming;                 //@synthesize bundleIdentifiersSupportingPriming=_bundleIdentifiersSupportingPriming - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSMutableArray *)events;
-(void)addEvent:(id)arg1 ;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(void)addEvents:(id)arg1 ;
-(RTDefaultsManager *)defaultsManager;
-(void)setDefaultsManager:(RTDefaultsManager *)arg1 ;
-(void)setupThreshold;
-(double)calculateModelConfidenceWithBundleId:(id)arg1 ;
-(void)fetchAllPredictionsWithHandler:(/*^block*/id)arg1 ;
-(void)clearAllEvents;
-(void)removeEvent:(id)arg1 ;
-(void)removeEvents:(id)arg1 ;
-(unsigned long long)countOfEvents;
-(void)_processEventsWithGlobalAppLaunchCountedSet:(id)arg1 handler:(/*^block*/id)arg2 ;
-(double)getConfidence;
-(id)initWithApplicableEventClasses:(id)arg1 decayRate:(double)arg2 mediaRemote:(id)arg3 defaultsManager:(id)arg4 ;
-(void)addAppLaunchEvent:(id)arg1 ;
-(RTMediaRemote *)mediaRemote;
-(void)setMediaRemote:(RTMediaRemote *)arg1 ;
-(RTEventDateBasedDecayHistogram *)processedEventModel;
-(void)setProcessedEventModel:(RTEventDateBasedDecayHistogram *)arg1 ;
-(RTEntropyFilter *)entropyFilter;
-(void)setEntropyFilter:(RTEntropyFilter *)arg1 ;
-(double)globalLaunchThreshold;
-(void)setGlobalLaunchThreshold:(double)arg1 ;
-(NSMutableSet *)bundleIdentifiersSupportingPriming;
-(void)setBundleIdentifiersSupportingPriming:(NSMutableSet *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(void)invalidate;
-(double)confidence;
-(void)setConfidence:(double)arg1 ;
@end
