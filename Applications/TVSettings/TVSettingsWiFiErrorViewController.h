//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "WFNetworkView.h"

@class TVSUITextAlertController;

@interface TVSettingsWiFiErrorViewController : UIViewController <WFNetworkView>
{
    id <WFErrorProviderContext> _context;	// 8 = 0x8
    TVSUITextAlertController *_alertController;	// 16 = 0x10
}

@property(retain, nonatomic) TVSUITextAlertController *alertController; // @synthesize alertController=_alertController;
@property(readonly, nonatomic) id <WFErrorProviderContext> context; // @synthesize context=_context;
- (void).cxx_destruct;	// IMP=0x0000000100043fe4
@property(readonly, nonatomic) _Bool wantsModalPresentation;
- (id)preferredFocusEnvironments;	// IMP=0x0000000100043f90
- (void)viewDidLoad;	// IMP=0x0000000100043c6c
- (id)initWithContext:(id)arg1;	// IMP=0x0000000100043bd0

@end
