/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLXMLNode.h>

@class TVLXMLElement, NSData;

@interface TVLXMLDocument : TVLXMLNode

@property (nonatomic,retain) TVLXMLElement * rootElement; 
@property (nonatomic,readonly) NSData * XMLData; 
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(TVLXMLElement *)rootElement;
-(NSData *)XMLData;
-(id)makeDocumentFragmentWithData:(id)arg1 error:(id*)arg2 ;
-(id)initWithRootElement:(id)arg1 ;
-(void)setRootElement:(TVLXMLElement *)arg1 ;
-(void)setDOMRootElement:(id)arg1 ;
-(id)makeElementNamed:(id)arg1 ;
-(id)makeDocumentFragment;
-(BOOL)adoptNode:(id)arg1 error:(id*)arg2 ;
-(id)requiredURLs;
-(id)elementById:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

