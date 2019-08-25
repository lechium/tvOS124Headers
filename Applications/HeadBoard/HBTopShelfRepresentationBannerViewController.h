//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HBTopShelfBannerViewController.h"

#import "HBTopShelfRepresentationHostProtocol.h"

@class HBTopShelfExtensionMonitor, HBTopShelfRepresentation, NSString;

@interface HBTopShelfRepresentationBannerViewController : HBTopShelfBannerViewController <HBTopShelfRepresentationHostProtocol>
{
    HBTopShelfRepresentation *_representation;	// 8 = 0x8
    HBTopShelfExtensionMonitor *_extensionMonitor;	// 16 = 0x10
}

@property(retain, nonatomic) HBTopShelfExtensionMonitor *extensionMonitor; // @synthesize extensionMonitor=_extensionMonitor;
@property(retain, nonatomic) HBTopShelfRepresentation *representation; // @synthesize representation=_representation;
- (void).cxx_destruct;	// IMP=0x000000010002678c
- (id)_placeholderForUserInterfaceStyle:(long long)arg1;	// IMP=0x0000000100026690
- (unsigned long long)numberOfItemsInCarouselView:(id)arg1;	// IMP=0x000000010002661c
- (void)carouselView:(id)arg1 didPlayItemAtIndex:(unsigned long long)arg2;	// IMP=0x00000001000263d0
- (void)carouselView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;	// IMP=0x00000001000261b8
- (void)configureCell:(id)arg1 forItemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000100025a74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

