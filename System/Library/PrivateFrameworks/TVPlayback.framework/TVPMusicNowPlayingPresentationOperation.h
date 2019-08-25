/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class UIViewController;

@interface TVPMusicNowPlayingPresentationOperation : NSOperation {

	BOOL _isExecuting;
	BOOL _isFinished;
	BOOL _animated;
	UIViewController* _presentingViewController;
	UIViewController* _presentedViewController;

}

@property (nonatomic,readonly) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,readonly) UIViewController * presentedViewController;               //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (getter=isAnimated,nonatomic,readonly) BOOL animated;                          //@synthesize animated=_animated - In the implementation block
-(id)initWithPresentingViewController:(id)arg1 presentedViewController:(id)arg2 animated:(BOOL)arg3 ;
-(UIViewController *)presentingViewController;
-(UIViewController *)presentedViewController;
-(void)start;
-(BOOL)isAnimated;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)_finish;
@end
