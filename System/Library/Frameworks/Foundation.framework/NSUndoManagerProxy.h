/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@class NSUndoManager;

@interface NSUndoManagerProxy : NSProxy {

	NSUndoManager* _manager;
	Class _targetClass;

}
-(void)setTargetClass:(Class)arg1 ;
-(void)superRelease;
-(id)initWithManager:(id)arg1 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(oneway void)release;
-(id)retain;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(BOOL)_tryRetain;
-(void)forwardInvocation:(id)arg1 ;
@end

