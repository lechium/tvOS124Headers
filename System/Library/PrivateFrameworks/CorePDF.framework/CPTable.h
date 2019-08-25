/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPChunk.h>
#import <libobjc.A.dylib/CPDisposable.h>
#import <libobjc.A.dylib/CPGraphicUser.h>

@interface CPTable : CPChunk <CPDisposable, CPGraphicUser> {

	CGRect tableBounds;
	unsigned rowCount;
	double* rowY;
	unsigned columnCount;
	double* columnX;
	CGColorRef backgroundColor;
	unsigned backgroundGraphicCount;
	id* backgroundGraphics;
	unsigned usedGraphicCount;
	BOOL disposed;

}

@property (nonatomic,readonly) CGRect tableBounds; 
@property (assign,nonatomic) unsigned rowCount; 
@property (nonatomic,readonly) double* rowY; 
@property (assign,nonatomic) unsigned columnCount; 
@property (nonatomic,readonly) double* columnX; 
@property (nonatomic,readonly) unsigned backgroundGraphicCount; 
-(void)finalize;
-(CGRect)tableBounds;
-(void)incrementUsedGraphicCount;
-(unsigned)usedGraphicCount;
-(double*)rowY;
-(double*)columnX;
-(void)setBackgroundGraphics:(id)arg1 ;
-(id)backgroundGraphicAtIndex:(unsigned)arg1 ;
-(unsigned)backgroundGraphicCount;
-(void)setColumnCount:(unsigned)arg1 ;
-(void)dispose;
-(void)setRowCount:(unsigned)arg1 ;
-(unsigned)columnCount;
-(void)dealloc;
-(CGColorRef)backgroundColor;
-(id)initWithBounds:(CGRect)arg1 ;
-(unsigned)rowCount;
@end
