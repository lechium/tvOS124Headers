/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVWeakObservable.h>
#import <AVFoundation/AVKeyPathDependencyHost.h>

@class AVAssetWriterInputInternal, AVAssetWriterInputHelper, NSDictionary, AVOutputSettings, AVWeakReference, NSString, NSArray;

@interface AVAssetWriterInput : NSObject <AVWeakObservable, AVKeyPathDependencyHost> {

	AVAssetWriterInputInternal* _internal;

}

@property (readonly) long long numberOfAppendFailures; 
@property (setter=_setHelper:,getter=_helper,nonatomic,retain) AVAssetWriterInputHelper * helper; 
@property (setter=_setSourcePixelBufferAttributes:,getter=_sourcePixelBufferAttributes,nonatomic,copy) NSDictionary * sourcePixelBufferAttributes; 
@property (getter=_pixelBufferPool,nonatomic,readonly) CVPixelBufferPoolRef pixelBufferPool; 
@property (getter=_outputSettingsObject,nonatomic,readonly) AVOutputSettings * outputSettingsObject; 
@property (getter=_status,nonatomic,readonly) long long status; 
@property (getter=_isAttachedToAdaptor,nonatomic,readonly) BOOL attachedToAdaptor; 
@property (setter=_setWeakReferenceToAssetWriter:,getter=_weakReferenceToAssetWriter,nonatomic,retain) AVWeakReference * weakReferenceToAssetWriter; 
@property (assign,setter=_setAlternateGroupID:,getter=_alternateGroupID,nonatomic) short alternateGroupID; 
@property (assign,setter=_setProvisionalAlternateGroupID:,getter=_provisionalAlternateGroupID,nonatomic) short provisionalAlternateGroupID; 
@property (getter=_trackReferences,nonatomic,readonly) NSDictionary * trackReferences; 
@property (nonatomic,readonly) NSString * mediaType; 
@property (nonatomic,readonly) NSDictionary * outputSettings; 
@property (nonatomic,readonly) const opaqueCMFormatDescriptionRef sourceFormatHint; 
@property (nonatomic,copy) NSArray * metadata; 
@property (getter=isReadyForMoreMediaData,nonatomic,readonly) BOOL readyForMoreMediaData; 
@property (assign,nonatomic) BOOL expectsMediaDataInRealTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)assetWriterInputWithMediaType:(id)arg1 outputSettings:(id)arg2 ;
+(id)assetWriterInputWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(opaqueCMFormatDescriptionRef)arg3 ;
+(void)initialize;
-(BOOL)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)finalize;
-(void)declareKeyPathDependenciesWithRegistry:(id)arg1 ;
-(void)addCallbackToCancelDuringDeallocation:(id)arg1 ;
-(void)setExtendedLanguageTag:(id)arg1 ;
-(float)preferredVolume;
-(BOOL)_isAttachedToAdaptor;
-(long long)_status;
-(void)_setAttachedAdaptor:(id)arg1 ;
-(id)_trackReferences;
-(id)availableTrackAssociationTypes;
-(void)setPreferredVolume:(float)arg1 ;
-(BOOL)maximizePowerEfficiency;
-(void)setMaximizePowerEfficiency:(BOOL)arg1 ;
-(id)_attachedAdaptor;
-(id)_outputSettingsObject;
-(const opaqueCMFormatDescriptionRef)sourceFormatHint;
-(void)_setWeakReferenceToAssetWriter:(id)arg1 ;
-(void)setMarksOutputTrackAsEnabled:(BOOL)arg1 ;
-(void)_setAlternateGroupID:(short)arg1 ;
-(void)_setProvisionalAlternateGroupID:(short)arg1 ;
-(short)_alternateGroupID;
-(BOOL)expectsMediaDataInRealTime;
-(BOOL)_prepareForWritingWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 mediaFileType:(id)arg2 error:(id*)arg3 ;
-(int)outputTrackID;
-(void)_didStartInitialSession;
-(void)_prepareToEndSession;
-(BOOL)_prepareToFinishWritingReturningError:(id*)arg1 ;
-(void)_transitionToTerminalStatus:(long long)arg1 ;
-(id)_weakReferenceToAssetWriter;
-(BOOL)marksOutputTrackAsEnabled;
-(int)mediaTimeScale;
-(void)setMediaTimeScale:(int)arg1 ;
-(BOOL)performsMultiPassEncodingIfSupported;
-(SCD_Struct_AV5)preferredMediaChunkDuration;
-(void)setPreferredMediaChunkDuration:(SCD_Struct_AV5)arg1 ;
-(long long)preferredMediaChunkAlignment;
-(void)setPreferredMediaChunkAlignment:(long long)arg1 ;
-(long long)preferredMediaChunkSize;
-(void)setPreferredMediaChunkSize:(long long)arg1 ;
-(id)mediaDataLocation;
-(void)setMediaDataLocation:(id)arg1 ;
-(id)sampleReferenceBaseURL;
-(void)setSampleReferenceBaseURL:(id)arg1 ;
-(id)_sourcePixelBufferAttributes;
-(short)_provisionalAlternateGroupID;
-(long long)numberOfAppendFailures;
-(void)_setHelper:(id)arg1 ;
-(long long)_appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 error:(id*)arg2 ;
-(void)_tellAssetWriterToTransitionToFailedStatusWithError:(id)arg1 ;
-(BOOL)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 ;
-(void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 ;
-(id)associatedInputsWithTrackAssociationType:(id)arg1 ;
-(BOOL)writesMediaDataToBeginningOfFile;
-(void)setWritesMediaDataToBeginningOfFile:(BOOL)arg1 ;
-(CVPixelBufferPoolRef)_pixelBufferPool;
-(void)_setSourcePixelBufferAttributes:(id)arg1 ;
-(BOOL)_appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_AV5)arg2 ;
-(NSArray *)metadata;
-(void)setMetadata:(NSArray *)arg1 ;
-(id)extendedLanguageTag;
-(NSString *)mediaType;
-(id)_helper;
-(CGSize)naturalSize;
-(id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 ;
-(void)setExpectsMediaDataInRealTime:(BOOL)arg1 ;
-(id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(opaqueCMFormatDescriptionRef)arg3 ;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)isReadyForMoreMediaData;
-(void)markAsFinished;
-(void)setNaturalSize:(CGSize)arg1 ;
-(void)setPerformsMultiPassEncodingIfSupported:(BOOL)arg1 ;
-(BOOL)canPerformMultiplePasses;
-(id)currentPassDescription;
-(void)markCurrentPassAsFinished;
-(void)respondToEachPassDescriptionOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(long long)layer;
-(NSString *)description;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transform;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSDictionary *)outputSettings;
-(void)setLayer:(long long)arg1 ;
-(id)languageCode;
-(void)setLanguageCode:(id)arg1 ;
@end

