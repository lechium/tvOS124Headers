//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PBSOSUpdateServiceDelegate.h"

@class NSString, TVSUIOSUpdateView, UITapGestureRecognizer;

@interface TVSettingsOSRestoreViewController : UIViewController <PBSOSUpdateServiceDelegate>
{
    _Bool _cancelOnExit;	// 8 = 0x8
    TVSUIOSUpdateView *_progressView;	// 16 = 0x10
    UITapGestureRecognizer *_menuRecognizer;	// 24 = 0x18
}

@property(retain, nonatomic) UITapGestureRecognizer *menuRecognizer; // @synthesize menuRecognizer=_menuRecognizer;
@property(nonatomic) _Bool cancelOnExit; // @synthesize cancelOnExit=_cancelOnExit;
@property(retain, nonatomic) TVSUIOSUpdateView *progressView; // @synthesize progressView=_progressView;
- (void).cxx_destruct;	// IMP=0x0000000100034124
- (void)_menuButtonAction:(id)arg1;	// IMP=0x0000000100033d48
- (void)osUpdateServiceDidFinishApplyWithData:(id)arg1;	// IMP=0x0000000100033c3c
- (void)osUpdateServiceDidEncounterSlowUpdateWithData:(id)arg1;	// IMP=0x0000000100033c38
- (void)osUpdateServiceDidUpdateApplyProgressWithData:(id)arg1;	// IMP=0x0000000100033c34
- (void)osUpdateServiceDidStartApplyWithData:(id)arg1;	// IMP=0x0000000100033b84
- (void)osUpdateServiceDidStartRedownloadWithData:(id)arg1;	// IMP=0x0000000100033b80
- (void)osUpdateServiceDidFinishDownloadWithData:(id)arg1;	// IMP=0x0000000100033a50
- (void)osUpdateServiceDidUpdateDownloadProgressWithData:(id)arg1;	// IMP=0x0000000100033684
- (void)osUpdateServiceDidStartDownloadWithData:(id)arg1;	// IMP=0x0000000100033680
- (void)osUpdateServiceDidFinishCheckWithData:(id)arg1;	// IMP=0x0000000100033554
- (void)osUpdateServiceDidStartCheckWithData:(id)arg1;	// IMP=0x00000001000334bc
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000001000333dc
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000332ac
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100033074

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

