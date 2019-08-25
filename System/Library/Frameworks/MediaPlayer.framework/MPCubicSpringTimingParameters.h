/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UISpringTimingParameters.h>

@class UICubicTimingParameters;

@interface MPCubicSpringTimingParameters : UISpringTimingParameters {

	UICubicTimingParameters* _springCubicTimingParameters;

}

@property (nonatomic,copy) UICubicTimingParameters * springCubicTimingParameters;              //@synthesize springCubicTimingParameters=_springCubicTimingParameters - In the implementation block
+(id)standardTimingParameters;
-(void)setSpringCubicTimingParameters:(UICubicTimingParameters *)arg1 ;
-(UICubicTimingParameters *)springCubicTimingParameters;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)cubicTimingParameters;
@end
