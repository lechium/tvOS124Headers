//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDConfigurationSourceTaskOperation.h"

@protocol DMDRemoteAssetResolutionContext;

@interface DMDConfigurationSourceAssetResolveOperation : DMDConfigurationSourceTaskOperation
{
    id <DMDRemoteAssetResolutionContext> _context;	// 24 = 0x18
}

@property(retain, nonatomic) id <DMDRemoteAssetResolutionContext> context; // @synthesize context=_context;
- (void).cxx_destruct;	// IMP=0x0000000100036c88
- (void)main;	// IMP=0x0000000100036720
- (_Bool)isAsynchronous;	// IMP=0x0000000100036718

@end
