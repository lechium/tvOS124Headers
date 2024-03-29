/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:31 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class AVAsset, AVAudioMix, AVVideoComposition, NSArray, NSObject, AVAssetExportSession, NSError, NSURL, NSString, PFAssetAdjustments;

@interface PFVideoSharingOperation : NSOperation {

	AVAsset* _videoAsset;
	AVAudioMix* _audioMix;
	AVVideoComposition* _videoComposition;
	NSArray* _videoMetadata;
	NSObject*<OS_dispatch_queue> _externalIsolation;
	AVAssetExportSession* _exportSession;
	BOOL _beganExport;
	BOOL _operationSuccess;
	NSError* _operationError;
	BOOL _shouldStripMetadata;
	BOOL _shouldStripLocation;
	NSURL* _outputDirectoryURL;
	NSString* _outputFilename;
	NSString* _customAccessibilityLabel;
	NSString* _exportPreset;
	NSURL* _videoURL;
	PFAssetAdjustments* __adjustments;

}

@property (setter=_setVideoURL:,nonatomic,copy) NSURL * videoURL;                                    //@synthesize videoURL=_videoURL - In the implementation block
@property (setter=_setAdjustments:,nonatomic,retain) PFAssetAdjustments * _adjustments;              //@synthesize _adjustments=__adjustments - In the implementation block
@property (assign,setter=_setSuccess:,nonatomic) BOOL success; 
@property (setter=_setOperationError:,nonatomic,retain) NSError * operationError; 
@property (nonatomic,copy) NSURL * outputDirectoryURL;                                               //@synthesize outputDirectoryURL=_outputDirectoryURL - In the implementation block
@property (nonatomic,copy) NSString * outputFilename;                                                //@synthesize outputFilename=_outputFilename - In the implementation block
@property (assign,nonatomic) BOOL shouldStripMetadata;                                               //@synthesize shouldStripMetadata=_shouldStripMetadata - In the implementation block
@property (assign,nonatomic) BOOL shouldStripLocation;                                               //@synthesize shouldStripLocation=_shouldStripLocation - In the implementation block
@property (nonatomic,copy) NSString * customAccessibilityLabel;                                      //@synthesize customAccessibilityLabel=_customAccessibilityLabel - In the implementation block
@property (nonatomic,copy) NSString * exportPreset;                                                  //@synthesize exportPreset=_exportPreset - In the implementation block
@property (nonatomic,readonly) float progress; 
-(NSString *)outputFilename;
-(void)_setAdjustments:(id)arg1 ;
-(NSURL *)outputDirectoryURL;
-(void)setShouldStripLocation:(BOOL)arg1 ;
-(BOOL)shouldStripLocation;
-(BOOL)shouldStripMetadata;
-(void)setShouldStripMetadata:(BOOL)arg1 ;
-(PFAssetAdjustments *)_adjustments;
-(BOOL)_ensureVideoProperties;
-(void)_validateMetadata;
-(BOOL)_runExport;
-(void)_setSuccess:(BOOL)arg1 ;
-(void)_setOperationError:(id)arg1 ;
-(id)initWithVideoURL:(id)arg1 adjustmentData:(id)arg2 ;
-(void)setOutputFilename:(NSString *)arg1 ;
-(void)setOutputDirectoryURL:(NSURL *)arg1 ;
-(void)setExportPreset:(NSString *)arg1 ;
-(NSError *)operationError;
-(NSString *)exportPreset;
-(NSString *)customAccessibilityLabel;
-(void)setCustomAccessibilityLabel:(NSString *)arg1 ;
-(BOOL)success;
-(NSURL *)videoURL;
-(void)cancel;
-(float)progress;
-(void)_setVideoURL:(id)arg1 ;
-(void)main;
@end

