//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TVSettingsOSUpdateConfiguration : NSObject
{
    _Bool _requiresVPN;	// 8 = 0x8
    _Bool _requiresAppleConnect;	// 9 = 0x9
    NSString *_displayName;	// 16 = 0x10
    NSString *_longDescription;	// 24 = 0x18
    NSString *_uuid;	// 32 = 0x20
    NSString *_requiredProfileURL;	// 40 = 0x28
    NSString *_assetURL;	// 48 = 0x30
    NSString *_brainURL;	// 56 = 0x38
}

@property(nonatomic) _Bool requiresAppleConnect; // @synthesize requiresAppleConnect=_requiresAppleConnect;
@property(nonatomic) _Bool requiresVPN; // @synthesize requiresVPN=_requiresVPN;
@property(copy, nonatomic) NSString *brainURL; // @synthesize brainURL=_brainURL;
@property(copy, nonatomic) NSString *assetURL; // @synthesize assetURL=_assetURL;
@property(copy, nonatomic) NSString *requiredProfileURL; // @synthesize requiredProfileURL=_requiredProfileURL;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *longDescription; // @synthesize longDescription=_longDescription;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;	// IMP=0x000000010005a618
- (unsigned long long)hash;	// IMP=0x000000010005a4e4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010005a404
@property(readonly, nonatomic) _Bool isCarryProfileLoaded;

@end

