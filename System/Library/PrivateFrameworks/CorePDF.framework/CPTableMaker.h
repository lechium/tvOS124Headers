/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class CPZone, CPTable;

@interface CPTableMaker : NSObject {

	CPZone* tableZone;
	CPTable* table;
	unsigned cellIndex;
	CGPoint* rowYIntervals;
	CGPoint* columnXIntervals;

}
+(void)makeTablesInPage:(id)arg1 ;
+(void)makeTablesInZone:(id)arg1 ;
+(BOOL)isTable:(id)arg1 ;
+(void)makeTableFrom:(id)arg1 ;
-(id)newBackgroundGraphicArrayFromRectangularZone:(id)arg1 ;
-(id)newTableCellFromZone:(id)arg1 ;
-(void)determineRowsAndColumns:(BOOL)arg1 ;
-(void)makeTable;
-(id)initWithZone:(id)arg1 ;
-(void)dealloc;
@end

