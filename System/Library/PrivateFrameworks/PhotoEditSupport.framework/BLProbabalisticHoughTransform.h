/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
@interface BLProbabalisticHoughTransform : NSObject {

	int _cols;
	int _rows;
	float _rho;
	float _theta;
	int _threshold;
	int _lineLength;
	int _lineGap;
	int _numGoodLines;

}
-(SCD_Struct_BL4*)houghLinesProbabalistic:(char*)arg1 rows:(int)arg2 cols:(int)arg3 numLines:(int*)arg4 ;
-(void)leastSquareSmooth:(SCD_Struct_BL4*)arg1 ;
@end

