//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MZKeyValueStoreController, MZKeyValueStoreError, MZKeyValueStoreTransaction;

@protocol MZKeyValueStoreControllerDelegate <NSObject>
- (void)keyValueStoreController:(MZKeyValueStoreController *)arg1 transactionDidFinish:(MZKeyValueStoreTransaction *)arg2;
- (void)keyValueStoreController:(MZKeyValueStoreController *)arg1 transaction:(MZKeyValueStoreTransaction *)arg2 didCancelWithError:(MZKeyValueStoreError *)arg3;
- (_Bool)keyValueStoreController:(MZKeyValueStoreController *)arg1 transaction:(MZKeyValueStoreTransaction *)arg2 didFailWithError:(MZKeyValueStoreError *)arg3;

@optional
- (_Bool)keyValueStoreController:(MZKeyValueStoreController *)arg1 shouldScheduleTransaction:(MZKeyValueStoreTransaction *)arg2;
@end

