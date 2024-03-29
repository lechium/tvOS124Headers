/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSMatrix/MPSMatrix-Structs.h>
#import <MPSMatrix/MPSMatrixUnaryKernel.h>

@class MPSMatrixMultiplication, MPSMatrixSolveTriangular;

@interface MPSMatrixDecompositionLU : MPSMatrixUnaryKernel {

	MPSMatrixMultiplication* _gemmKernel;
	MPSMatrixSolveTriangular* _trsmKernel;
	unsigned long long _rows;
	unsigned long long _columns;

}

@property (nonatomic,readonly) unsigned long long rows;                 //@synthesize rows=_rows - In the implementation block
@property (nonatomic,readonly) unsigned long long columns;              //@synthesize columns=_columns - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(id)initWithDevice:(id)arg1 rows:(unsigned long long)arg2 columns:(unsigned long long)arg3 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceMatrix:(id)arg2 resultMatrix:(id)arg3 pivotIndices:(id)arg4 status:(id)arg5 ;
-(unsigned long long)columns;
-(void)dealloc;
-(unsigned long long)rows;
@end

