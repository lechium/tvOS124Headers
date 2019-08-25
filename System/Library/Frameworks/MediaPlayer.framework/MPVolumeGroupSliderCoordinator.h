/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableSet, MPVolumeSlider, NSMapTable;

@interface MPVolumeGroupSliderCoordinator : NSObject {

	NSArray* _allSliders;
	NSMutableSet* _individualVolumeSliders;
	MPVolumeSlider* _trackingSlider;
	NSMapTable* _optimisticValues;
	NSMapTable* _optimisticScales;
	int _inFlightDisableOptimisticStateRequests;
	BOOL _shouldOverrideTracking;
	BOOL _synced;
	MPVolumeSlider* _masterVolumeSlider;

}

@property (nonatomic,readonly) MPVolumeSlider * masterVolumeSlider;                 //@synthesize masterVolumeSlider=_masterVolumeSlider - In the implementation block
@property (nonatomic,copy,readonly) NSArray * individualVolumeSliders; 
@property (nonatomic,readonly) BOOL synced;                                         //@synthesize synced=_synced - In the implementation block
-(void)removeAllIndividualVolumeSliders;
-(void)addIndividualVolumeSlider:(id)arg1 ;
-(void)removeIndividualVolumeSlider:(id)arg1 ;
-(void)_addControlEventsForVolumeSlider:(id)arg1 ;
-(void)_updateOptimisticValueCache;
-(void)_resetMasterVolumeSlider;
-(void)_removeControlEventsForVolumeSlider:(id)arg1 ;
-(float)_maxOptimisticValue;
-(void)_resetOptimisticScales;
-(void)volumeSliderValueChanged:(id)arg1 ;
-(void)_setControlEventsForVolumeSlider:(id)arg1 add:(BOOL)arg2 ;
-(void)volumeSliderDidEndTracking:(id)arg1 ;
-(id)initWithMasterVolumeSlider:(id)arg1 individualVolumeSliders:(id)arg2 ;
-(NSArray *)individualVolumeSliders;
-(void)syncSliders:(BOOL)arg1 ;
-(void)_addControlEventsForVolumeSliders:(id)arg1 ;
-(void)_removeControlEventsForVolumeSliders:(id)arg1 ;
-(MPVolumeSlider *)masterVolumeSlider;
-(BOOL)synced;
@end

