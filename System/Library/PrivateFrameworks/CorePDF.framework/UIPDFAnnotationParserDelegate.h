/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSMutableString, UIPDFAnnotation, NSString;

@interface UIPDFAnnotationParserDelegate : NSObject <NSXMLParserDelegate> {

	NSMutableString* _characters;
	BOOL _parseError;
	UIPDFAnnotation* _annotation;

}

@property (nonatomic,retain) UIPDFAnnotation * annotation;              //@synthesize annotation=_annotation - In the implementation block
@property (nonatomic,readonly) BOOL parseError;                         //@synthesize parseError=_parseError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)parserDidStartDocument:(id)arg1 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(BOOL)parseError;
-(id)init;
-(void)dealloc;
-(UIPDFAnnotation *)annotation;
-(void)setAnnotation:(UIPDFAnnotation *)arg1 ;
@end

