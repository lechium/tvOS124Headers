/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <CFNetwork/NSURLProtocol.h>

@interface WKCustomProtocol : NSURLProtocol {

	unsigned long long _customProtocolID;
	RetainPtr<__CFRunLoop *>* _initializationRunLoop;

}

@property (nonatomic,readonly) unsigned long long customProtocolID;              //@synthesize customProtocolID=_customProtocolID - In the implementation block
@property (nonatomic,readonly) CFRunLoopRef initializationRunLoop; 
+(BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
+(BOOL)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
-(id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(unsigned long long)customProtocolID;
-(CFRunLoopRef)initializationRunLoop;
-(void)startLoading;
-(void)stopLoading;
@end

