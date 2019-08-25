/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSInvocation;

@interface UIKeyboardInputManagerClientRequest : NSObject {

	NSInvocation* _invocation;
	unsigned long long _errorCount;

}

@property (nonatomic,readonly) NSInvocation * invocation; 
@property (assign,nonatomic) unsigned long long errorCount;              //@synthesize errorCount=_errorCount - In the implementation block
+(id)untargetedInvocationWithInvocation:(id)arg1 withCompletion:(BOOL)arg2 ;
-(void)dealloc;
-(NSInvocation *)invocation;
-(id)initWithInvocation:(id)arg1 ;
-(unsigned long long)errorCount;
-(void)setErrorCount:(unsigned long long)arg1 ;
@end

