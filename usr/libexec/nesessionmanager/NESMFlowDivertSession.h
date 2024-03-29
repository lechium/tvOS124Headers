//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NESMVPNSession.h"

#import "NEFlowDivertPluginDelegate-Protocol.h"

@class NSData;

@interface NESMFlowDivertSession : NESMVPNSession <NEFlowDivertPluginDelegate>
{
    unsigned int _flowDivertControlUnit;	// 8 = 0x8
    struct NEVirtualInterface_s *_flowDivertDNSVirtualInterface;	// 16 = 0x10
    NSData *_flowDivertTokenHMACKey;	// 24 = 0x18
    struct __SCDynamicStore *_scstore;	// 32 = 0x20
}

@property struct __SCDynamicStore *scstore; // @synthesize scstore=_scstore;
@property(retain) NSData *flowDivertTokenHMACKey; // @synthesize flowDivertTokenHMACKey=_flowDivertTokenHMACKey;
@property struct NEVirtualInterface_s *flowDivertDNSVirtualInterface; // @synthesize flowDivertDNSVirtualInterface=_flowDivertDNSVirtualInterface;
@property unsigned int flowDivertControlUnit; // @synthesize flowDivertControlUnit=_flowDivertControlUnit;
- (void).cxx_destruct;	// IMP=0x0000000100021790
- (void)handleInstalledAppsChanged;	// IMP=0x00000001000211e0
- (void)pluginDidClearConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002118c
- (void)plugin:(id)arg1 didSetConfiguration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100020f40
- (void)plugin:(id)arg1 didRequestDNSInterfaceOperationWithDelegateInterfaceIndex:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100020bf4
- (int)pluginDidRequestFlowDivertControlSocket:(id)arg1;	// IMP=0x0000000100020990
- (void)handleGetInfoMessage:(id)arg1 withType:(int)arg2;	// IMP=0x0000000100020704
- (void)uninstall;	// IMP=0x00000001000203e4
- (void)install;	// IMP=0x000000010001fecc
- (void)requestInstall;	// IMP=0x000000010001fe50
- (void)setConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010001f0c0
- (_Bool)dictionary:(id)arg1 isEqualToDynamicStoreStateForKey:(id)arg2;	// IMP=0x000000010001f020
- (void)initializePluginsAlertWhenDisabled:(_Bool)arg1;	// IMP=0x000000010001ef48
- (void)dealloc;	// IMP=0x000000010001eee4
- (id)initWithConfiguration:(id)arg1 andServer:(id)arg2 andProtocol:(id)arg3 andPluginType:(id)arg4;	// IMP=0x000000010001ee30

@end

