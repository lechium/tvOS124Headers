/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBTransaction.h>
#import <libobjc.A.dylib/FBSynchronizedTransaction.h>
#import <libobjc.A.dylib/FBSynchronizedTransactionDelegate.h>

@protocol FBSynchronizedTransactionGroupDelegate;
@class NSMutableSet, NSString;

@interface FBSynchronizedTransactionGroup : FBTransaction <FBSynchronizedTransaction, FBSynchronizedTransactionDelegate> {

	BOOL _commitAllowed;
	BOOL _readyForCommit;
	BOOL _didCommit;
	NSMutableSet* _synchronizedTransactions;
	NSMutableSet* _synchronizedTransactionsAwaitingCommitReadiness;
	NSMutableSet* _synchronizedTransactionsReadyToCommit;
	id<FBSynchronizedTransactionGroupDelegate> _synchronizationDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBSynchronizedTransactionDelegate> synchronizationDelegate;              //@synthesize synchronizationDelegate=_synchronizationDelegate - In the implementation block
-(void)_didComplete;
-(void)_performSynchronizedCommit:(id)arg1 ;
-(void)addSynchronizedTransaction:(id)arg1 ;
-(BOOL)_shouldFailForChildTransaction:(id)arg1 ;
-(BOOL)_canBeInterrupted;
-(id<FBSynchronizedTransactionDelegate>)synchronizationDelegate;
-(void)synchronizedTransactionReadyToCommit:(id)arg1 ;
-(void)performSynchronizedCommit;
-(void)_childTransactionDidComplete:(id)arg1 ;
-(BOOL)isReadyForSynchronizedCommit;
-(void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2 ;
-(void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2 ;
-(void)setSynchronizationDelegate:(id<FBSynchronizedTransactionDelegate>)arg1 ;
-(void)_checkPreconditionsAndCommitIfReady;
-(void)_performSynchronizedCommitIfReady;
-(id)synchronizedTransactions;
-(id)init;
@end

