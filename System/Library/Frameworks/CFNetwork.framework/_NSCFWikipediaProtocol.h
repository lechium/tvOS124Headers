/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLProtocol.h>

@interface _NSCFWikipediaProtocol : NSURLProtocol {

	const void* _instance;
	const CFURLProtocolInstanceCallbacks* _callbacks;

}
+(BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
+(BOOL)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
-(void)scheduleOnRunloop:(CFRunLoopRef)arg1 mode:(CFStringRef)arg2 ;
-(void)unscheduleOnRunloop:(CFRunLoopRef)arg1 mode:(CFStringRef)arg2 ;
-(id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(void)startLoading;
-(void)dealloc;
-(void)stopLoading;
@end

