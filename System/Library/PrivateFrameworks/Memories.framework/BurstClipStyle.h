/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BurstClip;

@interface BurstClipStyle : NSObject {

	BurstClip* _burstClip;

}

@property (assign,nonatomic,__weak) BurstClip * burstClip;               //@synthesize burstClip=_burstClip - In the implementation block
@property (nonatomic,readonly) double minimumPhotoDuration; 
@property (nonatomic,readonly) double idealPhotoDuration; 
@property (nonatomic,readonly) double maximumPhotoDuration; 
@property (nonatomic,readonly) double minimumVideoDuration; 
@property (nonatomic,readonly) double idealVideoDuration; 
-(BOOL)isSupported;
-(int)projectFrameRate;
-(double)idealDuration;
-(double)minimumDuration;
-(BurstClip *)burstClip;
-(void)turnOffKenBurnsForClips:(id)arg1 ;
-(id)containedClipsWithoutTransitions;
-(id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2 ;
-(double)minimumPhotoDuration;
-(double)idealPhotoDuration;
-(double)maximumPhotoDuration;
-(void)adjustDurationsOfClips:(id)arg1 withInTransition:(id)arg2 outTransition:(id)arg3 ;
-(id)sourceClips;
-(double)minimumVideoDuration;
-(double)idealVideoDuration;
-(double)projectAspectRatio;
-(void)setBurstClip:(BurstClip *)arg1 ;
-(int)duration;
-(double)maximumDuration;
@end

