//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, _CLRangingPeer;

__attribute__((visibility("hidden")))
@interface SDAutoUnlockRangingPeer : NSObject
{
    _CLRangingPeer *_clRangingPeer;	// 8 = 0x8
    NSData *_macAddressData;	// 16 = 0x10
}

@property(retain, nonatomic) NSData *macAddressData; // @synthesize macAddressData=_macAddressData;
@property(retain, nonatomic) _CLRangingPeer *clRangingPeer; // @synthesize clRangingPeer=_clRangingPeer;
- (void).cxx_destruct;	// IMP=0x00000001000873c0

@end

