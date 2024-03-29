/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CHDrawing : NSObject <NSCopying> {

	CJKChar* _drawing;

}

@property (assign,nonatomic) CJKChar drawing;              //@synthesize drawing=_drawing - In the implementation block
+(id)sortedArrayForPointIndices:(id)arg1 ;
-(unsigned long long)strokeCount;
-(unsigned long long)pointCount;
-(unsigned long long)pointCountForStrokeIndex:(unsigned long long)arg1 ;
-(CGPoint)pointForStrokeIndex:(unsigned long long)arg1 pointIndex:(unsigned long long)arg2 ;
-(Matrix<float>*)bitmapRepresentationForSize:(CGSize)arg1 drawingAlgorithm:(int)arg2 ;
-(id)xyRepresentation;
-(Matrix<float>*)orientationRepresentationForSampling:(unsigned long long)arg1 convolutionWidth:(unsigned long long)arg2 ;
-(NSRange)matchingStrokePrefixRangeForDrawing:(id)arg1 ;
-(void)appendSegment:(id)arg1 fromDrawing:(id)arg2 ;
-(CGRect)strokeBoundsAtIndex:(unsigned long long)arg1 ;
-(BOOL)containsStrokeLessThanSize:(CGSize)arg1 ;
-(vector<unsigned long, std::__1::allocator<unsigned long> >*)strokeIndicesSortedByMinXCoordinate;
-(set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >*)computeDelayedStrokesUsingMinimumDrawingSize:(CGSize)arg1 ;
-(id)findSubStrokeSegmentationPointsExcludingStrokes:(set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >*)arg1 ;
-(id)sortedDrawingUsingMinXCoordinate;
-(CJKChar)drawing;
-(void)setDrawing:(CJKChar)arg1 ;
-(id)findLocalYMaximaWithWindowSize:(unsigned long long)arg1 excludingStrokes:(set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >*)arg2 ;
-(id)initialSegmentationPointIndicesForDrawing;
-(id)filterPointsWithProximity:(double)arg1 fixedPoints:(id)arg2 points:(id)arg3 ;
-(BOOL)isPrefixForDrawing:(id)arg1 ;
-(Matrix<float>*)bitmapRepresentationForSize:(CGSize)arg1 ;
-(id)spatiallyResampledWithDistance:(double)arg1 ;
-(CGRect)boundingBoxForDrawingSegmentFromIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(CGRect)bounds;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clear;
-(id)initWithContentsOfFile:(id)arg1 ;
-(void)addPoint:(CGPoint)arg1 ;
-(void)endStroke;
-(void)setLineHeight:(double)arg1 ;
@end

