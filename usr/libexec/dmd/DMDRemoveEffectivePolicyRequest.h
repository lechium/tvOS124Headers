//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMDRemoveEffectivePolicyRequest : DMFTaskRequest
{
    NSString *_organizationIdentifier;	// 8 = 0x8
    NSString *_declarationIdentifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100062cd4
@property(copy, nonatomic) NSString *declarationIdentifier; // @synthesize declarationIdentifier=_declarationIdentifier;
@property(copy, nonatomic) NSString *organizationIdentifier; // @synthesize organizationIdentifier=_organizationIdentifier;
- (void).cxx_destruct;	// IMP=0x0000000100062f80
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100062e58
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100062cdc

@end
