/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, NSArray;

@interface RWIProtocolDOMNode : RWIProtocolJSONObject

@property (assign,nonatomic) int nodeId; 
@property (assign,nonatomic) int nodeType; 
@property (nonatomic,copy) NSString * nodeName; 
@property (nonatomic,copy) NSString * localName; 
@property (nonatomic,copy) NSString * nodeValue; 
@property (assign,nonatomic) int childNodeCount; 
@property (nonatomic,copy) NSArray * children; 
@property (nonatomic,copy) NSArray * attributes; 
@property (nonatomic,copy) NSString * documentURL; 
@property (nonatomic,copy) NSString * baseURL; 
@property (nonatomic,copy) NSString * publicId; 
@property (nonatomic,copy) NSString * systemId; 
@property (nonatomic,copy) NSString * xmlVersion; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * value; 
@property (assign,nonatomic) long long pseudoType; 
@property (assign,nonatomic) long long shadowRootType; 
@property (assign,nonatomic) long long customElementState; 
@property (nonatomic,copy) NSString * frameId; 
@property (nonatomic,retain) RWIProtocolDOMNode * contentDocument; 
@property (nonatomic,copy) NSArray * shadowRoots; 
@property (nonatomic,retain) RWIProtocolDOMNode * templateContent; 
@property (nonatomic,copy) NSArray * pseudoElements; 
@property (nonatomic,copy) NSString * contentSecurityPolicyHash; 
-(void)setBaseURL:(NSString *)arg1 ;
-(NSString *)baseURL;
-(NSString *)nodeValue;
-(NSString *)nodeName;
-(NSString *)xmlVersion;
-(void)setXmlVersion:(NSString *)arg1 ;
-(NSString *)publicId;
-(NSString *)systemId;
-(RWIProtocolDOMNode *)contentDocument;
-(void)setNodeValue:(NSString *)arg1 ;
-(NSString *)localName;
-(int)nodeId;
-(void)setFrameId:(NSString *)arg1 ;
-(NSString *)frameId;
-(void)setNodeId:(int)arg1 ;
-(void)setPublicId:(NSString *)arg1 ;
-(void)setSystemId:(NSString *)arg1 ;
-(void)setPseudoType:(long long)arg1 ;
-(long long)pseudoType;
-(void)setShadowRootType:(long long)arg1 ;
-(long long)shadowRootType;
-(void)setCustomElementState:(long long)arg1 ;
-(long long)customElementState;
-(void)setContentDocument:(RWIProtocolDOMNode *)arg1 ;
-(void)setShadowRoots:(NSArray *)arg1 ;
-(NSArray *)shadowRoots;
-(void)setTemplateContent:(RWIProtocolDOMNode *)arg1 ;
-(RWIProtocolDOMNode *)templateContent;
-(void)setPseudoElements:(NSArray *)arg1 ;
-(NSArray *)pseudoElements;
-(void)setContentSecurityPolicyHash:(NSString *)arg1 ;
-(NSString *)contentSecurityPolicyHash;
-(void)setChildNodeCount:(int)arg1 ;
-(int)childNodeCount;
-(void)setNodeType:(int)arg1 ;
-(void)setNodeName:(NSString *)arg1 ;
-(void)setLocalName:(NSString *)arg1 ;
-(id)initWithNodeId:(int)arg1 nodeType:(int)arg2 nodeName:(id)arg3 localName:(id)arg4 nodeValue:(id)arg5 ;
-(void)setChildren:(NSArray *)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSArray *)attributes;
-(void)setAttributes:(NSArray *)arg1 ;
-(NSArray *)children;
-(int)nodeType;
-(void)setDocumentURL:(NSString *)arg1 ;
-(NSString *)documentURL;
@end
