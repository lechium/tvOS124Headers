/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSMutableDictionary, NSObject;

@interface _CATArbitratorWaitToken : NSObject {

	Ai mState;
	NSMutableDictionary* mTokenByKey;
	NSObject*<OS_dispatch_queue> mDelegateQueue;
	NSObject*<OS_dispatch_group> mGroup;
	/*^block*/id mCompletionBlock;

}
-(id)initWithDelegateQueue:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)waitForRegistrationEntry:(id)arg1 forKey:(id)arg2 exclusive:(BOOL)arg3 ;
-(void)performCompletionBlock;
-(BOOL)whenStateIs:(int)arg1 atomicallySwapWith:(int)arg2 ;
-(void)cancel;
-(void)resume;
@end

