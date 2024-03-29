//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CDDFakeDevice : NSObject
{
    _Bool _isNearby;	// 8 = 0x8
    _Bool _isDefaultPairedDevice;	// 9 = 0x9
    NSString *_modelIdentifier;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSString *_service;	// 32 = 0x20
    NSString *_idsIdentifier;	// 40 = 0x28
    NSString *_uniqueID;	// 48 = 0x30
}

@property(nonatomic) _Bool isDefaultPairedDevice; // @synthesize isDefaultPairedDevice=_isDefaultPairedDevice;
@property(nonatomic) _Bool isNearby; // @synthesize isNearby=_isNearby;
@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(retain, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property(retain, nonatomic) NSString *service; // @synthesize service=_service;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *modelIdentifier; // @synthesize modelIdentifier=_modelIdentifier;
- (void).cxx_destruct;	// IMP=0x000000010001000c

@end

