/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface UIBezierPath : NSObject <NSCopying, NSSecureCoding> {

	CGPathRef _path;
	double* _lineDashPattern;
	unsigned long long _lineDashPatternCount;
	double _lineWidth;
	double _miterLimit;
	double _flatness;
	double _lineDashPhase;
	int _lineCapStyle;
	int _lineJoinStyle;
	BOOL _usesEvenOddFillRule;
	CGPathRef _immutablePath;
	BOOL _immutablePathIsValid;

}

@property (assign,nonatomic) const CGPathRef CGPath; 
@property (getter=isEmpty,readonly) BOOL empty; 
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) CGPoint currentPoint; 
@property (assign,nonatomic) double lineWidth;                      //@synthesize lineWidth=_lineWidth - In the implementation block
@property (assign,nonatomic) int lineCapStyle;                      //@synthesize lineCapStyle=_lineCapStyle - In the implementation block
@property (assign,nonatomic) int lineJoinStyle;                     //@synthesize lineJoinStyle=_lineJoinStyle - In the implementation block
@property (assign,nonatomic) double miterLimit;                     //@synthesize miterLimit=_miterLimit - In the implementation block
@property (assign,nonatomic) double flatness;                       //@synthesize flatness=_flatness - In the implementation block
@property (assign,nonatomic) BOOL usesEvenOddFillRule;              //@synthesize usesEvenOddFillRule=_usesEvenOddFillRule - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)bezierPathWithRoundedRect:(CGRect)arg1 cornerRadius:(double)arg2 ;
+(id)bezierPathWithRect:(CGRect)arg1 ;
+(id)roundedRectBezierPath:(CGRect)arg1 withRoundedCorners:(int)arg2 withCornerRadius:(double)arg3 ;
+(id)bezierPathWithOvalInRect:(CGRect)arg1 ;
+(id)_bezierPathWithPillRect:(CGRect)arg1 cornerRadius:(double)arg2 ;
+(id)bezierPathWithRoundedRect:(CGRect)arg1 byRoundingCorners:(unsigned long long)arg2 cornerRadii:(CGSize)arg3 ;
+(id)bezierPath;
+(id)bezierPathWithCGPath:(CGPathRef)arg1 ;
+(id)roundedRectBezierPath:(CGRect)arg1 withRoundedCorners:(int)arg2 withCornerRadii:(id)arg3 ;
+(id)_bezierPathWithRoundedRect:(CGRect)arg1 byRoundingCorners:(unsigned long long)arg2 cornerRadius:(double)arg3 ;
+(id)_roundedRectBezierPath:(CGRect)arg1 withRoundedCorners:(int)arg2 cornerRadius:(double)arg3 segments:(int)arg4 legacyCorners:(BOOL)arg5 ;
+(id)_continuousRoundedRectBezierPath:(CGRect)arg1 withRoundedCorners:(int)arg2 cornerRadius:(CGSize)arg3 segments:(int)arg4 ;
+(id)_continuousRoundedRectBezierPath:(CGRect)arg1 withRoundedCorners:(int)arg2 cornerRadii:(id)arg3 segments:(int)arg4 smoothPillShapes:(BOOL)arg5 ;
+(id)_bezierPathWithArcRoundedRect:(CGRect)arg1 cornerRadius:(double)arg2 ;
+(id)bezierPathWithArcCenter:(CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(BOOL)arg5 ;
+(id)roundedRectBezierPath:(CGRect)arg1 withTopCornerRadius:(double)arg2 withBottomCornerRadius:(double)arg3 ;
+(id)roundedRectBezierPath:(CGRect)arg1 withRoundedEdges:(unsigned long long)arg2 ;
+(id)_roundedRectBezierPath:(CGRect)arg1 withRoundedCorners:(int)arg2 cornerRadius:(double)arg3 segments:(int)arg4 ;
+(id)shadowBezierPath:(CGRect)arg1 withRoundedEdges:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)bounds;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const CGPathRef)CGPath;
-(void)appendPath:(id)arg1 ;
-(void)fill;
-(BOOL)isEmpty;
-(void)stroke;
-(void)clip;
-(void)setLineWidth:(double)arg1 ;
-(void)moveToPoint:(CGPoint)arg1 ;
-(void)addLineToPoint:(CGPoint)arg1 ;
-(void)_addRoundedCornerWithTrueCorner:(CGPoint)arg1 radius:(CGSize)arg2 corner:(unsigned long long)arg3 clockwise:(BOOL)arg4 ;
-(void)closePath;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(void)setLineDash:(const double*)arg1 count:(long long)arg2 phase:(double)arg3 ;
-(void)addArcWithCenter:(CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(BOOL)arg5 ;
-(void)appendBezierPathWithRect:(CGRect)arg1 ;
-(void)appendBezierPath:(id)arg1 ;
-(void)lineToPoint:(CGPoint)arg1 ;
-(CGPathRef)_pathRef;
-(CGPathRef)_createMutablePathByDecodingData:(id)arg1 ;
-(id)_initWithCGMutablePath:(CGPathRef)arg1 ;
-(CGPathRef)_mutablePath;
-(void)addQuadCurveToPoint:(CGPoint)arg1 controlPoint:(CGPoint)arg2 ;
-(void)addCurveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3 ;
-(void)addClip;
-(void)applyTransform:(CGAffineTransform)arg1 ;
-(void)removeAllPoints;
-(id)bezierPathByReversingPath;
-(void)setCGPath:(const CGPathRef)arg1 ;
-(CGPoint)currentPoint;
-(void)getLineDash:(double*)arg1 count:(long long*)arg2 phase:(double*)arg3 ;
-(void)fillWithBlendMode:(int)arg1 alpha:(double)arg2 ;
-(void)strokeWithBlendMode:(int)arg1 alpha:(double)arg2 ;
-(void)appendBezierPathWithOvalInRect:(CGRect)arg1 ;
-(void)appendBezierPathWithOvalInRect:(CGRect)arg1 transform:(CGAffineTransform)arg2 ;
-(void)appendBezierPathWithArcWithCenter:(CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(BOOL)arg5 ;
-(double)lineWidth;
-(int)lineCapStyle;
-(void)setLineCapStyle:(int)arg1 ;
-(int)lineJoinStyle;
-(void)setLineJoinStyle:(int)arg1 ;
-(double)miterLimit;
-(void)setMiterLimit:(double)arg1 ;
-(double)flatness;
-(void)setFlatness:(double)arg1 ;
-(BOOL)usesEvenOddFillRule;
-(void)setUsesEvenOddFillRule:(BOOL)arg1 ;
@end

