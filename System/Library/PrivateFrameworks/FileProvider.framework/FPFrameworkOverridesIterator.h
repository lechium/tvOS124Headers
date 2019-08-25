/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@class NSArray, NSInvocation;

@interface FPFrameworkOverridesIterator : NSProxy {

	NSArray* _overrides;
	/*^block*/id _noSuitableModuleFoundHandler;
	unsigned long long _currentIndex;
	NSInvocation* _invocation;

}
+(id)newIteratorWithNotFoundHandler:(/*^block*/id)arg1 ;
+(id)allOverrides;
-(id)initWithOverrides:(id)arg1 noSuitableModuleFoundHandler:(/*^block*/id)arg2 ;
-(void)callNextOverrides;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)finish;
@end

