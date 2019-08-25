//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

@class TSKPreviewViewController;

@interface TVSettingsLanguageViewController : TSKViewController
{
    TSKPreviewViewController *_languagePreviewViewController;	// 8 = 0x8
}

@property(readonly, nonatomic) TSKPreviewViewController *languagePreviewViewController; // @synthesize languagePreviewViewController=_languagePreviewViewController;
- (void).cxx_destruct;	// IMP=0x0000000100095b6c
- (id)_localizedLanguageFormatter;	// IMP=0x0000000100095aa4
- (id)_languageFormatter;	// IMP=0x00000001000959c8
- (void)_warnAboutSiriInLanguage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100094ce4
- (void)setLanguage:(id)arg1;	// IMP=0x00000001000945c8
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x0000000100094464
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100094324
- (void)viewDidLoad;	// IMP=0x0000000100094260
- (id)loadSettingGroups;	// IMP=0x0000000100093e80

@end
