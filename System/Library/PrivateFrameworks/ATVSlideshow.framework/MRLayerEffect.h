/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MRLayer.h>

@class MREffect, NSMutableDictionary, NSArray, MRSlideProvider, MRImage, NSString, MCContainerEffect, NSDictionary;

@interface MRLayerEffect : MRLayer {

	MREffect* mEffect;
	NSMutableDictionary* mSlideProvidersForElementIDs;
	NSArray* mSlideProviders;
	NSMutableDictionary* mSlideShowTimeScripts;
	NSMutableDictionary* mTextsForElementIDs;
	MRSlideProvider* mMultiImageModelInput;
	unsigned mIndexOfFirstMultiImageInput;
	NSRange mMultiImageSlideRange;
	BOOL mNeedsToUpdateEffect;
	BOOL mNeedsToUpdateTiming;
	BOOL mNeedsToUpdateSlides;
	BOOL mNeedsToUpdateTexts;
	BOOL mNeedsToUpdateEffectAttributes;
	BOOL mNeedsToUpdateEffectLiveAttributes;
	BOOL mSlidesAreReadonly;
	BOOL mHasRequestedMoreSlides;
	MRImage* mAccumulatedImage;
	NSString* mTargetedElement;
	NSString* mEditedElement;
	MCContainerEffect* mContainer;

}

@property (setter=suspendAsynchronousOperations:) BOOL asynchronousOperationsAreSuspended; 
@property (readonly) NSDictionary * slideProvidersForElementIDs; 
@property (readonly) NSDictionary * textsForElementIDs; 
@property (nonatomic,copy) NSString * targetedElement; 
@property (nonatomic,copy) NSString * editedElement; 
@property (readonly) MCContainerEffect * container; 
@property (nonatomic,retain) MRImage * accumulatedImage; 
-(void)unload;
-(BOOL)hasAudio;
-(id)_effectAttributes;
-(void)setPixelSize:(CGSize)arg1 ;
-(BOOL)isLoadedForTime:(double)arg1 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)isAlphaFriendly;
-(void)setAccumulatedImage:(MRImage *)arg1 ;
-(void)beginMorphingToAspectRatio:(double)arg1 withDuration:(double)arg2 ;
-(void)endMorphing;
-(CGSize)_maxSizeForTextElement:(id)arg1 ;
-(long long)_maxLinesForTextElement:(id)arg1 ;
-(MRImage *)accumulatedImage;
-(BOOL)supportsDynamicExpansion;
-(NSDictionary *)slideProvidersForElementIDs;
-(BOOL)asynchronousOperationsAreSuspended;
-(void)_stallRenderer;
-(void)suspendAsynchronousOperations:(BOOL)arg1 ;
-(NSDictionary *)textsForElementIDs;
-(CGSize)_rendererSize;
-(NSString *)editedElement;
-(BOOL)_hideTextWhileEditing;
-(void)_unobservePlug;
-(id)initWithPlug:(id)arg1 andParameters:(id)arg2 inSuperlayer:(id)arg3 ;
-(void)_observePlugOnPreactivate;
-(void)resumeOrPause:(BOOL)arg1 ;
-(void)_unobservePlugOnDepreactivate;
-(BOOL)_isNative3D;
-(BOOL)_setStateValue:(id)arg1 forKey:(id)arg2 ;
-(void)synchronizeTime;
-(void)_renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)hasSomethingToRender;
-(id)_retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)actionHitAtPoint:(CGPoint)arg1 layer:(id*)arg2 ;
-(id)_dumpLayerWithOptions:(unsigned long long)arg1 ;
-(void)_observePlug;
-(void)_cleanupProviders;
-(void)_rebuildEffect;
-(void)_updateSlides;
-(void)_updateTexts;
-(void)_updateEffectAttributes;
-(void)_updateTiming;
-(id)elementHitAtPoint:(CGPoint)arg1 localPoint:(CGPoint*)arg2 ;
-(void)setTargetedElement:(NSString *)arg1 ;
-(void)setEditedElement:(NSString *)arg1 ;
-(id)elementHitAtPoint:(CGPoint)arg1 localPoint:(CGPoint*)arg2 localTime:(double*)arg3 ;
-(BOOL)getVerticesCoordinates:(CGPoint*)arg1 forElement:(id)arg2 ;
-(void)_requestRendering;
-(void)_effectTriggeredStop;
-(void)_addAudioPlayer:(id)arg1 ;
-(void)_removeAudioPlayer:(id)arg1 ;
-(NSString *)targetedElement;
-(double)pzrStart:(id)arg1 ;
-(double)pzrUpdate:(id)arg1 ;
-(double)pzrEnd:(id)arg1 ;
-(double)pzrCancel:(id)arg1 ;
-(MCContainerEffect *)container;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isOpaque;
-(void)cleanup;
@end

