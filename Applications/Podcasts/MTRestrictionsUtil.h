//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MTRestrictionsUtil : NSObject
{
}

+ (_Bool)_isRestrictedByAdministrator;	// IMP=0x0000000100020468
+ (_Bool)_supportsExplicitRestrictionAlertOfType:(long long)arg1;	// IMP=0x0000000100020448
+ (_Bool)_fetchIsExplicitContentAllowed;	// IMP=0x00000001000203e4
+ (long long)explicitRestrictionAlertTypeForTypeString:(id)arg1;	// IMP=0x00000001000202f0
+ (void)presentExplicitRestrictionAlertIfNeededOfType:(long long)arg1 presentationCompletion:(CDUnknownBlockType)arg2 actionCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000010001f6c8
+ (void)reloadSettings;	// IMP=0x000000010001f58c
+ (_Bool)isExplicitContentAllowed;	// IMP=0x000000010001f4d0

@end
