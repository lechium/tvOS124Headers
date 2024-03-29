/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/CPDisposable.h>

@class CPZone, CPCluster, NSMutableArray;

@interface CPGuideFinder : NSObject <CPDisposable> {

	CPZone* contentZone;
	unsigned countOfWordsInZone;
	double* anchorArray;
	double* rightHandSideArray;
	SCD_Struct_CP32* crossingWordArray;
	CPCluster* anchors;
	CPCluster* rightHandSides;
	double medianFontSizeOfFirstCharacter;
	double medianFontSizeOfLastCharacter;
	NSMutableArray* gutters;
	NSMutableArray* leftGuides;
	NSMutableArray* rightGuides;

}
+(BOOL)gutterSeparates:(id)arg1 from:(id)arg2 ;
+(void)reclusterPreservingAlignment:(id)arg1 ;
+(void)reclusterBetweenGuides:(id)arg1 ;
+(BOOL)guideSeparates:(id)arg1 from:(id)arg2 ;
-(void)finalize;
-(id)leftGuides;
-(id)rightGuides;
-(id)gutters;
-(id)initWithContentZone:(id)arg1 ;
-(void)findGutters;
-(void)findGuides;
-(void)markTextLines;
-(void)splitTextLines;
-(BOOL)addStripTo:(id)arg1 bottom:(double)arg2 left:(double)arg3 top:(double)arg4 right:(double)arg5 ;
-(void)setAlignForWordWithExtent:(SCD_Struct_CP32*)arg1 stripArray:(id)arg2 stripMax:(double)arg3 ;
-(void)subdivideStripInto:(id)arg1 from:(double)arg2 to:(double)arg3 borderedBy:(SCD_Struct_CP32*)arg4 ofCount:(unsigned)arg5 crossedBy:(SCD_Struct_CP32*)arg6 ofCount:(unsigned)arg7 ;
-(void)getWordEdges;
-(void)findWordEdgeClusters;
-(void)subdivideGutterFrom:(unsigned)arg1 to:(unsigned)arg2 ;
-(void)subdivideLeftGuideAt:(unsigned)arg1 ;
-(void)subdivideRightGuideAt:(unsigned)arg1 ;
-(BOOL)hasGutters;
-(BOOL)hasLeftGuides;
-(BOOL)hasRightGuides;
-(void)func:(id)arg1 and:(id)arg2 and:(unsigned)arg3 and:(unsigned)arg4 ;
-(void)splitTextLinesAtBorderWords;
-(void)splitTextLinesBetweenBorderWords;
-(double)medianFontSizeOfFirstCharacter;
-(double)medianFontSizeOfLastCharacter;
-(void)dispose;
-(void)dealloc;
@end

