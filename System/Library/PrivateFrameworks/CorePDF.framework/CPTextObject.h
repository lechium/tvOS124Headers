/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPChunk.h>

@interface CPTextObject : CPChunk {

	CGPoint anchor;
	BOOL metricInfoCalculated;
	float maxFontSize;
	double maxFontLineHeight;

}
-(void)translateObjectYBy:(double)arg1 ;
-(void)clearCachedInfo;
-(double)maxFontLineHeight;
-(void)calculateMetrics;
-(float)maxFontSize;
@end

