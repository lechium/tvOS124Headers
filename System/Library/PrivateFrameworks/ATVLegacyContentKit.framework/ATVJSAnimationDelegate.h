/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
@class TVLLegacyJSContext;

@interface ATVJSAnimationDelegate : NSObject {

	TVLLegacyJSContext* _context;
	OpaqueJSValueRef _callback;

}
-(id)initWithContext:(OpaqueJSContextRef)arg1 withCallbackFunction:(OpaqueJSValueRef)arg2 ;
-(void)dealloc;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
@end

