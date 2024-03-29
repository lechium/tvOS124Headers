//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NSCopying><NSObject, SecCDKeychainLookupValueType;

__attribute__((visibility("hidden")))
@interface SecCDKeychainLookupTuple : NSObject
{
    NSString *_key;	// 8 = 0x8
    id <NSCopying><NSObject> _value;	// 16 = 0x10
    struct NSString *_valueType;	// 24 = 0x18
}

+ (id)lookupTupleWithManagedLookupEntry:(id)arg1;	// IMP=0x0000000100023f1c
+ (id)lookupTupleWithKey:(id)arg1 value:(id)arg2;	// IMP=0x0000000100023e9c
@property(readonly, copy) NSString<SecCDKeychainLookupValueType> *valueType; // @synthesize valueType=_valueType;
@property(readonly, copy) id <NSCopying><NSObject> value; // @synthesize value=_value;
@property(readonly, copy) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;	// IMP=0x0000000100023e18
@property(readonly, copy) NSString *stringRepresentation;
- (id)description;	// IMP=0x0000000100023cc0
- (unsigned long long)hash;	// IMP=0x0000000100023c4c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100023b30
- (id)initWithKey:(id)arg1 value:(id)arg2;	// IMP=0x0000000100023984

@end

