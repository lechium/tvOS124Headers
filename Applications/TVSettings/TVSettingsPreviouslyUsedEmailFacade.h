//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface TVSettingsPreviouslyUsedEmailFacade : NSObject
{
    NSArray *_previouslyUsedEmails;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000001000af960
@property(copy, nonatomic) NSArray *previouslyUsedEmails; // @synthesize previouslyUsedEmails=_previouslyUsedEmails;
- (void).cxx_destruct;	// IMP=0x00000001000afd68
- (void)clearAllEntriesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000afc88
- (void)deleteEntry:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000afb6c
- (void)update;	// IMP=0x00000001000afae4
- (id)init;	// IMP=0x00000001000afa1c

@end
