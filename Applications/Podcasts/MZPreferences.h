//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MZPreferences : NSObject
{
}

+ (id)storeBookkeeperPreferences;	// IMP=0x0000000100087f28
- (_Bool)boolForKey:(id)arg1;	// IMP=0x0000000100088324
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x000000010008829c
- (id)objectForKey:(id)arg1 withDefaultValue:(id)arg2;	// IMP=0x0000000100088228
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001000881d4
- (void)registerDefaultsIfKeyNotSet:(id)arg1 registrationBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100088114
- (void)_preferencesDidChange;	// IMP=0x00000001000880b8
- (void)dealloc;	// IMP=0x0000000100088060
- (id)init;	// IMP=0x0000000100087fa8

@end

