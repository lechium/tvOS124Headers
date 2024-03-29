//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSUUID, UIRemoteTextEditingAttributes;

@protocol UIRemoteTextEditing <NSObject>
- (void)endRemoteTextEditingSessionWithID:(NSUUID *)arg1;
- (void)remoteTextEditingSessionWithID:(NSUUID *)arg1 textDidChange:(NSString *)arg2;
- (void)beginRemoteTextEditingSessionWithID:(NSUUID *)arg1 attributes:(UIRemoteTextEditingAttributes *)arg2 initialText:(NSString *)arg3;

@optional
- (void)remoteTextEditingSessionWithID:(NSUUID *)arg1 attributesDidChange:(UIRemoteTextEditingAttributes *)arg2;
@end

