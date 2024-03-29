/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPanGestureRecognizer.h>
#import <UIKitCore/_UIScreenEdgePanRecognizingDelegate.h>

@protocol _UIScreenEdgePanRecognizing;
@class NSString;

@interface UIScreenEdgePanGestureRecognizer : UIPanGestureRecognizer <_UIScreenEdgePanRecognizingDelegate> {

	id<_UIScreenEdgePanRecognizing> _recognizer;
	BOOL _ignoreSubsequentTouches;

}

@property (assign,nonatomic) unsigned long long edges; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldDefaultToTouches;
+(BOOL)_shouldSupportStylusTouches;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(id)_recognizer;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)_setHysteresis:(double)arg1 ;
-(void)setEdges:(unsigned long long)arg1 ;
-(BOOL)_shouldTryToBeginWithEvent:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 type:(long long)arg3 maxTouches:(unsigned long long)arg4 ;
-(unsigned long long)edges;
-(CGPoint)_locationForTouch:(id)arg1 ;
-(long long)_touchInterfaceOrientation;
-(BOOL)_shouldUseGrapeFlags;
-(void)incorporateTouches:(id)arg1 withEvent:(id)arg2 ;
-(id)recognizerTouchesToIgnoreForEvent:(id)arg1 ;
-(BOOL)isRequiringLongPress;
-(BOOL)recognizeImmediatelyFromEdgeLocked;
-(void)setRecognizeImmediatelyFromEdgeLocked:(BOOL)arg1 ;
-(BOOL)recognizeAlongEdge;
-(void)setRecognizeAlongEdge:(BOOL)arg1 ;
-(double)bottomEdgeAngleWindow;
-(void)setBottomEdgeAngleWindow:(double)arg1 ;
-(void)screenEdgePanRecognizingStateDidChange:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 type:(long long)arg3 ;
-(double)_edgeRegionSize;
-(void)_setEdgeRegionSize:(double)arg1 ;
-(unsigned long long)touchedEdges;
-(BOOL)ignoreSubsequentTouches;
@end

