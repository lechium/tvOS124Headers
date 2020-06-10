//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSDevice, NSData, NSDate, NSDictionary, NSUUID, SDActivityDecryptionKey, SFActivityAdvertisement;

__attribute__((visibility("hidden")))
@interface SDActivityDeviceRecord : NSObject
{
    NSDate *_lastReceivedAdvertisementDate;	// 8 = 0x8
    _Bool _deviceTracked;	// 16 = 0x10
    _Bool _disableDuplicateFilterOnce;	// 17 = 0x11
    IDSDevice *_idsDevice;	// 24 = 0x18
    NSData *_lastRawAdvertisementData;	// 32 = 0x20
    NSUUID *_lastUsedKeyIdentifier;	// 40 = 0x28
    NSData *_lastAdvertisementData;	// 48 = 0x30
}

@property(readonly, copy, nonatomic) NSData *lastAdvertisementData; // @synthesize lastAdvertisementData=_lastAdvertisementData;
@property(retain, nonatomic) NSUUID *lastUsedKeyIdentifier; // @synthesize lastUsedKeyIdentifier=_lastUsedKeyIdentifier;
@property(readonly, copy, nonatomic) NSData *lastRawAdvertisementData; // @synthesize lastRawAdvertisementData=_lastRawAdvertisementData;
@property(nonatomic) _Bool disableDuplicateFilterOnce; // @synthesize disableDuplicateFilterOnce=_disableDuplicateFilterOnce;
@property(nonatomic) _Bool deviceTracked; // @synthesize deviceTracked=_deviceTracked;
@property(retain, nonatomic) IDSDevice *idsDevice; // @synthesize idsDevice=_idsDevice;
- (void).cxx_destruct;	// IMP=0x00000001000a4a4c
@property(readonly, nonatomic) SFActivityAdvertisement *clientAdvertisement;
@property(readonly, copy, nonatomic) NSDictionary *lastAdvertisementOptions;
@property(readonly, copy, nonatomic) NSData *lastAdvertisementPayload;
@property(readonly, nonatomic) unsigned short lastCounter;
@property(readonly, nonatomic) CDStruct_a3f8c740 lastActivityAdvertisement;
@property(readonly, nonatomic) SDActivityDecryptionKey *decryptionKey;
- (void)updateWithRawAdvertisementData:(id)arg1 receivedViaScanning:(_Bool)arg2 isReplay:(_Bool)arg3 newAdvertisementHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000a369c
- (void)updateWithRawAdvertisementData:(id)arg1 receivedViaScanning:(_Bool)arg2 newAdvertisementHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a3640
- (id)description;	// IMP=0x00000001000a3538
- (id)initWithDevice:(id)arg1;	// IMP=0x00000001000a3494

@end

