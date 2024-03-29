/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class NSString, CPRMTable;

@interface CPRMTableCell : NSObject {

	NSString* _contents;
	CPRMTableCell* _nextCellInColumn;
	CPRMTableCell* _nextCellInRow;
	CPRMTable* _table;
	CGPDFNodeRef _tableCellNode;

}

@property (readonly) CGPDFPageRef page; 
@property (retain) CPRMTableCell * nextCellInColumn;              //@synthesize nextCellInColumn=_nextCellInColumn - In the implementation block
@property (retain) CPRMTableCell * nextCellInRow;                 //@synthesize nextCellInRow=_nextCellInRow - In the implementation block
@property (assign) CPRMTable * table;                             //@synthesize table=_table - In the implementation block
@property (assign) CGPDFNodeRef tableCellNode;                    //@synthesize tableCellNode=_tableCellNode - In the implementation block
-(void)setTableCellNode:(CGPDFNodeRef)arg1 ;
-(void)setNextCellInRow:(CPRMTableCell *)arg1 ;
-(void)setNextCellInColumn:(CPRMTableCell *)arg1 ;
-(CGPDFNodeRef)tableCellNode;
-(CPRMTableCell *)nextCellInRow;
-(CPRMTableCell *)nextCellInColumn;
-(unsigned long long)column;
-(void)dealloc;
-(CGRect)bounds;
-(unsigned long long)row;
-(CGColorRef)backgroundColor;
-(id)contents;
-(void)setTable:(CPRMTable *)arg1 ;
-(CPRMTable *)table;
-(CGPDFPageRef)page;
@end

