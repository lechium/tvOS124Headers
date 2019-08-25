/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVLReadWriteFeedResource;
#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
@class TVLLegacyJSContext;

@interface TVLJSStorage : NSObject {

	TVLLegacyJSContext* _context;
	OpaqueJSValueRef _jsObjectRef;
	id<TVLReadWriteFeedResource> _resource;

}

@property (retain) TVLLegacyJSContext * context;                                 //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id<TVLReadWriteFeedResource> resource;              //@synthesize resource=_resource - In the implementation block
@property (assign,nonatomic) OpaqueJSValueRef jsObjectRef;                       //@synthesize jsObjectRef=_jsObjectRef - In the implementation block
-(id<TVLReadWriteFeedResource>)resource;
-(void)setResource:(id<TVLReadWriteFeedResource>)arg1 ;
-(OpaqueJSValueRef)jsObjectRef;
-(id)initWithContext:(id)arg1 jsContext:(OpaqueJSContextRef)arg2 resource:(id)arg3 ;
-(void)setJsObjectRef:(OpaqueJSValueRef)arg1 ;
-(void)dealloc;
-(void)setContext:(TVLLegacyJSContext *)arg1 ;
-(TVLLegacyJSContext *)context;
@end

