/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSMatrix/MPSMatrix-Structs.h>
#import <MPSMatrix/MPSMatrixUnaryKernel.h>

@interface MPSMatrixFindTopK : MPSMatrixUnaryKernel {

	unsigned long long _sourceColumns;
	unsigned long long _sourceRows;
	unsigned long long _indexOffset;
	unsigned long long _numberOfTopKValues;

}

@property (assign,nonatomic) unsigned long long sourceRows;                      //@synthesize sourceRows=_sourceRows - In the implementation block
@property (assign,nonatomic) unsigned long long sourceColumns;                   //@synthesize sourceColumns=_sourceColumns - In the implementation block
@property (assign,nonatomic) unsigned long long indexOffset;                     //@synthesize indexOffset=_indexOffset - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTopKValues;              //@synthesize numberOfTopKValues=_numberOfTopKValues - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(unsigned long long)sourceColumns;
-(void)setSourceColumns:(unsigned long long)arg1 ;
-(unsigned long long)sourceRows;
-(void)setSourceRows:(unsigned long long)arg1 ;
-(id)initWithDevice:(id)arg1 numberOfTopKValues:(unsigned long long)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 inputMatrix:(id)arg2 resultIndexMatrix:(id)arg3 resultValueMatrix:(id)arg4 ;
-(void)setIndexOffset:(unsigned long long)arg1 ;
-(unsigned long long)numberOfTopKValues;
-(void)setNumberOfTopKValues:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(unsigned long long)indexOffset;
@end

