/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <libobjc.A.dylib/TVLJSObject.h>

@class TVLXMLNode;

@interface TVLJSNode : NSObject <TVLJSObject> {

	OpaqueJSValueRef jsObjectRef;
	TVLXMLNode* xmlNode;

}

@property (assign,nonatomic) OpaqueJSValueRef jsObjectRef; 
@property (nonatomic,retain) TVLXMLNode * xmlNode; 
+(void)addConstructorToObject:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 ;
+(id)nodeInContext:(OpaqueJSContextRef)arg1 withNode:(id)arg2 ;
+(id)nodeFromValue:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 exception:(const OpaqueJSValue*)arg3 ;
+(OpaqueJSValueRef)constructObjectWithClassName:(id)arg1 withTVLJSNodeClass:(Class)arg2 inContext:(OpaqueJSContextRef)arg3 ;
-(OpaqueJSValueRef)jsObjectRef;
-(void)setXmlNode:(TVLXMLNode *)arg1 ;
-(TVLXMLNode *)xmlNode;
-(void)setJsObjectRef:(OpaqueJSValueRef)arg1 ;
-(void)dealloc;
@end

