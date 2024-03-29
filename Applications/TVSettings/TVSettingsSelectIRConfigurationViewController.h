//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

@class NSArray, PBSExternalControlSystem;

@interface TVSettingsSelectIRConfigurationViewController : TSKViewController
{
    PBSExternalControlSystem *_externalControlSystem;	// 8 = 0x8
    NSArray *_cachedIRVolumeButtonConfiguration;	// 16 = 0x10
}

@property(copy, nonatomic) NSArray *cachedIRVolumeButtonConfiguration; // @synthesize cachedIRVolumeButtonConfiguration=_cachedIRVolumeButtonConfiguration;
@property(retain, nonatomic) PBSExternalControlSystem *externalControlSystem; // @synthesize externalControlSystem=_externalControlSystem;
- (void).cxx_destruct;	// IMP=0x000000010007d010
- (void)_didSelectEditConfigurations;	// IMP=0x000000010007cf14
- (void)_didSelectAddConfiguration;	// IMP=0x000000010007cb00
- (void)_didSelectOffValue;	// IMP=0x000000010007c924
- (void)_didSelectConfiguration:(id)arg1;	// IMP=0x000000010007c85c
- (void)_didSelectAutoValue;	// IMP=0x000000010007c7c4
- (void)_externalControlSystemConfigurationChanged;	// IMP=0x000000010007c7b8
- (void)_remotePolicyChanged;	// IMP=0x000000010007c7ac
- (void)_cacheIRVolumeButtonConfigurations;	// IMP=0x000000010007c6ec
- (id)loadSettingGroups;	// IMP=0x000000010007bc38
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010007bbe8
- (void)viewDidLoad;	// IMP=0x000000010007bb20
- (void)dealloc;	// IMP=0x000000010007baa8
- (id)init;	// IMP=0x000000010007b9c8

@end

