/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, IKDOMNode, IKDOMNodeList, IKDOMDocument, JSValue;


@protocol IKJSDOMNode <JSExport>
@property (nonatomic,retain,readonly) NSString * nodeName; 
@property (nonatomic,retain) NSString * nodeValue; 
@property (nonatomic,readonly) long long nodeType; 
@property (nonatomic,__weak,readonly) IKDOMNode * parentNode; 
@property (nonatomic,retain,readonly) IKDOMNodeList * childNodes; 
@property (nonatomic,retain,readonly) IKDOMNode * firstChild; 
@property (nonatomic,retain,readonly) IKDOMNode * lastChild; 
@property (nonatomic,__weak,readonly) IKDOMNode * previousSibling; 
@property (nonatomic,__weak,readonly) IKDOMNode * nextSibling; 
@property (nonatomic,__weak,readonly) IKDOMDocument * ownerDocument; 
@property (nonatomic,retain) NSString * textContent; 
@property (assign,nonatomic,__weak) JSValue * dataItem; 
@required
-(BOOL)contains:(id)arg1;
-(NSString *)nodeValue;
-(NSString *)nodeName;
-(void)setNodeValue:(id)arg1;
-(NSString *)textContent;
-(void)setTextContent:(id)arg1;
-(BOOL)hasChildNodes;
-(id)cloneNode:(BOOL)arg1;
-(BOOL)isEqualNode:(id)arg1;
-(id)insertBefore:(id)arg1 :(id)arg2;
-(id)replaceChild:(id)arg1 :(id)arg2;
-(id)appendChild:(id)arg1;
-(id)getFeature:(id)arg1 :(id)arg2;
-(void)setDataItem:(id)arg1;
-(JSValue *)dataItem;
-(IKDOMDocument *)ownerDocument;
-(IKDOMNode *)parentNode;
-(id)removeChild:(id)arg1;
-(BOOL)isSameNode:(id)arg1;
-(IKDOMNodeList *)childNodes;
-(IKDOMNode *)lastChild;
-(IKDOMNode *)firstChild;
-(long long)nodeType;
-(IKDOMNode *)nextSibling;
-(IKDOMNode *)previousSibling;

@end

