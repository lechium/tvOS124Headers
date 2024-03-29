//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATOperation.h>

@class CEMImageAssetInstallMetadata, CEMImageDeclaration;

@interface CEMImageRemoveOperation : CATOperation
{
    CEMImageDeclaration *_imageDeclaration;	// 24 = 0x18
    CEMImageAssetInstallMetadata *_installMetadata;	// 32 = 0x20
}

@property(retain, nonatomic) CEMImageAssetInstallMetadata *installMetadata; // @synthesize installMetadata=_installMetadata;
@property(retain, nonatomic) CEMImageDeclaration *imageDeclaration; // @synthesize imageDeclaration=_imageDeclaration;
- (void).cxx_destruct;	// IMP=0x0000000100007e20
- (void)main;	// IMP=0x0000000100007c98
- (id)initWithImageDeclaration:(id)arg1 installMetadata:(id)arg2;	// IMP=0x0000000100007be4

@end

