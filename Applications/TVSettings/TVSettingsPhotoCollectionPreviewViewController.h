//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSArray, TVPhotoCollection, TVSettingsDeckImageView;

@interface TVSettingsPhotoCollectionPreviewViewController : UIViewController
{
    TVSettingsDeckImageView *_deckImageView;	// 8 = 0x8
    NSArray *_assetImageProxies;	// 16 = 0x10
    TVPhotoCollection *_photoCollection;	// 24 = 0x18
}

@property(retain, nonatomic) TVPhotoCollection *photoCollection; // @synthesize photoCollection=_photoCollection;
- (void).cxx_destruct;	// IMP=0x00000001000b6aec
- (void)_updateViewWithImageProxies:(id)arg1 inCollection:(id)arg2;	// IMP=0x00000001000b6a40
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000b64d4
- (void)loadView;	// IMP=0x00000001000b6404

@end

