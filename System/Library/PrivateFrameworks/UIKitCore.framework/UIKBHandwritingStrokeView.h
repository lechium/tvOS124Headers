/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIKBHandwritingView;

@interface UIKBHandwritingStrokeView : UIView {

	UIKBHandwritingView* _keyView;
	CGContextRef _bitmapContext;
	double _scaleFactor;
	CGRect _aggregateInvalidRect;

}

@property (nonatomic,readonly) CGContextRef bitmapContext;                      //@synthesize bitmapContext=_bitmapContext - In the implementation block
@property (nonatomic,readonly) double scaleFactor;                              //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (nonatomic,readonly) CGRect aggregateInvalidRect;                     //@synthesize aggregateInvalidRect=_aggregateInvalidRect - In the implementation block
@property (assign,nonatomic,__weak) UIKBHandwritingView * keyView;              //@synthesize keyView=_keyView - In the implementation block
-(void)dealloc;
-(double)scaleFactor;
-(void)drawRect:(CGRect)arg1 ;
-(void)updateInkColor;
-(UIKBHandwritingView *)keyView;
-(void)createBitmapIfNeeded;
-(CGRect)handwritingPointToRect:(SCD_Struct_UI65)arg1 ;
-(CGRect)convertRectToBitmapCoordinates:(CGRect)arg1 ;
-(CGRect)convertRectToViewCoordinates:(CGRect)arg1 ;
-(void)redrawStrokesInRect:(CGRect)arg1 ;
-(void)displayAggregateInvalidRect;
-(void)addTrapezoidFromFirstPoint:(SCD_Struct_UI65)arg1 secondPoint:(SCD_Struct_UI65)arg2 ;
-(void)addHandwritingPoint:(SCD_Struct_UI65)arg1 ;
-(BOOL)_wantsDeepDrawing;
-(void)clearRect:(CGRect)arg1 ;
-(void)setKeyView:(UIKBHandwritingView *)arg1 ;
-(CGContextRef)bitmapContext;
-(CGRect)aggregateInvalidRect;
@end

