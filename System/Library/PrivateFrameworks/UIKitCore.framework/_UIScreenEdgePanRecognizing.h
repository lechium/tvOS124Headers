/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class _UIScreenEdgePanRecognizerSettings;


@protocol _UIScreenEdgePanRecognizing <NSObject>
@property (assign,nonatomic,__weak) id<_UIScreenEdgePanRecognizingDelegate> delegate; 
@property (nonatomic,readonly) long long state; 
@property (assign,nonatomic) BOOL recognizeImmediatelyFromEdgeLocked; 
@property (assign,nonatomic) BOOL recognizeAlongEdge; 
@property (assign,nonatomic) BOOL shouldUseGrapeFlags; 
@property (assign,nonatomic) CGRect screenBounds; 
@property (assign,nonatomic) unsigned long long targetEdges; 
@property (nonatomic,readonly) _UIScreenEdgePanRecognizerSettings * settings; 
@required
-(void)setDelegate:(id)arg1;
-(long long)state;
-(id<_UIScreenEdgePanRecognizingDelegate>)delegate;
-(void)reset;
-(id)initWithType:(long long)arg1;
-(_UIScreenEdgePanRecognizerSettings *)settings;
-(void)setTargetEdges:(unsigned long long)arg1;
-(unsigned long long)targetEdges;
-(void)incorporateTouchSampleAtLocation:(CGPoint)arg1 timestamp:(double)arg2 modifier:(long long)arg3 region:(unsigned long long)arg4 interfaceOrientation:(long long)arg5 forceState:(long long)arg6 forTouchIdentifier:(unsigned)arg7;
-(void)giveTouchIdentifiersToIgnore:(/*^block*/id)arg1;
-(unsigned long long)maxInitialTouches;
-(void)setScreenBounds:(CGRect)arg1;
-(void)setShouldUseGrapeFlags:(BOOL)arg1;
-(BOOL)isRequiringLongPress;
-(BOOL)recognizeImmediatelyFromEdgeLocked;
-(void)setRecognizeImmediatelyFromEdgeLocked:(BOOL)arg1;
-(BOOL)recognizeAlongEdge;
-(void)setRecognizeAlongEdge:(BOOL)arg1;
-(unsigned long long)touchedEdgesForInterfaceOrientation:(long long)arg1;
-(CGRect)screenBounds;
-(BOOL)shouldUseGrapeFlags;

@end

