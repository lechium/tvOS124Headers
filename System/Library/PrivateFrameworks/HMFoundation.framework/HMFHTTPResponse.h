/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class HMFHTTPResponseInternal, HMFHTTPRequest, NSDictionary, NSData;

@interface HMFHTTPResponse : HMFObject <NSCopying, NSMutableCopying> {

	HMFHTTPResponseInternal* _internal;
	HMFHTTPRequest* _request;

}

@property (nonatomic,readonly) HMFHTTPResponseInternal * internal;              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) HMFHTTPRequest * request;                        //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) long long statusCode; 
@property (nonatomic,readonly) NSDictionary * headerFields; 
@property (nonatomic,readonly) NSData * body; 
-(NSDictionary *)headerFields;
-(id)initWithRequest:(id)arg1 internalResponse:(id)arg2 ;
-(HMFHTTPResponseInternal *)internal;
-(id)attributeDescriptions;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSData *)body;
-(HMFHTTPRequest *)request;
-(long long)statusCode;
@end

