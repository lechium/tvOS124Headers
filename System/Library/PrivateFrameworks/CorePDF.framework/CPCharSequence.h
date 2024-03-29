/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CPCopying.h>
#import <libobjc.A.dylib/CPDisposable.h>

@class CPMemoryOwner;

@interface CPCharSequence : NSObject <NSCopying, CPCopying, CPDisposable> {

	unsigned length;
	CPPDFChar* charArray;
	unsigned previousSize;
	unsigned size;
	CPMemoryOwner* sharedMemory;
	BOOL wasMerged;

}
-(void)finalize;
-(id)initSuper;
-(CPPDFChar*)charAtIndex:(unsigned)arg1 ;
-(BOOL)map:(/*function pointer*/void*)arg1 passing:(void*)arg2 ;
-(id)newSubsequenceFrom:(unsigned)arg1 length:(unsigned)arg2 ;
-(void)removeFrom:(unsigned)arg1 ;
-(id)initWithSizeFor:(unsigned)arg1 ;
-(void)addChar:(CPPDFChar*)arg1 ;
-(BOOL)wasMerged;
-(BOOL)removeSubsequences:(id)arg1 whereTrue:(/*function pointer*/void*)arg2 passing:(void*)arg3 ;
-(void)sortByAnchorYDecreasingXIncreasing;
-(void)splitToSubsequences:(id)arg1 whereTrue:(/*function pointer*/void*)arg2 passing:(void*)arg3 ;
-(void)mergeByAnchorXIncreasingYDecreasing:(id)arg1 ;
-(BOOL)map:(/*function pointer*/void*)arg1 whereNeighborsWith:(id)arg2 passing:(void*)arg3 ;
-(void)removeAllChars;
-(void)resize:(unsigned)arg1 ;
-(void)sortBy:(/*function pointer*/void*)arg1 ;
-(void)merge:(id)arg1 by:(/*function pointer*/void*)arg2 ;
-(CGRect)boundsFrom:(unsigned)arg1 length:(unsigned)arg2 ;
-(id)initWithChars:(CPPDFChar*)arg1 length:(unsigned)arg2 ;
-(CPPDFChar*)charArray;
-(void)addChars:(CPPDFChar*)arg1 length:(unsigned)arg2 ;
-(void)addChars:(CPPDFChar*)arg1 length:(unsigned)arg2 ifTrue:(/*function pointer*/void*)arg3 passing:(void*)arg4 ;
-(void)addCharsFromSequence:(id)arg1 ;
-(void)removeChar;
-(void)replaceCharAtIndex:(unsigned)arg1 withChar:(CPPDFChar*)arg2 ;
-(void)removeCharAtIndex:(unsigned)arg1 ;
-(void)sortByAnchorXIncreasingYDecreasing;
-(void)mergeByAnchorYDecreasingXIncreasing:(id)arg1 ;
-(void)copyToSubsequence:(id)arg1 from:(unsigned)arg2 length:(unsigned)arg3 ;
-(void)copyToSubsequence:(id)arg1 ifTrue:(/*function pointer*/void*)arg2 passing:(void*)arg3 ;
-(BOOL)removeToSubsequence:(id)arg1 ifTrue:(/*function pointer*/void*)arg2 passing:(void*)arg3 ;
-(BOOL)mapWithIndex:(/*function pointer*/void*)arg1 passing:(void*)arg2 ;
-(BOOL)mapWithIndex:(/*function pointer*/void*)arg1 from:(unsigned)arg2 length:(unsigned)arg3 passing:(void*)arg4 ;
-(BOOL)mapToPairs:(/*function pointer*/void*)arg1 passing:(void*)arg2 ;
-(BOOL)mapToPairsWithIndex:(/*function pointer*/void*)arg1 passing:(void*)arg2 ;
-(void)dispose;
-(unsigned)length;
-(void)dealloc;
-(CGRect)bounds;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

