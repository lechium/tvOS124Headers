//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSURLSessionDelegate-Protocol.h"

@class NSString, NSURLResponse, NSURLSession, NSURLSessionTask;

@protocol NSURLSessionDelegate_Internal <NSURLSessionDelegate>
- (void)_URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 getAuthHeadersForResponse:(NSURLResponse *)arg3 completionHandler:(void (^)(_Bool, NSDictionary *))arg4;

@optional
- (void)_URLSession:(NSURLSession *)arg1 needConnectedSocketToHost:(NSString *)arg2 port:(unsigned long long)arg3 completionHandler:(void (^)(int, struct))arg4;
- (void)_URLSession:(NSURLSession *)arg1 companionAvailabilityChanged:(_Bool)arg2;
- (void)_URLSession:(NSURLSession *)arg1 openFileAtPath:(NSString *)arg2 mode:(int)arg3 completionHandler:(void (^)(int))arg4;
@end

