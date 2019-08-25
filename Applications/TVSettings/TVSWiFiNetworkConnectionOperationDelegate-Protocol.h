//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, TVSWiFiNetwork, TVSWiFiNetworkConnectionOperation;

@protocol TVSWiFiNetworkConnectionOperationDelegate <NSObject>
- (void)operation:(TVSWiFiNetworkConnectionOperation *)arg1 stateDidChange:(unsigned long long)arg2;
- (void)operation:(TVSWiFiNetworkConnectionOperation *)arg1 didConnectToNetwork:(TVSWiFiNetwork *)arg2;
- (void)operation:(TVSWiFiNetworkConnectionOperation *)arg1 didFailToConnectToNetwork:(TVSWiFiNetwork *)arg2 error:(NSError *)arg3;
- (void)operation:(TVSWiFiNetworkConnectionOperation *)arg1 didRequestPasswordForNetwork:(TVSWiFiNetwork *)arg2 completion:(void (^)(NSString *))arg3;
- (void)operation:(TVSWiFiNetworkConnectionOperation *)arg1 didFailToFindNetworkWithName:(NSString *)arg2 error:(NSError *)arg3;
@end

