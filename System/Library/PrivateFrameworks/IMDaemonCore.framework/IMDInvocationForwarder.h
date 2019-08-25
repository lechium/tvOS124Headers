/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSLock;

@interface IMDInvocationForwarder : NSObject {

	NSMutableArray* _targets;
	NSLock* _lock;

}

@property (nonatomic,retain) NSMutableArray * _targets;              //@synthesize targets=_targets - In the implementation block
@property (nonatomic,retain) NSLock * _lock;                         //@synthesize lock=_lock - In the implementation block
-(NSLock *)_lock;
-(id)initWithTargets:(id)arg1 ;
-(void)addTarget:(id)arg1 ;
-(NSMutableArray *)_targets;
-(void)set_targets:(NSMutableArray *)arg1 ;
-(void)set_lock:(NSLock *)arg1 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)removeTarget:(id)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

