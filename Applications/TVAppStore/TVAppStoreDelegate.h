//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVCKAppDelegate.h"

#import "_TVInterfaceCreatingPrivate.h"

@class NSString, TVASAppInstallationJSNotifier, TVASMSOSSOJSNotifier;

@interface TVAppStoreDelegate : TVCKAppDelegate <_TVInterfaceCreatingPrivate>
{
    TVASAppInstallationJSNotifier *_jsNotifier;	// 8 = 0x8
    TVASMSOSSOJSNotifier *_msoNotifier;	// 16 = 0x10
}

@property(retain, nonatomic) TVASMSOSSOJSNotifier *msoNotifier; // @synthesize msoNotifier=_msoNotifier;
@property(retain, nonatomic) TVASAppInstallationJSNotifier *jsNotifier; // @synthesize jsNotifier=_jsNotifier;
- (void).cxx_destruct;	// IMP=0x0000000100012a6c
- (Class)collectionViewCellClassForElement:(id)arg1;	// IMP=0x00000001000129a4
- (id)viewForElement:(id)arg1 existingView:(id)arg2;	// IMP=0x00000001000127b4
- (void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;	// IMP=0x0000000100012604
- (id)init;	// IMP=0x0000000100012394

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

