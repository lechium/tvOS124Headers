/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SpeedRanges, VideoMovie;


@protocol MiroClip_Shim <NSObject>
@property (assign,nonatomic) float speed; 
@property (nonatomic,readonly) SpeedRanges * speedRanges; 
@property (nonatomic,readonly) float frameRate; 
@property (nonatomic,readonly) VideoMovie * videoMovie; 
@required
-(float)frameRate;
-(SpeedRanges *)speedRanges;
-(VideoMovie *)videoMovie;
-(id)copy;
-(void)setSpeed:(float)arg1;
-(float)speed;

@end
