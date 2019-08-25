//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXOneUpPresentationImplementationDelegate.h"
#import "TVPPhotoLibraryOneUpViewControllerDelegate.h"

@class NSString, PXOneUpPresentation;

@interface TVOneUpPresentationImplementationDelegate : NSObject <PXOneUpPresentationImplementationDelegate, TVPPhotoLibraryOneUpViewControllerDelegate>
{
    PXOneUpPresentation *_presentation;	// 8 = 0x8
}

@property(retain, nonatomic) PXOneUpPresentation *presentation; // @synthesize presentation=_presentation;
- (void).cxx_destruct;	// IMP=0x000000010001151c
- (id)previewViewControllerForOneUpPresentation:(id)arg1 allowingActions:(_Bool)arg2;	// IMP=0x00000001000114f0
- (void)photoLibraryOneUpControllerWillPop:(id)arg1;	// IMP=0x00000001000112f4
- (void)oneUpPresentation:(id)arg1 commitPreviewViewController:(id)arg2;	// IMP=0x00000001000112f0
- (void)oneUpPresentation:(id)arg1 didDismissPreviewViewController:(id)arg2 committing:(_Bool)arg3;	// IMP=0x00000001000112ec
- (void)oneUpPresentation:(id)arg1 stopAnimated:(_Bool)arg2;	// IMP=0x00000001000112e8
- (_Bool)oneUpPresentation:(id)arg1 startAnimated:(_Bool)arg2 interactiveMode:(long long)arg3;	// IMP=0x0000000100010f30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
