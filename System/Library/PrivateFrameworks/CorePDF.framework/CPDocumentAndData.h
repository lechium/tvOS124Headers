/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@interface CPDocumentAndData : NSObject {

	CGPDFDocumentRef _document;
	CFDataRef _sourceData;

}

@property (retain) CGPDFDocumentRef document;              //@synthesize document=_document - In the implementation block
@property (retain) CFDataRef sourceData;                   //@synthesize sourceData=_sourceData - In the implementation block
-(void)setSourceData:(CFDataRef)arg1 ;
-(CFDataRef)sourceData;
-(void)dealloc;
-(void)setDocument:(CGPDFDocumentRef)arg1 ;
-(CGPDFDocumentRef)document;
@end

