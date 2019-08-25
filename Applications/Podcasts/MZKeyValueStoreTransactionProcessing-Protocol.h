//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MZKeyValueStoreTransaction, NSArray, NSData, NSString;

@protocol MZKeyValueStoreTransactionProcessing <NSObject>
- (void)transaction:(MZKeyValueStoreTransaction *)arg1 didProcessResponseWithDomainVersion:(NSString *)arg2;
- (void)transaction:(MZKeyValueStoreTransaction *)arg1 willProcessResponseWithDomainVersion:(NSString *)arg2;
- (void)transaction:(MZKeyValueStoreTransaction *)arg1 mergeData:(NSData *)arg2 forKey:(NSString *)arg3 domainVersion:(NSString *)arg4 version:(NSString *)arg5 mismatch:(_Bool)arg6 finishedBlock:(void (^)(_Bool))arg7;
- (NSData *)dataForSetTransaction:(MZKeyValueStoreTransaction *)arg1 key:(NSString *)arg2 version:(id *)arg3;
- (NSString *)versionForGetTransaction:(MZKeyValueStoreTransaction *)arg1 key:(NSString *)arg2;

@optional
- (NSString *)sinceDomainVersionForTransaction:(MZKeyValueStoreTransaction *)arg1;
- (NSArray *)keysForTransaction:(MZKeyValueStoreTransaction *)arg1;
@end
