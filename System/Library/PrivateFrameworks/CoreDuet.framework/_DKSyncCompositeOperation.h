/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <CoreDuet/_DKSyncOperation.h>

@class NSHashTable, NSMutableArray;

@interface _DKSyncCompositeOperation : _DKSyncOperation {

	_DKSyncCompositeOperation* _parent;
	AB _isReadyToStart;
	NSHashTable* _children;
	os_unfair_lock_s _lock;
	NSMutableArray* _errors;

}

@property (readonly) NSMutableArray * errors;              //@synthesize errors=_errors - In the implementation block
-(NSMutableArray *)errors;
-(id)initWithParent:(id)arg1 ;
-(void)endOperation;
-(void)childOperationWasAdded:(id)arg1 ;
-(void)setReadyToStart:(BOOL)arg1 ;
-(void)_shutdownOperation;
-(void)childOperation:(id)arg1 didEndWithErrors:(id)arg2 ;
-(BOOL)isReady;
-(BOOL)isAsynchronous;
-(id)init;
-(void)dealloc;
-(void)cancel;
@end

