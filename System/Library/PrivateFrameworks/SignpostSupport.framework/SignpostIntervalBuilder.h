/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMapTable, NSObject, SignpostCAInstrumentationProcessor;

@interface SignpostIntervalBuilder : NSObject {

	BOOL _buildAnimationCompositeIntervalTimelines;
	BOOL _compositeIntervalIsInFlight;
	BOOL _foundMacOSSpecificData;
	BOOL _foundIPhoneOSSpecificData;
	BOOL _foundCAWSInMemoryData;
	NSMutableDictionary* _systemwideDictionary;
	NSMutableDictionary* _processwideDictionary;
	NSMutableDictionary* _threadwideDictionary;
	NSMapTable* _outstandingAnimationState;
	unsigned long long _totalCompositeIntervalCount;
	NSObject*<OS_dispatch_queue> _syncQueue;
	unsigned long long _previousMCT;
	SignpostCAInstrumentationProcessor* _caInstrumentationProcessor;

}

@property (nonatomic,readonly) NSMutableDictionary * systemwideDictionary;                                   //@synthesize systemwideDictionary=_systemwideDictionary - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * processwideDictionary;                                  //@synthesize processwideDictionary=_processwideDictionary - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * threadwideDictionary;                                   //@synthesize threadwideDictionary=_threadwideDictionary - In the implementation block
@property (nonatomic,retain) NSMapTable * outstandingAnimationState;                                         //@synthesize outstandingAnimationState=_outstandingAnimationState - In the implementation block
@property (assign,nonatomic) unsigned long long totalCompositeIntervalCount;                                 //@synthesize totalCompositeIntervalCount=_totalCompositeIntervalCount - In the implementation block
@property (assign,nonatomic) BOOL compositeIntervalIsInFlight;                                               //@synthesize compositeIntervalIsInFlight=_compositeIntervalIsInFlight - In the implementation block
@property (assign,nonatomic) BOOL foundMacOSSpecificData;                                                    //@synthesize foundMacOSSpecificData=_foundMacOSSpecificData - In the implementation block
@property (assign,nonatomic) BOOL foundIPhoneOSSpecificData;                                                 //@synthesize foundIPhoneOSSpecificData=_foundIPhoneOSSpecificData - In the implementation block
@property (assign,nonatomic) BOOL foundCAWSInMemoryData;                                                     //@synthesize foundCAWSInMemoryData=_foundCAWSInMemoryData - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> syncQueue;                                       //@synthesize syncQueue=_syncQueue - In the implementation block
@property (assign,nonatomic) unsigned long long previousMCT;                                                 //@synthesize previousMCT=_previousMCT - In the implementation block
@property (nonatomic,readonly) SignpostCAInstrumentationProcessor * caInstrumentationProcessor;              //@synthesize caInstrumentationProcessor=_caInstrumentationProcessor - In the implementation block
@property (assign,nonatomic) BOOL buildAnimationCompositeIntervalTimelines;                                  //@synthesize buildAnimationCompositeIntervalTimelines=_buildAnimationCompositeIntervalTimelines - In the implementation block
+(BOOL)_filterPassesRequiredSCForFramerate:(id)arg1 ;
+(id)_framerateCalculationWhitelist;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(BOOL)timestampIndicatesDeviceReboot:(unsigned long long)arg1 ;
-(BOOL)signpostIsAnimationMetadata:(id)arg1 ;
-(BOOL)isMetadataSubsystem:(id)arg1 category:(id)arg2 ;
-(id)processEndEvent:(id)arg1 isAnimation:(BOOL*)arg2 ;
-(void)processEmittedEvent:(id)arg1 ;
-(BOOL)processBeginEvent:(id)arg1 ;
-(BOOL)buildAnimationCompositeIntervalTimelines;
-(void)setBuildAnimationCompositeIntervalTimelines:(BOOL)arg1 ;
-(id)doneProcessing;
-(void)dropAccumulatedState;
-(NSMapTable *)outstandingAnimationState;
-(SignpostCAInstrumentationProcessor *)caInstrumentationProcessor;
-(unsigned long long)previousMCT;
-(void)setPreviousMCT:(unsigned long long)arg1 ;
-(NSMutableDictionary *)systemwideDictionary;
-(NSMutableDictionary *)processwideDictionary;
-(NSMutableDictionary *)threadwideDictionary;
-(id)_matchingEventForEvent:(id)arg1 removeIfFound:(BOOL)arg2 ;
-(BOOL)signpostIsCompositeLoop:(id)arg1 ;
-(BOOL)isCompositeLoopSubsystem:(id)arg1 category:(id)arg2 ;
-(void)setOutstandingAnimationState:(NSMapTable *)arg1 ;
-(void)_initializeMapsIfNecessary;
-(BOOL)foundCAWSInMemoryData;
-(BOOL)compositeIntervalIsInFlight;
-(unsigned long long)totalCompositeIntervalCount;
-(BOOL)_trackBegin:(id)arg1 ;
-(void)_startTrackingAnimationWithBeginEvent:(id)arg1 ;
-(void)setCompositeIntervalIsInFlight:(BOOL)arg1 ;
-(BOOL)_handleIPhoneOsSpecialEvents:(id)arg1 ;
-(void)setTotalCompositeIntervalCount:(unsigned long long)arg1 ;
-(BOOL)foundIPhoneOSSpecificData;
-(void)_processCompositeInterval:(id)arg1 ;
-(void)setFoundMacOSSpecificData:(BOOL)arg1 ;
-(BOOL)foundMacOSSpecificData;
-(void)setFoundCAWSInMemoryData:(BOOL)arg1 ;
-(BOOL)_hasOutstandingAnimations;
-(void)_cleanupStateForBeginEvent:(id)arg1 ;
-(id)_animationWithBegin:(id)arg1 endEvent:(id)arg2 ;
-(BOOL)_handleCommonSpecialIntervals:(id)arg1 ;
-(BOOL)_handleMacOsSpecialIntervals:(id)arg1 ;
-(BOOL)_handleIPhoneOsSpecialIntervals:(id)arg1 ;
-(id)matchingEventForEvent:(id)arg1 removeIfFound:(BOOL)arg2 ;
-(void)setFoundIPhoneOSSpecificData:(BOOL)arg1 ;
-(id)init;
@end

