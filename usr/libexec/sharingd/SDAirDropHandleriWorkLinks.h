//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDAirDropHandlerGenericLinks.h"

@class NSString, SDAirDropHandlerWebLinks;

__attribute__((visibility("hidden")))
@interface SDAirDropHandleriWorkLinks : SDAirDropHandlerGenericLinks
{
    NSString *_appName;	// 8 = 0x8
    SDAirDropHandlerWebLinks *_webLinksHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100090638
- (void)updatePossibleActions;	// IMP=0x000000010009058c
- (id)suitableContentsDescription;	// IMP=0x000000010009027c
- (id)documentName;	// IMP=0x00000001000901dc
- (id)bundleProxyForiWorkURL:(id)arg1;	// IMP=0x000000010008ffdc
- (long long)transferTypes;	// IMP=0x000000010008ffa4
- (_Bool)canHandleTransfer;	// IMP=0x000000010008fd88
- (id)initWithTransfer:(id)arg1;	// IMP=0x000000010008fd54

@end
