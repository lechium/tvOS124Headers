//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKRecordID, NSMutableSet;

@interface GKInviteURLManager : NSObject
{
    CKRecordID *_mostRecentInviteShareRootRecordID;	// 8 = 0x8
    NSMutableSet *_acceptingInProgressRecordIDs;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x00000001000de70c
@property(retain, nonatomic) NSMutableSet *acceptingInProgressRecordIDs; // @synthesize acceptingInProgressRecordIDs=_acceptingInProgressRecordIDs;
@property(retain, nonatomic) CKRecordID *mostRecentInviteShareRootRecordID; // @synthesize mostRecentInviteShareRootRecordID=_mostRecentInviteShareRootRecordID;
- (void).cxx_destruct;	// IMP=0x00000001000deaac
- (id)init;	// IMP=0x00000001000de9e0

@end

