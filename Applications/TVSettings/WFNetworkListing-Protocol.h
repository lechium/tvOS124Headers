//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, NSString, UIViewController<WFAccessoryViewController>;

@protocol WFNetworkListing <NSObject>
@property long long currentNetworkState;
@property(retain) id <WFNetworkListRecord> currentNetwork;
@property float currentNetworkScaledRSSI;
@property(nonatomic) _Bool showOtherNetwork;
- (void)powerStateDidChange:(_Bool)arg1;
- (void)refresh;
- (void)setListDelegate:(id <WFNetworkListDelegate>)arg1;
- (void)setNetworks:(NSSet *)arg1;

@optional
@property(nonatomic) _Bool userAutoJoinEnabled;
@property(nonatomic) _Bool disabled;
@property(copy, nonatomic) NSString *currentNetworkSubtitle;
@property(nonatomic) long long deviceCapability;
@property unsigned long long currentNetworkSignalBars;
- (void)setCurrentNetwork:(id <WFNetworkListRecord>)arg1 previousNetwork:(id <WFNetworkListRecord>)arg2 reason:(unsigned long long)arg3;
- (void)updateViewsForNetworks:(NSSet *)arg1;
- (_Bool)supportsHealthRecommendations;
- (_Bool)supportsWiFiPasswordSharing;
- (void)networkListDelegateDidPresentAccessoryViewController:(UIViewController<WFAccessoryViewController> *)arg1;
- (void)networkListDelegateWillPresentAccessoryViewController:(UIViewController<WFAccessoryViewController> *)arg1;
- (_Bool)shouldPromptWhenCarPlaySessionIsActive;
- (_Bool)shouldPromptWhenPersonalHotspotIsEnabled;
- (void)setScanning:(_Bool)arg1;
@end

