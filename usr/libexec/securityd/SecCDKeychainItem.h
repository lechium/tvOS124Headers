//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSUUID, SecCDKeychainAccessControlEntity, SecCDKeychainItemMetadata, SecCDKeychainItemType;

__attribute__((visibility("hidden")))
@interface SecCDKeychainItem : NSObject
{
    SecCDKeychainItemMetadata *_metadata;	// 8 = 0x8
    NSData *_encryptedSecretData;	// 16 = 0x10
    NSDictionary *_secrets;	// 24 = 0x18
    int _keyclass;	// 32 = 0x20
}

@property(readonly) int keyclass; // @synthesize keyclass=_keyclass;
@property(readonly) NSDictionary *secrets; // @synthesize secrets=_secrets;
@property(readonly) SecCDKeychainItemMetadata *metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;	// IMP=0x0000000100026048
- (id)secretsFromEncryptedData:(id)arg1 withKeybag:(int)arg2 error:(id *)arg3;	// IMP=0x0000000100025b18
- (id)encryptedSecretDataWithAttributeData:(id)arg1 keybag:(int)arg2 error:(id *)arg3;	// IMP=0x0000000100025408
- (id)primaryKeyStringRepresentationWithError:(id *)arg1;	// IMP=0x0000000100025018
- (id)primaryKeys;	// IMP=0x0000000100025000
@property(readonly) NSArray *lookupAttributes;
@property(readonly) NSDictionary *attributes;
@property(readonly) NSUUID *persistentID;
@property(readonly) SecCDKeychainAccessControlEntity *owner;
@property(readonly) SecCDKeychainItemType *itemType;
- (id)description;	// IMP=0x0000000100024e24
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100024d1c
- (id)initWithManagedItem:(id)arg1 keychain:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100024a14
- (id)initItemType:(id)arg1 withPersistentID:(id)arg2 attributes:(id)arg3 lookupAttributes:(id)arg4 secrets:(id)arg5 owner:(id)arg6 keyclass:(int)arg7;	// IMP=0x0000000100024894

@end

