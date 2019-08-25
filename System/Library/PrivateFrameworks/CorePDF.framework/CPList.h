/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/CPDisposable.h>

@class CPParagraphListItem;

@interface CPList : NSObject <CPDisposable> {

	CGRect spacer;
	int type;
	unsigned ordinalPrefixLength;
	unsigned ordinalSuffixLength;
	CPParagraphListItem* parentItem;
	CFArrayRef items;

}

@property (assign,nonatomic) CGRect spacer; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) unsigned ordinalPrefixLength; 
@property (assign,nonatomic) unsigned ordinalSuffixLength; 
@property (nonatomic,retain) CPParagraphListItem * parentItem; 
-(void)finalize;
-(id)itemAtIndex:(unsigned)arg1 ;
-(void)setParentItem:(CPParagraphListItem *)arg1 ;
-(BOOL)containsParagraph:(id)arg1 ;
-(BOOL)isMultilevel;
-(CGRect)spacer;
-(void)setSpacer:(CGRect)arg1 ;
-(unsigned)ordinalPrefixLength;
-(void)setOrdinalPrefixLength:(unsigned)arg1 ;
-(unsigned)ordinalSuffixLength;
-(void)setOrdinalSuffixLength:(unsigned)arg1 ;
-(CPParagraphListItem *)parentItem;
-(void)dispose;
-(id)init;
-(void)dealloc;
-(int)type;
-(void)setType:(int)arg1 ;
-(unsigned)itemCount;
-(void)addItem:(id)arg1 ;
@end

