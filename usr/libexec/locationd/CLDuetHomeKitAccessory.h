//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLDuetHomeKitAccessory : NSObject
{
    NSString *_homeUUID;	// 8 = 0x8
    NSString *_accessoryUUID;	// 16 = 0x10
    NSString *_accessoryName;	// 24 = 0x18
    NSString *_serviceName;	// 32 = 0x20
    NSString *_serviceType;	// 40 = 0x28
    NSString *_characteristicType;	// 48 = 0x30
    NSString *_clientName;	// 56 = 0x38
}

@property(retain, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(retain, nonatomic) NSString *characteristicType; // @synthesize characteristicType=_characteristicType;
@property(retain, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) NSString *accessoryName; // @synthesize accessoryName=_accessoryName;
@property(retain, nonatomic) NSString *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property(retain, nonatomic) NSString *homeUUID; // @synthesize homeUUID=_homeUUID;
- (void)dealloc;	// IMP=0x00000001001a2584
- (id)initWithHomeUUID:(id)arg1 accessoryUUID:(id)arg2 accessoryName:(id)arg3 serviceName:(id)arg4 serviceType:(id)arg5 characteristicType:(id)arg6 clientName:(id)arg7;	// IMP=0x00000001001a247c

@end

