/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIAutoScrollBehavior;
#import <UIKitCore/UIKitCore-Structs.h>
@class UIScrollView, CADisplayLink;

@interface _UIAutoScrollAssistant : NSObject {

	BOOL _started;
	UIScrollView* _scrollView;
	double _repeatInterval;
	unsigned long long _allowedDirections;
	CADisplayLink* _displayLink;
	double _lastTimestamp;
	id<_UIAutoScrollBehavior> _behavior;
	CGPoint _point;
	UIEdgeInsets _touchInsets;

}

@property (nonatomic,retain) CADisplayLink * displayLink;                       //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) CGPoint point;                                     //@synthesize point=_point - In the implementation block
@property (assign,nonatomic) double lastTimestamp;                              //@synthesize lastTimestamp=_lastTimestamp - In the implementation block
@property (assign,nonatomic) BOOL started;                                      //@synthesize started=_started - In the implementation block
@property (nonatomic,retain) id<_UIAutoScrollBehavior> behavior;                //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,__weak,readonly) UIScrollView * scrollView;                //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) double repeatInterval;                             //@synthesize repeatInterval=_repeatInterval - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (assign,nonatomic) UIEdgeInsets touchInsets;                          //@synthesize touchInsets=_touchInsets - In the implementation block
@property (assign,nonatomic) unsigned long long allowedDirections;              //@synthesize allowedDirections=_allowedDirections - In the implementation block
-(CGPoint)point;
-(BOOL)isActive;
-(void)stop;
-(UIScrollView *)scrollView;
-(void)autoScrollFromPoint:(CGPoint)arg1 ;
-(id)initWithScrollView:(id)arg1 ;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)displayLink;
-(double)_interval;
-(void)setRepeatInterval:(double)arg1 ;
-(double)repeatInterval;
-(id<_UIAutoScrollBehavior>)behavior;
-(void)setBehavior:(id<_UIAutoScrollBehavior>)arg1 ;
-(void)setPoint:(CGPoint)arg1 ;
-(void)setAllowedDirections:(unsigned long long)arg1 ;
-(void)displayLinkFired:(id)arg1 ;
-(BOOL)started;
-(void)setStarted:(BOOL)arg1 ;
-(void)setLastTimestamp:(double)arg1 ;
-(double)lastTimestamp;
-(void)_handleAutoScrollerWithContentOffset:(CGPoint)arg1 direction:(unsigned long long)arg2 ;
-(UIEdgeInsets)touchInsets;
-(void)setTouchInsets:(UIEdgeInsets)arg1 ;
-(unsigned long long)allowedDirections;
@end

