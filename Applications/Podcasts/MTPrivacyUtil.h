//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MTPrivacyUtil : NSObject
{
}

+ (void)setCloudSyncVersion:(id)arg1;	// IMP=0x000000010019b54c
+ (id)cloudSyncVersion;	// IMP=0x000000010019b4e8
+ (void)setCloudSyncIsDirty:(_Bool)arg1;	// IMP=0x000000010019b490
+ (_Bool)cloudSyncIsDirty;	// IMP=0x000000010019b434
+ (void)setAccountAgreedTermsVersion:(id)arg1;	// IMP=0x000000010019b3a8
+ (id)accountAgreedTermsVersion;	// IMP=0x000000010019b344
+ (void)setDeviceAgreedTermsVersion:(id)arg1;	// IMP=0x000000010019b2b8
+ (id)deviceAgreedTermsVersion;	// IMP=0x000000010019b254
+ (_Bool)allowReporting;	// IMP=0x000000010019b204
+ (void)resetToInitialState;	// IMP=0x000000010019b1a0
+ (void)markAsAgreedToLatestTerms;	// IMP=0x000000010019b0b0
+ (_Bool)shouldShowTermsScreen;	// IMP=0x000000010019b060

@end

