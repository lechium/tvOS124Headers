//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SATVStepViewController.h"

#import "SATVActionStep.h"
#import "SATVNetworkConfigurationDelegate.h"

@class NSObject<OS_dispatch_source>, NSString, SATVNetworkReachability, TVSEthernetInterface, TVSWiFiInterface, UIActivityIndicatorView, UIView;

@interface SATVNetworkValidationViewController : SATVStepViewController <SATVNetworkConfigurationDelegate, SATVActionStep>
{
    _Bool standardNavigation;	// 8 = 0x8
    _Bool _observingNetworkInterface;	// 9 = 0x9
    _Bool _shouldWaitForPhysicalInterface;	// 10 = 0xa
    _Bool _observingEthernetNetworkInterface;	// 11 = 0xb
    _Bool _observingWiFiNetworkInterface;	// 12 = 0xc
    _Bool _presentingError;	// 13 = 0xd
    _Bool _interfaceAvailabilityTimerExpired;	// 14 = 0xe
    CDUnknownBlockType completionHandler;	// 16 = 0x10
    UIActivityIndicatorView *_activityIndicatorView;	// 24 = 0x18
    UIView *_activityIndicatorContainerView;	// 32 = 0x20
    SATVNetworkReachability *_networkReachability;	// 40 = 0x28
    TVSEthernetInterface *_ethernetInterface;	// 48 = 0x30
    TVSWiFiInterface *_wiFiInterface;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_interfaceAvailabilityTimer;	// 64 = 0x40
}

+ (id)stableKey;	// IMP=0x0000000100081054
@property(nonatomic) _Bool interfaceAvailabilityTimerExpired; // @synthesize interfaceAvailabilityTimerExpired=_interfaceAvailabilityTimerExpired;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *interfaceAvailabilityTimer; // @synthesize interfaceAvailabilityTimer=_interfaceAvailabilityTimer;
@property(nonatomic, getter=isPresentingError) _Bool presentingError; // @synthesize presentingError=_presentingError;
@property(nonatomic, getter=isObservingWiFiNetworkInterface) _Bool observingWiFiNetworkInterface; // @synthesize observingWiFiNetworkInterface=_observingWiFiNetworkInterface;
@property(nonatomic, getter=isObservingEthernetNetworkInterface) _Bool observingEthernetNetworkInterface; // @synthesize observingEthernetNetworkInterface=_observingEthernetNetworkInterface;
@property(retain, nonatomic) TVSWiFiInterface *wiFiInterface; // @synthesize wiFiInterface=_wiFiInterface;
@property(retain, nonatomic) TVSEthernetInterface *ethernetInterface; // @synthesize ethernetInterface=_ethernetInterface;
@property(retain, nonatomic) SATVNetworkReachability *networkReachability; // @synthesize networkReachability=_networkReachability;
@property(retain, nonatomic) UIView *activityIndicatorContainerView; // @synthesize activityIndicatorContainerView=_activityIndicatorContainerView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic) _Bool shouldWaitForPhysicalInterface; // @synthesize shouldWaitForPhysicalInterface=_shouldWaitForPhysicalInterface;
@property(readonly, nonatomic, getter=isObservingNetworkInterface) _Bool observingNetworkInterface; // @synthesize observingNetworkInterface=_observingNetworkInterface;
@property(nonatomic, getter=isStandardNavigation) _Bool standardNavigation; // @synthesize standardNavigation;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler;
- (void).cxx_destruct;	// IMP=0x000000010008471c
- (_Bool)_isFactoryActivated;	// IMP=0x000000010008437c
- (void)_stopObservingWiFiInterfaceChanges;	// IMP=0x0000000100084178
- (void)_observeWiFiInterfaceChanges;	// IMP=0x0000000100083f78
- (void)_stopObservingEthernetlInterfaceChanges;	// IMP=0x0000000100083d40
- (void)_observeEthernetInterfaceChanges;	// IMP=0x0000000100083b0c
- (void)_pushNetworkConfigurationController;	// IMP=0x00000001000839e8
- (void)_pushWiFiController;	// IMP=0x0000000100083464
- (void)_forgetCurrentWiFiNetwork;	// IMP=0x0000000100083330
- (void)_wiFiConnectionFailed;	// IMP=0x0000000100083154
- (void)_ethernetConnectionFailed;	// IMP=0x0000000100082f74
- (void)_connectionSucceeded;	// IMP=0x0000000100082e54
- (void)_presentReachabilityErrorIsWiFi:(_Bool)arg1 withOKAction:(CDUnknownBlockType)arg2;	// IMP=0x00000001000828d8
- (void)_cancelInterfaceAvailabilityTimer;	// IMP=0x0000000100082894
- (void)_startInterfaceAvailabilityTimerIfNeeded;	// IMP=0x00000001000826a0
- (void)_testReachabilityForWifi;	// IMP=0x00000001000823ec
- (void)_testReachabilityForEthernet;	// IMP=0x0000000100082138
- (void)_testReachabilityForActiveInterfaceIfPossible;	// IMP=0x0000000100081ec0
- (void)_hideActivityIndicator;	// IMP=0x0000000100081e80
- (void)_showActivityIndicator;	// IMP=0x0000000100081e40
- (void)didCompleteNetworkConfiguration;	// IMP=0x0000000100081d40
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100081a2c
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000818d0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100081880
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000817c0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100081718
- (void)autoAdvance;	// IMP=0x0000000100081694
@property(readonly, nonatomic) _Bool isConfigured;
- (void)loadView;	// IMP=0x00000001000811d4
- (void)dealloc;	// IMP=0x0000000100081168
- (id)init;	// IMP=0x0000000100081080

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) CDUnknownBlockType menuHandler;
@property(readonly) Class superclass;

@end

