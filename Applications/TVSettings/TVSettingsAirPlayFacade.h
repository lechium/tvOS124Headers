//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSFormatter, NSString, PBSAirPlaySettings, TSKMappingFormatter;

@interface TVSettingsAirPlayFacade : NSObject
{
    PBSAirPlaySettings *_settings;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000001000060c4
+ (id)keyPathsForValuesAffectingLocalizedAllowAccessShortDescription;	// IMP=0x0000000100006078
+ (id)keyPathsForValuesAffectingRequireCodeEveryTime;	// IMP=0x0000000100006038
+ (id)keyPathsForValuesAffectingSecurityMode;	// IMP=0x0000000100005ff8
+ (id)keyPathsForValuesAffectingAccessMode;	// IMP=0x0000000100005fb8
@property(readonly, nonatomic) PBSAirPlaySettings *settings; // @synthesize settings=_settings;
- (void).cxx_destruct;	// IMP=0x00000001000076e8
@property(readonly, nonatomic) NSFormatter *roomNameFormatter;
@property(readonly, nonatomic) NSString *localizedAllowAccessShortDescription;
@property(nonatomic, getter=isEveryTimeCodeRequired) _Bool everyTimeCodeRequired;
@property(readonly, copy, nonatomic) NSArray *availableSecurityModes;
@property(nonatomic) unsigned long long securityMode;
@property(readonly, nonatomic) TSKMappingFormatter *accessDescriptionFormatter;
@property(readonly, nonatomic) TSKMappingFormatter *accessValueFormatter;
@property(readonly, nonatomic) TSKMappingFormatter *securityDescriptionFormatter;
@property(readonly, copy, nonatomic) NSArray *availableAccessModes;
@property(nonatomic) unsigned long long accessMode;

@end
