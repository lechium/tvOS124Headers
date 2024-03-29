/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/MiroBlueprintTitleStyleProtocol.h>
#import <libobjc.A.dylib/MiroBlueprintMusicInfoProtocol.h>
#import <libobjc.A.dylib/MiroBlueprintEditStyleProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MiroBlueprintProtocol.h>

@class NSString, NSDictionary, NSArray, NSMutableDictionary;

@interface MiroBlueprint : NSObject <MiroBlueprintTitleStyleProtocol, MiroBlueprintMusicInfoProtocol, MiroBlueprintEditStyleProtocol, NSCopying, NSSecureCoding, MiroBlueprintProtocol> {

	BOOL _songIsLocked;
	BOOL _titleIsLocked;
	unsigned _randomizerSeed;
	NSString* _flexMusicID;
	NSString* _titleID;
	NSString* _editStyleID;
	NSArray* _moodIDs;
	NSMutableDictionary* _moodDictionary;
	unsigned long long _iTunesMediaID;
	unsigned long long _iCloudMusicMediaID;
	unsigned long long _iCloudMusicAccountID;
	NSString* _projectFilterID;
	NSString* _songID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * effectID; 
@property (nonatomic,readonly) NSString * fontName; 
@property (nonatomic,readonly) NSDictionary * parametersDictionary; 
@property (nonatomic,readonly) NSString * titleAndAnimationStyleDescription; 
@property (nonatomic,readonly) BOOL titleRequestsColorAnalysis; 
@property (nonatomic,readonly) unsigned long long songPace; 
@property (nonatomic,readonly) NSArray * burstStyleNames; 
@property (nonatomic,readonly) NSDictionary * healingEditTransitionDictionary; 
@property (nonatomic,readonly) NSArray * transitionsAsDictionaries; 
@property (nonatomic,readonly) NSArray * multiUpTransitionsAsDictionaries; 
@property (nonatomic,readonly) NSArray * multiUpTransitionDictionaries; 
@property (nonatomic,readonly) NSArray * expandedMultiUpTransitionDictionaries; 
@property (nonatomic,readonly) double maxZoomLevel; 
@property (nonatomic,readonly) BOOL extremeZoomAllowed; 
@property (nonatomic,readonly) NSArray * allowedCropTreatments; 
@property (nonatomic,readonly) BOOL defaultCameraMotionIsPan; 
@property (nonatomic,readonly) BOOL sweepingPansAllowed; 
@property (nonatomic,readonly) BOOL centerOnFrame; 
@property (nonatomic,readonly) BOOL healingTransitionsAllowed; 
@property (nonatomic,readonly) NSString * sequentialNUpEffect; 
@property (nonatomic,readonly) double hardCutPercentage; 
@property (nonatomic,readonly) double kenBurnsAnyStillPercentage; 
@property (nonatomic,readonly) BOOL isMoodDictionaryPopulated; 
@property (nonatomic,retain) NSArray * moodIDs;                                              //@synthesize moodIDs=_moodIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * moodDictionary;                           //@synthesize moodDictionary=_moodDictionary - In the implementation block
@property (nonatomic,readonly) NSString * flexMusicID;                                       //@synthesize flexMusicID=_flexMusicID - In the implementation block
@property (nonatomic,retain) NSString * songID;                                              //@synthesize songID=_songID - In the implementation block
@property (assign,nonatomic) unsigned long long iTunesMediaID;                               //@synthesize iTunesMediaID=_iTunesMediaID - In the implementation block
@property (assign,nonatomic) unsigned long long iCloudMusicMediaID;                          //@synthesize iCloudMusicMediaID=_iCloudMusicMediaID - In the implementation block
@property (assign,nonatomic) unsigned long long iCloudMusicAccountID;                        //@synthesize iCloudMusicAccountID=_iCloudMusicAccountID - In the implementation block
@property (nonatomic,copy) NSString * projectFilterID;                                       //@synthesize projectFilterID=_projectFilterID - In the implementation block
@property (assign,nonatomic) BOOL songIsLocked;                                              //@synthesize songIsLocked=_songIsLocked - In the implementation block
@property (assign,nonatomic) BOOL titleIsLocked;                                             //@synthesize titleIsLocked=_titleIsLocked - In the implementation block
@property (assign,nonatomic) unsigned randomizerSeed;                                        //@synthesize randomizerSeed=_randomizerSeed - In the implementation block
@property (nonatomic,readonly) NSString * moodID; 
@property (nonatomic,readonly) NSString * titleID;                                           //@synthesize titleID=_titleID - In the implementation block
@property (nonatomic,readonly) NSString * editStyleID;                                       //@synthesize editStyleID=_editStyleID - In the implementation block
@property (nonatomic,readonly) NSDictionary * titleStyleDictionary; 
@property (nonatomic,readonly) id debugSingleTransitionID; 
@property (nonatomic,readonly) double videoMinDuration; 
@property (nonatomic,readonly) double videoIdealDuration; 
@property (nonatomic,readonly) double videoMaxDuration; 
@property (nonatomic,readonly) double photoMinDuration; 
@property (nonatomic,readonly) double photoIdealDuration; 
@property (nonatomic,readonly) double photoMaxDuration; 
@property (nonatomic,readonly) double titleMinDuration; 
@property (nonatomic,readonly) double titleIdealDuration; 
@property (nonatomic,readonly) double irisMinDuration; 
@property (nonatomic,readonly) double irisIdealDuration; 
@property (nonatomic,readonly) double irisMaxDuration; 
@property (nonatomic,readonly) double burstMinDuration; 
@property (nonatomic,readonly) double burstIdealDuration; 
@property (nonatomic,readonly) double sloMoMinDuration; 
@property (nonatomic,readonly) double sloMoIdealDuration; 
@property (nonatomic,readonly) double timelapseMinDuration; 
@property (nonatomic,readonly) double timelapseIdealDuration; 
@property (nonatomic,readonly) double halfBarDuration; 
@property (nonatomic,readonly) unsigned long long toneTreatment; 
@property (nonatomic,readonly) id<MiroBlueprintMusicInfoProtocol> musicInfo; 
@property (nonatomic,readonly) id<MiroBlueprintTitleStyleProtocol> titleStyle; 
@property (nonatomic,readonly) id<MiroBlueprintEditStyleProtocol> editStyle; 
+(id)blueprint;
+(id)blueprintFromFontName:(id)arg1 ;
+(id)blueprintWithMood:(id)arg1 ;
+(id)emptyBlueprint;
+(id)keysAffectingAutoEdit;
+(id)blueprintFromSerializedDictionaryRepresentation:(id)arg1 ;
+(id)nominalBlueprint;
+(BOOL)supportsSecureCoding;
-(double)maxZoomLevel;
-(NSString *)moodID;
-(id)dictionaryRepresentationForSerialization;
-(double)videoMinDuration;
-(double)videoIdealDuration;
-(double)videoMaxDuration;
-(double)panoMinDurationWithMultiplier:(double)arg1 ;
-(double)panoMaxDurationWithMultiplier:(double)arg1 ;
-(double)panoIdealDurationWithMultiplier:(double)arg1 ;
-(double)photoIdealDuration;
-(double)photoMinDuration;
-(double)photoMaxDuration;
-(double)idealDurationForAsset:(id)arg1 ;
-(NSString *)songID;
-(id<MiroBlueprintMusicInfoProtocol>)musicInfo;
-(unsigned long long)songPace;
-(NSString *)editStyleID;
-(NSString *)titleAndAnimationStyleDescription;
-(NSArray *)moodIDs;
-(id<MiroBlueprintEditStyleProtocol>)editStyle;
-(NSArray *)transitionsAsDictionaries;
-(NSArray *)expandedMultiUpTransitionDictionaries;
-(NSDictionary *)healingEditTransitionDictionary;
-(unsigned long long)iTunesMediaID;
-(double)titleMinDuration;
-(NSString *)effectID;
-(NSString *)titleID;
-(double)titleIdealDuration;
-(BOOL)songIsLocked;
-(BOOL)titleIsLocked;
-(id)blueprintWithMood:(id)arg1 ;
-(double)halfBarDuration;
-(NSDictionary *)parametersDictionary;
-(BOOL)titleRequestsColorAnalysis;
-(id)titleStyleToFontMap;
-(void)setITunesMediaID:(unsigned long long)arg1 ;
-(void)setMoodDictionary:(NSMutableDictionary *)arg1 ;
-(void)setMoodIDs:(NSArray *)arg1 ;
-(void)setRandomizerSeed:(unsigned)arg1 ;
-(void)setProjectFilterID:(NSString *)arg1 ;
-(NSMutableDictionary *)moodDictionary;
-(unsigned long long)iCloudMusicMediaID;
-(void)setICloudMusicMediaID:(unsigned long long)arg1 ;
-(unsigned long long)iCloudMusicAccountID;
-(void)setICloudMusicAccountID:(unsigned long long)arg1 ;
-(void)setSongIsLocked:(BOOL)arg1 ;
-(void)setTitleIsLocked:(BOOL)arg1 ;
-(NSString *)flexMusicID;
-(NSString *)projectFilterID;
-(id)debugSingleTransitionID;
-(unsigned)randomizerSeed;
-(double)sloMoMinDuration;
-(double)sloMoIdealDuration;
-(double)timelapseMinDuration;
-(double)timelapseIdealDuration;
-(double)irisMinDuration;
-(double)irisIdealDuration;
-(double)irisMaxDuration;
-(double)burstMinDuration;
-(double)burstIdealDuration;
-(DurationTriplet)durationsForAsset:(id)arg1 ;
-(double)_videoMinDuration;
-(double)_videoIdealDuration;
-(double)_videoMaxDuration;
-(id)_pacingKey;
-(id)_moodPaceKey;
-(double)moodPacingMultiplier;
-(double)_photoMinDuration;
-(double)_photoIdealDuration;
-(double)_photoMaxDuration;
-(BOOL)isMoodDictionaryPopulated;
-(double)minimumDurationForAsset:(id)arg1 ;
-(BOOL)durationIsNearVideoIdeal:(double)arg1 ;
-(unsigned long long)toneTreatment;
-(BOOL)blueprintDiffersFromBlueprint:(id)arg1 ;
-(NSDictionary *)titleStyleDictionary;
-(void)setSongID:(NSString *)arg1 ;
-(double)maximumDurationForAsset:(id)arg1 ;
-(NSArray *)multiUpTransitionsAsDictionaries;
-(BOOL)centerOnFrame;
-(double)kenBurnsAnyStillPercentage;
-(NSArray *)allowedCropTreatments;
-(NSString *)sequentialNUpEffect;
-(BOOL)defaultCameraMotionIsPan;
-(BOOL)sweepingPansAllowed;
-(BOOL)healingTransitionsAllowed;
-(double)hardCutPercentage;
-(NSArray *)multiUpTransitionDictionaries;
-(NSArray *)burstStyleNames;
-(BOOL)extremeZoomAllowed;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)fontName;
-(id<MiroBlueprintTitleStyleProtocol>)titleStyle;
@end

