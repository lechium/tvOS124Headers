//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISStoreURLOperationDelegate.h"
#import "NSObject.h"

@class ISURLOperation, MZKeyValueStoreRequest;

@protocol MZKeyValueStoreOperationDelegate <ISStoreURLOperationDelegate, NSObject>
- (void)keyValueStoreOperationOperationDidFinish:(MZKeyValueStoreRequest *)arg1;
- (void)keyValueStoreOperation:(MZKeyValueStoreRequest *)arg1 scheduleURLOperation:(ISURLOperation *)arg2;
@end

