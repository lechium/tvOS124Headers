/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/FlexSongProtocol.h>

@protocol FlexSongAssetProviderProtocol;
@class NSDictionary, NSArray, UIImage, NSString, NSSet, NSObject;

@interface FlexSong : NSObject <FlexSongProtocol> {

	NSDictionary* _analysisData;
	SCD_Struct_TV2 _naturalDuration;
	NSArray* _unloadedMainSegments;
	BOOL _hidden;
	BOOL _recalled;
	UIImage* _cachedArtwork;
	long long _metadataVersion;
	NSString* _uid;
	NSString* _songName;
	NSString* _artistName;
	NSSet* _tagIDs;
	NSSet* _keywords;
	long long _sampleRate;
	NSArray* _assets;
	NSString* _audioFileExtension;
	NSString* _audioEncoderPresetName;
	NSObject*<FlexSongAssetProviderProtocol> _assetProvider;
	NSArray* _mainSegments;
	NSArray* _crossFadeSegments;
	NSArray* _introSegments;
	NSArray* _bodySegments;
	NSArray* _outroSegments;
	NSArray* _transSegments;
	NSDictionary* _customOptions;

}

@property (nonatomic,readonly) long long metadataVersion;                                           //@synthesize metadataVersion=_metadataVersion - In the implementation block
@property (nonatomic,readonly) NSString * uid;                                                      //@synthesize uid=_uid - In the implementation block
@property (nonatomic,readonly) NSString * songName;                                                 //@synthesize songName=_songName - In the implementation block
@property (nonatomic,readonly) NSString * artistName;                                               //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,readonly) NSSet * tagIDs;                                                      //@synthesize tagIDs=_tagIDs - In the implementation block
@property (nonatomic,readonly) NSSet * keywords;                                                    //@synthesize keywords=_keywords - In the implementation block
@property (nonatomic,readonly) BOOL hidden;                                                         //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,readonly) BOOL recalled;                                                       //@synthesize recalled=_recalled - In the implementation block
@property (nonatomic,readonly) long long sampleRate;                                                //@synthesize sampleRate=_sampleRate - In the implementation block
@property (nonatomic,readonly) NSArray * assets;                                                    //@synthesize assets=_assets - In the implementation block
@property (nonatomic,readonly) UIImage * artwork;                                                   //@synthesize cachedArtwork=_cachedArtwork - In the implementation block
@property (nonatomic,readonly) NSString * audioFileExtension;                                       //@synthesize audioFileExtension=_audioFileExtension - In the implementation block
@property (nonatomic,readonly) NSString * audioEncoderPresetName;                                   //@synthesize audioEncoderPresetName=_audioEncoderPresetName - In the implementation block
@property (nonatomic,readonly) NSObject*<FlexSongAssetProviderProtocol> assetProvider;              //@synthesize assetProvider=_assetProvider - In the implementation block
@property (nonatomic,readonly) NSArray * mainSegments;                                              //@synthesize mainSegments=_mainSegments - In the implementation block
@property (nonatomic,readonly) NSArray * crossFadeSegments;                                         //@synthesize crossFadeSegments=_crossFadeSegments - In the implementation block
@property (nonatomic,readonly) NSArray * introSegments;                                             //@synthesize introSegments=_introSegments - In the implementation block
@property (nonatomic,readonly) NSArray * bodySegments;                                              //@synthesize bodySegments=_bodySegments - In the implementation block
@property (nonatomic,readonly) NSArray * outroSegments;                                             //@synthesize outroSegments=_outroSegments - In the implementation block
@property (nonatomic,readonly) NSArray * transSegments;                                             //@synthesize transSegments=_transSegments - In the implementation block
@property (nonatomic,readonly) NSDictionary * customOptions;                                        //@synthesize customOptions=_customOptions - In the implementation block
+(id)loadSongInFolderWithPath:(id)arg1 ;
+(id)numberToString:(long long)arg1 ;
+(long long)_findMaxLengthInSamplesToReserveForOutroSegment:(id)arg1 withOptions:(id)arg2 ;
+(long long)_findEarlyFadeStartOffsetInSamplesForOutroSegment:(id)arg1 withOptions:(id)arg2 ;
+(long long)_findMinLengthInSamplesForEarlyFadeOutForOutroSegment:(id)arg1 withOptions:(id)arg2 ;
+(long long)_durationInSamplesToReserveForOutroSegment:(id)arg1 withOptions:(id)arg2 ;
+(id)outroInfoForClipPlaylist:(id)arg1 ;
+(BOOL)_transitionIsPossibleFromSegment:(id)arg1 toSegment:(id)arg2 forBodyClipPlaylist:(id)arg3 ;
-(UIImage *)artwork;
-(NSSet *)keywords;
-(NSString *)artistName;
-(NSArray *)assets;
-(long long)metadataVersion;
-(NSString *)songName;
-(NSSet *)tagIDs;
-(BOOL)canPlay;
-(id)assetWithID:(id)arg1 ;
-(SCD_Struct_TV2)minimumDuration;
-(BOOL)recalled;
-(NSString *)audioEncoderPresetName;
-(void)updateAssets:(id)arg1 ;
-(SCD_Struct_TV2)naturalDuration;
-(id)renditionForDuration:(SCD_Struct_TV2)arg1 withOptions:(id)arg2 usePreRenderedFades:(BOOL)arg3 testingContext:(id)arg4 ;
-(NSDictionary *)customOptions;
-(id)timedMetadataItemsWithIdentifier:(id)arg1 forRendition:(id)arg2 ;
-(id)encodeAsDictionary;
-(NSString *)audioFileExtension;
-(id)initWithDictionary:(id)arg1 assets:(id)arg2 ;
-(void)updateSongArtist:(id)arg1 title:(id)arg2 tags:(id)arg3 keywords:(id)arg4 hidden:(BOOL)arg5 recalled:(BOOL)arg6 metadataVersion:(long long)arg7 ;
-(id)_loadArtworkImage;
-(void)_cacheSegmentsByType;
-(void)_loadAnalysisData;
-(NSArray *)mainSegments;
-(NSArray *)crossFadeSegments;
-(NSObject*<FlexSongAssetProviderProtocol>)assetProvider;
-(id)_naturalDurationAssemblyList;
-(long long)_sampleDurationOfClipPlaylist:(id)arg1 ;
-(void)_loadSegments;
-(NSArray *)bodySegments;
-(NSArray *)introSegments;
-(NSArray *)outroSegments;
-(NSArray *)transSegments;
-(id)_segmentsforType:(unsigned long long)arg1 ;
-(unsigned long long)_highestIndexForSegmentType:(unsigned long long)arg1 ;
-(id)_segmentsForIndex:(unsigned long long)arg1 andType:(unsigned long long)arg2 ;
-(id)_sortFlexSegmentsShortestToLongest:(id)arg1 ;
-(id)_shortestSegmentsForType:(unsigned long long)arg1 ;
-(id)_transitionSegmentForSegmentInfo:(id)arg1 toSegmentInfo:(id)arg2 fromBarIndex:(long long)arg3 inSegmentList:(id)arg4 ;
-(id)_shortestSegmentForType:(unsigned long long)arg1 ;
-(id)_longestSegmentForType:(unsigned long long)arg1 ;
-(BOOL)_updateTransitionBodySegmentsForAssemblyList:(id)arg1 usingNewSegment:(id)arg2 indexOfNewTransitionSegment:(id)arg3 ;
-(BOOL)_addOutroSegmentsToAssemblyList:(id)arg1 forDuration:(long long)arg2 allowTrim:(BOOL)arg3 testingContext:(id)arg4 ;
-(BOOL)_addIntroSegmentsToAssemblyList:(id)arg1 forDuration:(long long)arg2 testingContext:(id)arg3 ;
-(BOOL)_addSegment:(id)arg1 withDuration:(long long)arg2 toAssemblyList:(id)arg3 timeRemaining:(long long)arg4 reusedSegment:(id*)arg5 indexofNewSegment:(long long*)arg6 ;
-(void)_sequenceBodySegmentList:(id)arg1 forIndexes:(id)arg2 ;
-(BOOL)_addSegment:(id)arg1 withDuration:(long long)arg2 toAssemblyList:(id)arg3 indexOfNewSegment:(long long*)arg4 ;
-(void)_removeSegmentInfo:(id)arg1 fromAssemblyList:(id)arg2 ;
-(BOOL)_removeUnpermittedTransitionsInAssemblyList:(id)arg1 final:(BOOL)arg2 testingContext:(id)arg3 removedIndexes:(id)arg4 conflictList:(id)arg5 ;
-(BOOL)_removeUnpermittedTransitionsInAssemblyList:(id)arg1 final:(BOOL)arg2 testingContext:(id)arg3 removedIndexes:(id)arg4 ;
-(BOOL)_addBodySegmentsForAssemblyList:(id)arg1 forDuration:(long long)arg2 unusedDuration:(long long*)arg3 testingContext:(id)arg4 timedOut:(BOOL*)arg5 ;
-(long long)_minOutroDuration;
-(long long)_maxOutroDuration;
-(BOOL)_buildIntroAndOutroOnlySegmentAssemblyList:(id)arg1 forDuration:(long long)arg2 testingContext:(id)arg3 ;
-(void)_addPrerenderedFadesToAssemblyList:(id)arg1 ;
-(id)_clipPlaylistForDuration:(SCD_Struct_TV2)arg1 withOptions:(id)arg2 usePreRenderedFades:(BOOL)arg3 testingContext:(id)arg4 ;
-(id)_fullSongLoopedClipPlaylistForDuration:(SCD_Struct_TV2)arg1 withOptions:(id)arg2 usePreRenderedFades:(BOOL)arg3 testingContext:(id)arg4 ;
-(BOOL)_buildSegmentAssemblyList:(id)arg1 forDuration:(long long)arg2 withOptions:(id)arg3 testingContext:(id)arg4 usePreRenderedFades:(BOOL)arg5 ;
-(long long)_samplesForDuration:(SCD_Struct_TV2)arg1 ;
-(BOOL)_validateAuthoringIssuesInRendition:(id)arg1 failureReason:(id*)arg2 ;
-(BOOL)_validateStructureForRendition:(id)arg1 failureReason:(id*)arg2 ;
-(BOOL)_validateTransitionsInRendition:(id)arg1 failureReason:(id*)arg2 ;
-(BOOL)_verifyAssetsForSegment:(id)arg1 withFailureReason:(id*)arg2 ;
-(id)analysisData;
-(id)initWithUID:(id)arg1 songName:(id)arg2 artistName:(id)arg3 tagIDs:(id)arg4 keywords:(id)arg5 hidden:(BOOL)arg6 sampleRate:(long long)arg7 mainSegments:(id)arg8 crossFadeSegments:(id)arg9 assets:(id)arg10 audioFileExtension:(id)arg11 audioEncoderPresetName:(id)arg12 metadataVersion:(long long)arg13 customOptions:(id)arg14 ;
-(id)_longestSegmentsForType:(unsigned long long)arg1 ;
-(id)_transitionSegmentForSegmentInfo:(id)arg1 fromBarIndex:(long long)arg2 inSegmentList:(id)arg3 ;
-(long long)_minBodySegmentDuration;
-(long long)_maxIntroDuration;
-(long long)_minIntroDuration;
-(long long)_actualOutroDurationForAssemblyList:(id)arg1 currentDuration:(long long)arg2 ;
-(long long)_minimumPermittedIntroAndOutroDuration;
-(BOOL)_rebuildBodySegmentsInAssemblyList:(id)arg1 forDuration:(long long)arg2 unusedDuration:(long long*)arg3 testingContext:(id)arg4 ;
-(BOOL)verifyRendition:(id)arg1 forDuration:(SCD_Struct_TV2)arg2 failureReason:(id*)arg3 ;
-(BOOL)verifyAssetsWithFailureReason:(id*)arg1 ;
-(id)description;
-(NSString *)uid;
-(BOOL)hidden;
-(long long)sampleRate;
@end

