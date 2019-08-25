/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <libobjc.A.dylib/TVLJSObject.h>

@class NSLocale;

@interface TVLJSNSLocale : NSObject <TVLJSObject> {

	OpaqueJSValueRef _jsObjectRef;
	NSLocale* _locale;

}

@property (nonatomic,retain) NSLocale * locale;              //@synthesize locale=_locale - In the implementation block
+(void)addClassDefinitionInContext:(OpaqueJSContextRef)arg1 ;
+(id)localeFromJSValue:(OpaqueJSValueRef)arg1 context:(OpaqueJSContextRef)arg2 ;
-(OpaqueJSValueRef)jsObjectRef;
-(void)_jsFinalize;
-(id)initWithLocale:(id)arg1 context:(OpaqueJSContextRef)arg2 ;
-(id)init;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
@end

