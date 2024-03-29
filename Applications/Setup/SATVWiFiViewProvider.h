//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TVWiFiCertificateTrustDelegate.h"
#import "WFNetworkViewProvider.h"

@class NSString, UIViewController;

@interface SATVWiFiViewProvider : NSObject <TVWiFiCertificateTrustDelegate, WFNetworkViewProvider>
{
    UIViewController *_hostingViewController;	// 8 = 0x8
    id <WFCertificateProviderContext> _certificateContext;	// 16 = 0x10
}

@property(retain, nonatomic) id <WFCertificateProviderContext> certificateContext; // @synthesize certificateContext=_certificateContext;
@property(readonly, nonatomic) UIViewController *hostingViewController; // @synthesize hostingViewController=_hostingViewController;
- (void).cxx_destruct;	// IMP=0x0000000100005774
- (void)certificateViewController:(id)arg1 didCompleteWithAction:(long long)arg2;	// IMP=0x00000001000056f0
- (_Bool)_shouldSkipPresentationForContext:(id)arg1;	// IMP=0x00000001000055bc
- (void)presentNetworkViewController:(id)arg1 forContext:(id)arg2;	// IMP=0x0000000100005420
- (void)dismissNetworkViewController:(id)arg1 forContext:(id)arg2;	// IMP=0x000000010000537c
- (id)certificateViewControllerWithContext:(id)arg1;	// IMP=0x00000001000052d4
- (id)otherNetworkViewControllerWithContext:(id)arg1;	// IMP=0x000000010000526c
- (id)credentialsViewControllerWithContext:(id)arg1;	// IMP=0x0000000100005204
- (id)networkErrorViewControllerWithContext:(id)arg1;	// IMP=0x000000010000519c
- (id)networkDetailsViewControllerWithContext:(id)arg1;	// IMP=0x0000000100005194
- (id)initWithHostingViewController:(id)arg1;	// IMP=0x0000000100005114

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

