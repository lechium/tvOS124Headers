//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

@class UILabel;

@interface PBSerialNumberWindow : UIWindow
{
    UILabel *_deviceSerialNumberLabel;	// 8 = 0x8
    UILabel *_remoteSerialNumberLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000dd224
- (void)_updateConnectedPeripheralSerialNumber;	// IMP=0x00000001000dd12c
- (void)_peripheralStateDidChangeNotification:(id)arg1;	// IMP=0x00000001000dd110
- (void)layoutSubviews;	// IMP=0x00000001000dcfb8
- (_Bool)_ignoresHitTest;	// IMP=0x00000001000dcfb0
- (_Bool)_canBecomeKeyWindow;	// IMP=0x00000001000dcfa8
- (void)dealloc;	// IMP=0x00000001000dcee8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000dca60

@end

