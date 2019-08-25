/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, CRInvocationChainDelegate;
@class NSObject, NSPointerArray;

@interface CRInvocationChain : NSObject {

	NSObject*<OS_dispatch_queue> _chainedObjectsAccessQueue;
	id<CRInvocationChainDelegate> _delegate;
	NSPointerArray* _chainedObjects;

}

@property (setter=_setChainedObjects:,getter=_chainedObjects,nonatomic,retain) NSPointerArray * chainedObjects;              //@synthesize chainedObjects=_chainedObjects - In the implementation block
@property (assign,nonatomic,__weak) id<CRInvocationChainDelegate> delegate;                                                  //@synthesize delegate=_delegate - In the implementation block
-(id)_methodSignatureForSelector:(SEL)arg1 ;
-(void)_forwardInvocation:(id)arg1 ;
-(void)_accessChainedObjectsSafely:(/*^block*/id)arg1 ;
-(BOOL)_respondsToSelector:(SEL)arg1 ;
-(void)_addChainedObject:(id)arg1 ;
-(void)_enumerateChainedObjectsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)_isEligibleForSelector:(SEL)arg1 ;
-(id)_chainedObjects;
-(void)enumerateChainedObjectsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isEligibleForSelector:(SEL)arg1 ;
-(void)_setChainedObjects:(id)arg1 ;
-(void)addChainedObject:(id)arg1 ;
-(id)init;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)setDelegate:(id<CRInvocationChainDelegate>)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id<CRInvocationChainDelegate>)delegate;
-(void)forwardInvocation:(id)arg1 ;
@end
