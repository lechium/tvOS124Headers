/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <ATVLegacyContentKit/TVLJSNode.h>

@class TVLXMLSchema, TVLXMLDocument;

@interface TVLJSDocument : TVLJSNode {

	TVLXMLSchema* xmlSchema;

}

@property (nonatomic,retain) TVLXMLSchema * xmlSchema; 
@property (nonatomic,retain,readonly) TVLXMLDocument * xmlDocument; 
+(void)addConstructorToObject:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 ;
+(id)documentInContext:(OpaqueJSContextRef)arg1 withDocument:(id)arg2 withSchema:(id)arg3 ;
+(id)documentFromValue:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 exception:(const OpaqueJSValue*)arg3 ;
-(TVLXMLDocument *)xmlDocument;
-(void)setXmlSchema:(TVLXMLSchema *)arg1 ;
-(TVLXMLSchema *)xmlSchema;
-(void)dealloc;
@end

