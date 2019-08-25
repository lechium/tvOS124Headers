/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <AVFoundation/AVAsynchronousKeyValueLoading.h>

@class AVAssetTrackInternal, AVAsset;

@interface AVAssetTrack : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {

	AVAssetTrackInternal* _track;

}

@property (nonatomic,__weak,readonly) AVAsset * asset; 
@property (nonatomic,readonly) int trackID; 
+(BOOL)expectsPropertyRevisedNotifications;
+(id)mediaCharacteristicsForMediaTypes;
+(id)keyPathsForValuesAffectingTimeRange;
-(void)finalize;
-(float)preferredVolume;
-(int)naturalTimeScale;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 ;
-(id)_initWithAsset:(id)arg1 trackIndex:(long long)arg2 ;
-(id)_weakReference;
-(long long)statusOfValueForKey:(id)arg1 ;
-(BOOL)hasMediaCharacteristics:(id)arg1 ;
-(OpaqueFigAssetTrackRef)_figAssetTrack;
-(void)_startListeningToFigAssetTrackNotifications;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(void)_stopListeningToFigAssetTrackNotifications;
-(OpaqueFigTrackReaderRef)_figTrackReader;
-(BOOL)isDecodable;
-(int)playabilityValidationResult;
-(BOOL)isSelfContained;
-(long long)totalSampleDataLength;
-(SCD_Struct_AV6)mediaPresentationTimeRange;
-(SCD_Struct_AV6)mediaDecodeTimeRange;
-(BOOL)requiresFrameReordering;
-(float)estimatedDataRate;
-(id)loudnessInfo;
-(id)segmentForTrackTime:(SCD_Struct_AV5)arg1 ;
-(SCD_Struct_AV5)samplePresentationTimeForTrackTime:(SCD_Struct_AV5)arg1 ;
-(long long)alternateGroupID;
-(long long)defaultAlternateGroupID;
-(long long)provisionalAlternateGroupID;
-(BOOL)isExcludedFromAutoselectionInTrackGroup;
-(id)associatedTracksOfType:(id)arg1 ;
-(id)_firstAssociatedTrackWithAssociationType:(id)arg1 ;
-(id)_trackReferences;
-(id)_assetTrackInspector;
-(BOOL)_subtitleFormatDescriptionMatchesTextDisplayFlags:(unsigned)arg1 flagsMask:(unsigned)arg2 ;
-(id)_fallbackTrack;
-(id)_followingTrackAmongTracks:(id)arg1 ;
-(id)_pairedForcedOnlySubtitlesTrack;
-(id)availableTrackAssociationTypes;
-(BOOL)_hasMultipleEdits;
-(BOOL)_hasScaledEdits;
-(BOOL)_hasEmptyEdits;
-(BOOL)_hasMultipleDistinctFormatDescriptions;
-(BOOL)_firstFormatDescriptionIsLPCM;
-(SCD_Struct_AV6)timeRange;
-(id)metadata;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(float)nominalFrameRate;
-(id)commonMetadata;
-(BOOL)isPlayable;
-(id)formatDescriptions;
-(BOOL)hasMediaCharacteristic:(id)arg1 ;
-(int)trackID;
-(BOOL)hasProtectedContent;
-(id)mediaCharacteristics;
-(id)extendedLanguageTag;
-(id)mediaType;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CGSize)naturalSize;
-(CGAffineTransform)preferredTransform;
-(SCD_Struct_AV5)minFrameDuration;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(long long)layer;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)segments;
-(id)languageCode;
-(id)locale;
-(CGSize)dimensions;
-(AVAsset *)asset;
@end

