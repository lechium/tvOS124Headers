//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IDSServiceDelegate-Protocol.h"

@class IDSAccount, IDSMessageContext, IDSService, NSArray, NSDictionary, NSError, NSString;

@protocol IDSServiceDelegatePrivate <IDSServiceDelegate>

@optional
- (void)service:(IDSService *)arg1 didHintCheckingTransportLogWithReason:(long long)arg2;
- (void)service:(IDSService *)arg1 token:(NSString *)arg2 time:(double)arg3 error:(NSError *)arg4;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 incomingTopLevelMessage:(NSDictionary *)arg3 fromID:(NSString *)arg4 messageContext:(id)arg5;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 identifier:(NSString *)arg3 alternateCallbackID:(NSString *)arg4 willSendToDestinations:(NSArray *)arg5 skippedDestinations:(NSArray *)arg6 registrationPropertyToDestinations:(NSDictionary *)arg7;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 messageIdentifier:(NSString *)arg3 alternateCallbackID:(NSString *)arg4 updatedWithResponseCode:(long long)arg5 error:(NSError *)arg6 lastCall:(_Bool)arg7 messageContext:(IDSMessageContext *)arg8;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 messageIdentifier:(NSString *)arg3 alternateCallbackID:(NSString *)arg4 updatedWithResponseCode:(long long)arg5 error:(NSError *)arg6 lastCall:(_Bool)arg7;
@end

