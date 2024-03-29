//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NEPolicySession, NSMutableArray;

@interface NESMPolicyMasterSession : NSObject
{
    unsigned int _currentFilterUnit;	// 8 = 0x8
    NEPolicySession *_policySession;	// 16 = 0x10
    NSMutableArray *_pathRuleFilterPolicyIDs;	// 24 = 0x18
}

+ (id)sharedMasterSession;	// IMP=0x0000000100046aa4
@property(retain) NSMutableArray *pathRuleFilterPolicyIDs; // @synthesize pathRuleFilterPolicyIDs=_pathRuleFilterPolicyIDs;
@property unsigned int currentFilterUnit; // @synthesize currentFilterUnit=_currentFilterUnit;
@property(retain) NEPolicySession *policySession; // @synthesize policySession=_policySession;
- (void).cxx_destruct;	// IMP=0x0000000100047244
- (_Bool)unregisterSession:(id)arg1;	// IMP=0x0000000100047140
- (_Bool)registerSession:(id)arg1;	// IMP=0x0000000100047094
- (_Bool)apply;	// IMP=0x0000000100046fa0
- (_Bool)removeAllPolicies:(id)arg1;	// IMP=0x0000000100046dd0
- (_Bool)addPolicy:(id)arg1 policyIDList:(id)arg2;	// IMP=0x0000000100046b24
- (id)initPrivate;	// IMP=0x000000010004669c
- (id)init;	// IMP=0x0000000100046674

@end

