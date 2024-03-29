/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class NSMutableArray;

@interface PKRoundedPath : NSObject {

	CGPathRef _CGPath;
	NSMutableArray* _points;

}

@property (nonatomic,retain) NSMutableArray * points;              //@synthesize points=_points - In the implementation block
@property (retain) CGPathRef CGPath;                               //@synthesize CGPath=_CGPath - In the implementation block
+(id)pathWithRect:(CGRect)arg1 ;
+(id)pathWithEllipseInRect:(CGRect)arg1 ;
+(id)pathWithRoundedRect:(CGRect)arg1 cornerRadius:(double)arg2 ;
-(NSMutableArray *)points;
-(void)setPoints:(NSMutableArray *)arg1 ;
-(id)initWithPoints:(CGPoint*)arg1 count:(long long)arg2 ;
-(void)closeSubpath;
-(void)addLineToPointX:(double)arg1 y:(double)arg2 ;
-(id)initWithRect:(CGRect)arg1 withRoundedCorners:(int)arg2 cornerRadii:(id)arg3 smoothPillShapes:(BOOL)arg4 ;
-(void)addContinuousCornerToPath:(CGPathRef)arg1 trueCorner:(CGPoint)arg2 cornerRadius:(CGSize)arg3 corners:(unsigned long long)arg4 portion:(unsigned long long)arg5 clockwise:(BOOL)arg6 fullRadius:(BOOL)arg7 ;
-(void)dealloc;
-(CGPathRef)CGPath;
-(void)setCGPath:(CGPathRef)arg1 ;
-(CGRect)boundingRect;
@end

