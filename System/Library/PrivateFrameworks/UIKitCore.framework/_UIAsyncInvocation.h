/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _UIAsyncInvocation : NSObject {

	Av* _observer;
	/*^block*/id _invocationBlock;
	AB _invocationBlockHasBeenCalled;
	Aq _invokeCallCount;

}
+(id)invocationWithBlock:(/*^block*/id)arg1 ;
+(id)emptyInvocation;
-(void)dealloc;
-(id)invoke;
@end

