//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

@class PBSDisplayMode, UIViewController;

@interface TVSettingsResolutionViewController : TSKViewController
{
    PBSDisplayMode *_lastDisplayMode;	// 8 = 0x8
    UIViewController *_recoveryController;	// 16 = 0x10
}

@property(nonatomic) __weak UIViewController *recoveryController; // @synthesize recoveryController=_recoveryController;
@property(retain, nonatomic) PBSDisplayMode *lastDisplayMode; // @synthesize lastDisplayMode=_lastDisplayMode;
- (void).cxx_destruct;	// IMP=0x0000000100015364
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100015254
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010001516c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100014fcc
- (void)_selectedItem:(id)arg1;	// IMP=0x0000000100014f7c
- (CDUnknownBlockType)resolutionItemConfigurationBlock;	// IMP=0x0000000100014c3c
- (id)resolutionGroupsForCommonModes:(_Bool)arg1;	// IMP=0x00000001000147d0
- (void)changeModeTo:(id)arg1;	// IMP=0x00000001000144e4
- (void)viewDidLoad;	// IMP=0x0000000100014420
- (void)dealloc;	// IMP=0x0000000100014340
- (id)initWithStyle:(long long)arg1;	// IMP=0x0000000100014220

@end
