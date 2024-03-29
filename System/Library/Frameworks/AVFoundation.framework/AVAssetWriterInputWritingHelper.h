/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetWriterInputHelper.h>
#import <AVFoundation/AVAssetWriterInputMediaDataRequesterDelegate.h>
#import <AVFoundation/AVWeakObservable.h>
#import <AVFoundation/AVKeyPathDependencyHost.h>

@class AVFigAssetWriterTrack, AVAssetWriterInputMediaDataRequester, AVAssetWriterInputPassDescription, AVKeyPathDependencyManager, NSString;

@interface AVAssetWriterInputWritingHelper : AVAssetWriterInputHelper <AVAssetWriterInputMediaDataRequesterDelegate, AVWeakObservable, AVKeyPathDependencyHost> {

	AVFigAssetWriterTrack* _assetWriterTrack;
	AVAssetWriterInputMediaDataRequester* _mediaDataRequester;
	BOOL _observingSelf;
	CVPixelBufferPoolRef _pixelBufferPool;
	AVAssetWriterInputPassDescription* _currentPassDescription;
	AVKeyPathDependencyManager* _keyPathDependencyManager;

}

@property (getter=_assetWriterTrack,nonatomic,readonly) AVFigAssetWriterTrack * assetWriterTrack;              //@synthesize assetWriterTrack=_assetWriterTrack - In the implementation block
@property (nonatomic,retain) AVAssetWriterInputPassDescription * currentPassDescription;                       //@synthesize currentPassDescription=_currentPassDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finalize;
-(void)declareKeyPathDependenciesWithRegistry:(id)arg1 ;
-(void)addCallbackToCancelDuringDeallocation:(id)arg1 ;
-(id)initWithConfigurationState:(id)arg1 ;
-(CVPixelBufferPoolRef)pixelBufferPool;
-(id)initWithConfigurationState:(id)arg1 assetWriterTrack:(id)arg2 error:(id*)arg3 ;
-(void)didStartInitialSession;
-(void)prepareToEndSession;
-(BOOL)prepareToFinishWritingReturningError:(id*)arg1 ;
-(id)transitionToAndReturnTerminalHelperWithTerminalStatus:(long long)arg1 ;
-(long long)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 error:(id*)arg2 ;
-(BOOL)appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_AV5)arg2 ;
-(id)_assetWriterTrack;
-(void)_attachToMediaDataRequester:(id)arg1 ;
-(void)_nudgeMediaDataRequesterIfAppropriate;
-(void)beginPassIfAppropriate;
-(void)_detachFromMediaDataRequester:(id)arg1 ;
-(void)markAsFinishedAndTransitionCurrentHelper:(id)arg1 ;
-(BOOL)mediaDataRequesterShouldRequestMediaData:(id)arg1 ;
-(void)setCurrentPassDescription:(AVAssetWriterInputPassDescription *)arg1 ;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)isReadyForMoreMediaData;
-(void)markAsFinished;
-(BOOL)canPerformMultiplePasses;
-(AVAssetWriterInputPassDescription *)currentPassDescription;
-(void)markCurrentPassAsFinished;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(long long)status;
@end

