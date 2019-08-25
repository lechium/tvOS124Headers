/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@interface CPRMListItem : NSObject {

	CGPDFNode* _paragraphs;
	unsigned long long _count;
	unsigned long long _pos;

}

@property (readonly) CGPDFNode* paragraphNodes;              //@synthesize paragraphs=_paragraphs - In the implementation block
@property (readonly) CGPDFPageRef page; 
-(void)addParagraph:(CGPDFNodeRef)arg1 ;
-(CGPDFNode*)paragraphNodes;
-(id)initWithCount:(unsigned long long)arg1 ;
-(void)dealloc;
-(CGRect)bounds;
-(CGPDFPageRef)page;
@end

