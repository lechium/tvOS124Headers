//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NWNetworkAgent-Protocol.h"

@class NSString, NSUUID, NWNetworkAgentRegistration;

@interface NESMNetworkAgent : NSObject <NWNetworkAgent>
{
    NSUUID *agentUUID;	// 8 = 0x8
    NWNetworkAgentRegistration *_registrationObject;	// 16 = 0x10
}

+ (id)agentFromData:(id)arg1;	// IMP=0x0000000100005f00
+ (id)agentType;	// IMP=0x0000000100005ed4
+ (id)agentDomain;	// IMP=0x0000000100005ea8
@property(retain, nonatomic) NWNetworkAgentRegistration *registrationObject; // @synthesize registrationObject=_registrationObject;
@property(copy, nonatomic) NSUUID *agentUUID; // @synthesize agentUUID;
- (void).cxx_destruct;	// IMP=0x0000000100006474
- (_Bool)deregisterAgent;	// IMP=0x0000000100006298
- (_Bool)registerAgent;	// IMP=0x00000001000060a4
- (id)init;	// IMP=0x000000010000600c
@property(nonatomic, getter=isVoluntary) _Bool voluntary;
@property(nonatomic, getter=isUserActivated) _Bool userActivated;
@property(nonatomic, getter=isKernelActivated) _Bool kernelActivated;
@property(nonatomic, getter=isActive) _Bool active;
@property(nonatomic, getter=isNetworkProvider) _Bool networkProvider;
- (id)copyAgentData;	// IMP=0x0000000100005fc8
@property(copy, nonatomic) NSString *agentDescription;

// Remaining properties
@property(nonatomic, getter=isNexusProvider) _Bool nexusProvider;
@property(nonatomic) _Bool requiresAssert;
@property(nonatomic, getter=isSpecificUseOnly) _Bool specificUseOnly;
@property(nonatomic) _Bool supportsBrowseRequests;

@end

