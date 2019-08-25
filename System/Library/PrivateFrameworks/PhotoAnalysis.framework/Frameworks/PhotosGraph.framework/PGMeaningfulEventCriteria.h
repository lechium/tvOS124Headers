/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PGMeaningfulEventSceneSetTrait, PGMeaningfulEventSetTrait, PGMeaningfulEventLocationSetTrait, PGMeaningfulEventNumberTrait, PGMeaningfulEventPartOfDayTrait, PGMeaningfulEventLocationMobilityTrait;

@interface PGMeaningfulEventCriteria : NSObject {

	BOOL _debug;
	PGMeaningfulEventSceneSetTrait* _scenesTrait;
	PGMeaningfulEventSetTrait* _roisTrait;
	PGMeaningfulEventSetTrait* _poisTrait;
	PGMeaningfulEventLocationSetTrait* _locationsTrait;
	PGMeaningfulEventSetTrait* _datesTrait;
	PGMeaningfulEventSetTrait* _peopleTrait;
	PGMeaningfulEventNumberTrait* _numberOfPeopleTrait;
	PGMeaningfulEventSetTrait* _socialGroupsTrait;
	PGMeaningfulEventNumberTrait* _minimumDurationTrait;
	PGMeaningfulEventNumberTrait* _maximumDurationTrait;
	PGMeaningfulEventPartOfDayTrait* _significantPartsOfDayTrait;
	PGMeaningfulEventPartOfDayTrait* _allPartsOfDayTrait;
	PGMeaningfulEventLocationMobilityTrait* _locationMobilityTrait;
	PGMeaningfulEventSetTrait* _publicEventCategoriesTrait;

}

@property (nonatomic,retain) PGMeaningfulEventSceneSetTrait * scenesTrait;                                //@synthesize scenesTrait=_scenesTrait - In the implementation block
@property (nonatomic,retain) PGMeaningfulEventSetTrait * roisTrait;                                       //@synthesize roisTrait=_roisTrait - In the implementation block
@property (nonatomic,retain) PGMeaningfulEventSetTrait * poisTrait;                                       //@synthesize poisTrait=_poisTrait - In the implementation block
@property (nonatomic,retain) PGMeaningfulEventLocationSetTrait * locationsTrait;                          //@synthesize locationsTrait=_locationsTrait - In the implementation block
@property (nonatomic,retain) PGMeaningfulEventSetTrait * datesTrait;                                      //@synthesize datesTrait=_datesTrait - In the implementation block
@property (nonatomic,retain) PGMeaningfulEventSetTrait * peopleTrait;                                     //@synthesize peopleTrait=_peopleTrait - In the implementation block
@property (nonatomic,retain) PGMeaningfulEventNumberTrait * numberOfPeopleTrait;                          //@synthesize numberOfPeopleTrait=_numberOfPeopleTrait - In the implementation block
@property (nonatomic,retain) PGMeaningfulEventSetTrait * socialGroupsTrait;                               //@synthesize socialGroupsTrait=_socialGroupsTrait - In the implementation block
@property (nonatomic,retain) PGMeaningfulEventNumberTrait * minimumDurationTrait;                         //@synthesize minimumDurationTrait=_minimumDurationTrait - In the implementation block
@property (nonatomic,retain) PGMeaningfulEventNumberTrait * maximumDurationTrait;                         //@synthesize maximumDurationTrait=_maximumDurationTrait - In the implementation block
@property (nonatomic,retain) PGMeaningfulEventPartOfDayTrait * significantPartsOfDayTrait;                //@synthesize significantPartsOfDayTrait=_significantPartsOfDayTrait - In the implementation block
@property (nonatomic,retain) PGMeaningfulEventPartOfDayTrait * allPartsOfDayTrait;                        //@synthesize allPartsOfDayTrait=_allPartsOfDayTrait - In the implementation block
@property (nonatomic,retain) PGMeaningfulEventLocationMobilityTrait * locationMobilityTrait;              //@synthesize locationMobilityTrait=_locationMobilityTrait - In the implementation block
@property (nonatomic,retain) PGMeaningfulEventSetTrait * publicEventCategoriesTrait;                      //@synthesize publicEventCategoriesTrait=_publicEventCategoriesTrait - In the implementation block
@property (assign,getter=isDebug,nonatomic) BOOL debug;                                                   //@synthesize debug=_debug - In the implementation block
-(BOOL)isDebug;
-(PGMeaningfulEventSetTrait *)peopleTrait;
-(PGMeaningfulEventSetTrait *)poisTrait;
-(void)setPeopleTrait:(PGMeaningfulEventSetTrait *)arg1 ;
-(void)setDatesTrait:(PGMeaningfulEventSetTrait *)arg1 ;
-(PGMeaningfulEventSetTrait *)datesTrait;
-(void)setScenesTrait:(PGMeaningfulEventSceneSetTrait *)arg1 ;
-(void)setSignificantPartsOfDayTrait:(PGMeaningfulEventPartOfDayTrait *)arg1 ;
-(void)setNumberOfPeopleTrait:(PGMeaningfulEventNumberTrait *)arg1 ;
-(void)setMinimumDurationTrait:(PGMeaningfulEventNumberTrait *)arg1 ;
-(void)setAllPartsOfDayTrait:(PGMeaningfulEventPartOfDayTrait *)arg1 ;
-(void)setPoisTrait:(PGMeaningfulEventSetTrait *)arg1 ;
-(void)setPublicEventCategoriesTrait:(PGMeaningfulEventSetTrait *)arg1 ;
-(void)setRoisTrait:(PGMeaningfulEventSetTrait *)arg1 ;
-(void)setLocationsTrait:(PGMeaningfulEventLocationSetTrait *)arg1 ;
-(void)setLocationMobilityTrait:(PGMeaningfulEventLocationMobilityTrait *)arg1 ;
-(void)setSocialGroupsTrait:(PGMeaningfulEventSetTrait *)arg1 ;
-(PGMeaningfulEventSetTrait *)socialGroupsTrait;
-(void)setDebug:(BOOL)arg1 ;
-(void)setMaximumDurationTrait:(PGMeaningfulEventNumberTrait *)arg1 ;
-(PGMeaningfulEventNumberTrait *)numberOfPeopleTrait;
-(PGMeaningfulEventLocationSetTrait *)locationsTrait;
-(PGMeaningfulEventSceneSetTrait *)scenesTrait;
-(PGMeaningfulEventSetTrait *)roisTrait;
-(PGMeaningfulEventNumberTrait *)minimumDurationTrait;
-(PGMeaningfulEventNumberTrait *)maximumDurationTrait;
-(PGMeaningfulEventPartOfDayTrait *)significantPartsOfDayTrait;
-(PGMeaningfulEventPartOfDayTrait *)allPartsOfDayTrait;
-(PGMeaningfulEventLocationMobilityTrait *)locationMobilityTrait;
-(PGMeaningfulEventSetTrait *)publicEventCategoriesTrait;
-(id)_debugDescriptionWithMomentNode:(id)arg1 ;
-(id)init;
@end

