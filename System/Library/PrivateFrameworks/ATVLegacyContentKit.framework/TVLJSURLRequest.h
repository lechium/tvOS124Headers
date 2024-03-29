/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <libobjc.A.dylib/TVLJSObject.h>

@class NSMutableURLRequest;

@interface TVLJSURLRequest : NSObject <TVLJSObject> {

	OpaqueJSValueRef _jsObjectRef;
	NSMutableURLRequest* _urlRequest;

}

@property (assign,nonatomic) OpaqueJSValueRef jsObjectRef;                  //@synthesize jsObjectRef=_jsObjectRef - In the implementation block
@property (nonatomic,retain) NSMutableURLRequest * urlRequest;              //@synthesize urlRequest=_urlRequest - In the implementation block
-(NSMutableURLRequest *)urlRequest;
-(void)setUrlRequest:(NSMutableURLRequest *)arg1 ;
-(OpaqueJSValueRef)jsObjectRef;
-(void)_jsFinalize;
-(void)setJsObjectRef:(OpaqueJSValueRef)arg1 ;
-(id)initWithContext:(OpaqueJSContextRef)arg1 urlRequest:(id)arg2 ;
-(void)dealloc;
@end

