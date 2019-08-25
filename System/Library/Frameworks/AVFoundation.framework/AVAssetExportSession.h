/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVAssetExportSessionInternal, NSString, AVAsset, NSURL, NSError;

@interface AVAssetExportSession : NSObject {

	AVAssetExportSessionInternal* _exportSession;

}

@property (nonatomic,readonly) NSString * presetName; 
@property (nonatomic,retain,readonly) AVAsset * asset; 
@property (nonatomic,copy) NSString * outputFileType; 
@property (nonatomic,copy) NSURL * outputURL; 
@property (assign,nonatomic) BOOL shouldOptimizeForNetworkUse; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) float progress; 
+(id)allExportPresets;
+(SCD_Struct_AV5)maximumDurationForPreset:(id)arg1 properties:(id)arg2 ;
+(id)keyPathsForValuesAffectingEstimatedOutputFileLength;
+(long long)estimatedOutputFileLengthForPreset:(id)arg1 duration:(SCD_Struct_AV5)arg2 properties:(id)arg3 ;
+(id)exportPresetsCompatibleWithAsset:(id)arg1 ;
+(void)determineCompatibilityOfExportPreset:(id)arg1 withAsset:(id)arg2 outputFileType:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)exportSessionWithAsset:(id)arg1 presetName:(id)arg2 ;
-(SCD_Struct_AV5)maxDuration;
-(NSString *)outputFileType;
-(BOOL)maximizePowerEfficiency;
-(void)setMaximizePowerEfficiency:(BOOL)arg1 ;
-(BOOL)shouldOptimizeForNetworkUse;
-(id)directoryForTemporaryFiles;
-(id)metadataItemFilter;
-(void)AVExportSessionExportAsynchronouslyCompletionHandler;
-(void)setMinVideoFrameDuration:(SCD_Struct_AV5)arg1 ;
-(SCD_Struct_AV5)minVideoFrameDuration;
-(void)setVideoFrameRateConversionAlgorithm:(id)arg1 ;
-(id)videoFrameRateConversionAlgorithm;
-(void)setPreserveSyncFrames:(BOOL)arg1 ;
-(BOOL)preserveSyncFrames;
-(long long)fileLengthLimit;
-(void)setFileLengthLimit:(long long)arg1 ;
-(BOOL)canPerformMultiplePassesOverSourceMediaData;
-(void)setCanPerformMultiplePassesOverSourceMediaData:(BOOL)arg1 ;
-(void)setTimeRange:(SCD_Struct_AV6)arg1 ;
-(SCD_Struct_AV6)timeRange;
-(id)metadata;
-(void)setMetadata:(id)arg1 ;
-(long long)estimatedOutputFileLength;
-(void)setDirectoryForTemporaryFiles:(id)arg1 ;
-(NSString *)presetName;
-(id)supportedFileTypes;
-(void)setOutputFileType:(NSString *)arg1 ;
-(void)setShouldOptimizeForNetworkUse:(BOOL)arg1 ;
-(void)setMetadataItemFilter:(id)arg1 ;
-(void)exportAsynchronouslyWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)audioTimePitchAlgorithm;
-(void)setAudioTimePitchAlgorithm:(id)arg1 ;
-(id)videoComposition;
-(void)setVideoComposition:(id)arg1 ;
-(id)customVideoCompositor;
-(id)audioMix;
-(void)determineCompatibleFileTypesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)cancelExport;
-(void)setAudioMix:(id)arg1 ;
-(id)initWithAsset:(id)arg1 presetName:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(float)progress;
-(long long)status;
-(NSURL *)outputURL;
-(void)setOutputURL:(NSURL *)arg1 ;
-(AVAsset *)asset;
-(NSError *)error;
@end
