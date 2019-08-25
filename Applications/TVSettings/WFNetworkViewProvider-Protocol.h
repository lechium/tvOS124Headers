//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController<WFNetworkView>, UIViewController<WFNetworkView><WFCredentialsProvider>, UIViewController<WFOtherNetworkProvider>;

@protocol WFNetworkViewProvider <NSObject>
- (UIViewController<WFNetworkView> *)networkErrorViewControllerWithContext:(id <WFErrorProviderContext>)arg1;
- (UIViewController<WFNetworkView> *)networkDetailsViewControllerWithContext:(id <WFDetailsProviderContext>)arg1;
- (UIViewController<WFNetworkView> *)certificateViewControllerWithContext:(id <WFCertificateProviderContext>)arg1;
- (UIViewController<WFNetworkView><WFCredentialsProvider> *)credentialsViewControllerWithContext:(id <WFCredentialsProviderContext>)arg1;

@optional
- (void)presentNetworkViewController:(UIViewController<WFNetworkView> *)arg1 forContext:(id <WFProviderContext>)arg2;
- (void)dismissNetworkViewController:(UIViewController<WFNetworkView> *)arg1 forContext:(id <WFProviderContext>)arg2;
- (void)didDismissNetworkViewController:(UIViewController<WFNetworkView> *)arg1 forContext:(id <WFProviderContext>)arg2;
- (UIViewController<WFOtherNetworkProvider> *)otherNetworkViewControllerWithContext:(id <WFOtherNetworkProviderContext>)arg1;
@end

