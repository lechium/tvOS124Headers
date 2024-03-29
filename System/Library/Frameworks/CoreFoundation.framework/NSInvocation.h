/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@class NSMethodSignature;

@interface NSInvocation : NSObject {

	void* _frame;
	void* _retdata;
	id _signature;
	id _container;
	unsigned char _retainedArgs;
	unsigned char _reserved[15];

}

@property (retain,readonly) NSMethodSignature * methodSignature; 
@property (readonly) BOOL argumentsRetained; 
@property (assign) id target; 
@property (assign) SEL selector; 
+(id)_invocationWithMethodSignature:(id)arg1 frame:(void*)arg2 ;
+(unsigned long long)requiredStackSizeForSignature:(id)arg1 ;
+(id)invocationWithMethodSignature:(id)arg1 ;
-(BOOL)_hasBlockArgument;
-(id)userInfo;
-(void)setUserInfo:(id)arg1 ;
-(id)debugDescription;
-(id)_initWithMethodSignature:(id)arg1 frame:(void*)arg2 buffer:(void*)arg3 size:(unsigned long long)arg4 ;
-(void)invokeSuper;
-(void)_addAttachedObject:(id)arg1 ;
-(BOOL)argumentsRetained;
-(id)init;
-(void)dealloc;
-(void)setTarget:(id)arg1 ;
-(void)setSelector:(SEL)arg1 ;
-(id)target;
-(SEL)selector;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setArgument:(void*)arg1 atIndex:(long long)arg2 ;
-(void)invoke;
-(void)getReturnValue:(void*)arg1 ;
-(void)retainArguments;
-(NSMethodSignature *)methodSignature;
-(void)getArgument:(void*)arg1 atIndex:(long long)arg2 ;
-(void)setReturnValue:(void*)arg1 ;
-(void)invokeWithTarget:(id)arg1 ;
-(void)invokeUsingIMP:(/*function pointer*/void*)arg1 ;
@end

