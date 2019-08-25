/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <libobjc.A.dylib/ISChangeObserver.h>

@class NSHashTable, ISAnimatedImage, ISAnimatedImageTimer, NSString;

@interface ISAnimatedImagePlayer : NSObject <ISChangeObserver> {

	NSHashTable* _weakDestinations;
	ISAnimatedImage* _image;
	ISAnimatedImageTimer* _timer;
	CGImageRef _currentImage;
	BOOL _hasStartedAnimating;
	BOOL _hasFinishedAnimating;
	double _timeAccumulator;
	double _previousFrameTime;
	BOOL _infiniteLoop;
	unsigned long long _remainingLoopCount;
	BOOL _playing;
	BOOL _allowFrameDrops;
	unsigned long long _displayedFrameIndex;

}

@property (nonatomic,readonly) ISAnimatedImage * animatedImage; 
@property (assign,getter=isPlaying,nonatomic) BOOL playing;                       //@synthesize playing=_playing - In the implementation block
@property (assign,nonatomic) unsigned long long displayedFrameIndex;              //@synthesize displayedFrameIndex=_displayedFrameIndex - In the implementation block
@property (assign,nonatomic) BOOL allowFrameDrops;                                //@synthesize allowFrameDrops=_allowFrameDrops - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ISAnimatedImage *)animatedImage;
-(BOOL)isPlaying;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)initWithAnimatedImage:(id)arg1 ;
-(void)setAllowFrameDrops:(BOOL)arg1 ;
-(void)setPlaying:(BOOL)arg1 ;
-(void)registerDestination:(id)arg1 ;
-(void)unregisterDestination:(id)arg1 ;
-(void)updateAnimation;
-(void)setDisplayedFrameIndex:(unsigned long long)arg1 ;
-(unsigned long long)displayedFrameIndex;
-(void)_seekToBeginning;
-(void)_setCurrentFrame:(CGImageRef)arg1 ;
-(void)_resetAnimationState;
-(void)_notifyDestinationsOfFrameChange;
-(BOOL)_anyDestinationIsReady;
-(BOOL)_shouldAnimate;
-(void)_notifyDestinationsOfAnimationStart;
-(void)_notifyDestinationsOfAnimationEnd;
-(void)animationTimerFired:(double)arg1 ;
-(BOOL)allowFrameDrops;
-(void)dealloc;
-(CGImageRef)currentImage;
@end

