//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDActivityRequestRecord.h"

@class NSData, NSString, RPCompanionLinkClient;

__attribute__((visibility("hidden")))
@interface SDActivityPayloadRequestRecord : SDActivityRequestRecord
{
    NSData *_advertisementPayload;	// 64 = 0x40
    NSString *_command;	// 72 = 0x48
    RPCompanionLinkClient *_linkClient;	// 80 = 0x50
}

@property(retain, nonatomic) RPCompanionLinkClient *linkClient; // @synthesize linkClient=_linkClient;
@property(copy, nonatomic) NSString *command; // @synthesize command=_command;
@property(copy, nonatomic) NSData *advertisementPayload; // @synthesize advertisementPayload=_advertisementPayload;
- (void).cxx_destruct;	// IMP=0x00000001000915b4
- (id)description;	// IMP=0x00000001000913f8
- (void)dealloc;	// IMP=0x00000001000913a0

@end

