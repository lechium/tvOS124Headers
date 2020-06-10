//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DeviceType : NSObject
{
    _Bool _is_dev_board;	// 8 = 0x8
    _Bool _is_fpga;	// 9 = 0x9
    _Bool _is_ipod;	// 10 = 0xa
    _Bool _is_ipad;	// 11 = 0xb
    _Bool _has_telephony;	// 12 = 0xc
    _Bool _should_hactivate;	// 13 = 0xd
    _Bool _is_internal_build;	// 14 = 0xe
    _Bool _has_internal_diagnostics;	// 15 = 0xf
    NSString *_product_type;	// 16 = 0x10
    NSString *_device_class;	// 24 = 0x18
    NSString *_hardware_model;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000010000e4c0
@property(readonly, nonatomic) _Bool has_internal_diagnostics; // @synthesize has_internal_diagnostics=_has_internal_diagnostics;
@property(readonly, nonatomic) _Bool is_internal_build; // @synthesize is_internal_build=_is_internal_build;
@property(readonly, nonatomic) _Bool should_hactivate; // @synthesize should_hactivate=_should_hactivate;
@property(readonly, nonatomic) _Bool has_telephony; // @synthesize has_telephony=_has_telephony;
@property(readonly, nonatomic) _Bool is_ipad; // @synthesize is_ipad=_is_ipad;
@property(readonly, nonatomic) _Bool is_ipod; // @synthesize is_ipod=_is_ipod;
@property(readonly, nonatomic) _Bool is_fpga; // @synthesize is_fpga=_is_fpga;
@property(readonly, nonatomic) _Bool is_dev_board; // @synthesize is_dev_board=_is_dev_board;
@property(readonly, copy, nonatomic) NSString *hardware_model; // @synthesize hardware_model=_hardware_model;
@property(readonly, copy, nonatomic) NSString *device_class; // @synthesize device_class=_device_class;
@property(readonly, copy, nonatomic) NSString *product_type; // @synthesize product_type=_product_type;
- (void).cxx_destruct;	// IMP=0x000000010000ed3c
- (id)copyDeviceTreeInt:(id)arg1 key:(id)arg2 defaultValue:(int)arg3;	// IMP=0x000000010000eb3c
- (id)copyBootArgs;	// IMP=0x000000010000ea90
- (id)copyDeviceTreeProperty:(id)arg1 key:(id)arg2;	// IMP=0x000000010000e9dc
- (id)init;	// IMP=0x000000010000e540

@end
