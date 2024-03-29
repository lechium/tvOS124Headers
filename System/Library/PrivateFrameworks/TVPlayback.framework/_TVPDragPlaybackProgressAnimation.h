/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPlaybackProgressAnimation.h>

@protocol TVDragPlaybackProgressAnimationDelegate;
@interface _TVPDragPlaybackProgressAnimation : TVPlaybackProgressAnimation {

	id<TVDragPlaybackProgressAnimationDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TVDragPlaybackProgressAnimationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(double)currentPlaybackTime;
-(void)setDelegate:(id<TVDragPlaybackProgressAnimationDelegate>)arg1 ;
-(id<TVDragPlaybackProgressAnimationDelegate>)delegate;
-(BOOL)isFinished;
@end

