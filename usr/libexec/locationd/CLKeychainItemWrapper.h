//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CLKeychainItemWrapper : NSObject
{
    NSMutableDictionary *_keychainItemData;	// 8 = 0x8
    NSMutableDictionary *_genericPasswordQuery;	// 16 = 0x10
}

@property(retain, nonatomic) NSMutableDictionary *genericPasswordQuery; // @synthesize genericPasswordQuery=_genericPasswordQuery;
@property(retain, nonatomic) NSMutableDictionary *keychainItemData; // @synthesize keychainItemData=_keychainItemData;
- (void)writeToKeychain;	// IMP=0x00000001001a33f0
- (id)secItemFormatToDictionary:(id)arg1;	// IMP=0x00000001001a30f8
- (id)dictionaryToSecItemFormat:(id)arg1;	// IMP=0x00000001001a2efc
- (void)resetKeychainItem;	// IMP=0x00000001001a2dfc
- (id)objectForKey:(id)arg1;	// IMP=0x00000001001a2dc8
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001001a2d34
- (void)dealloc;	// IMP=0x00000001001a2cb4
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000001001a2a78

@end
