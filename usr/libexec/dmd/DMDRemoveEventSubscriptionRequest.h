//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@class CEMEventSubscriptionDeclaration, NSString;

@interface DMDRemoveEventSubscriptionRequest : DMFTaskRequest
{
    NSString *_organizationIdentifier;	// 8 = 0x8
    CEMEventSubscriptionDeclaration *_subscriptionDeclaration;	// 16 = 0x10
}

@property(retain, nonatomic) CEMEventSubscriptionDeclaration *subscriptionDeclaration; // @synthesize subscriptionDeclaration=_subscriptionDeclaration;
@property(copy, nonatomic) NSString *organizationIdentifier; // @synthesize organizationIdentifier=_organizationIdentifier;
- (void).cxx_destruct;	// IMP=0x00000001000632e4

@end
