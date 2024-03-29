//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HBAlertController, HBApp, UIViewController;

@interface HBUninstallConfirmationController : NSObject
{
    _Bool _askedAboutDocumentsPendingUpdates;	// 8 = 0x8
    _Bool _askedAboutApplicationUninstall;	// 9 = 0x9
    _Bool _hasDocumentsInCloud;	// 10 = 0xa
    _Bool _hasPendingDocumentUpdates;	// 11 = 0xb
    _Bool _inProgress;	// 12 = 0xc
    UIViewController *_parentViewController;	// 16 = 0x10
    HBApp *_app;	// 24 = 0x18
    CDUnknownBlockType _completionBlock;	// 32 = 0x20
    HBAlertController *_currentAlertController;	// 40 = 0x28
}

@property(retain, nonatomic) HBAlertController *currentAlertController; // @synthesize currentAlertController=_currentAlertController;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic, getter=isInProgress) _Bool inProgress; // @synthesize inProgress=_inProgress;
@property(nonatomic) _Bool hasPendingDocumentUpdates; // @synthesize hasPendingDocumentUpdates=_hasPendingDocumentUpdates;
@property(nonatomic) _Bool hasDocumentsInCloud; // @synthesize hasDocumentsInCloud=_hasDocumentsInCloud;
@property(nonatomic) _Bool askedAboutApplicationUninstall; // @synthesize askedAboutApplicationUninstall=_askedAboutApplicationUninstall;
@property(nonatomic) _Bool askedAboutDocumentsPendingUpdates; // @synthesize askedAboutDocumentsPendingUpdates=_askedAboutDocumentsPendingUpdates;
@property(retain, nonatomic) HBApp *app; // @synthesize app=_app;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
- (void).cxx_destruct;	// IMP=0x0000000100011700
- (void)_generateUninstallConfirmation;	// IMP=0x0000000100010c38
- (void)_completeUninstallWillRemove:(_Bool)arg1;	// IMP=0x0000000100010b9c
- (void)cancel;	// IMP=0x0000000100010b3c
- (void)startWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010001071c
@property(readonly, nonatomic) _Bool finishedApplicationRemovalConfirmation;
- (id)initWithApplication:(id)arg1 parentViewController:(id)arg2;	// IMP=0x00000001000105f8

@end

