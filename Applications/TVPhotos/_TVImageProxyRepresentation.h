//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVPImageRepresentation.h"

@class TVImageProxy;

@interface _TVImageProxyRepresentation : TVPImageRepresentation
{
    TVImageProxy *_imageProxy;	// 80 = 0x50
    struct CGImage *_originalImage;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000001000126a8
- (id)_originalImageCacheKey;	// IMP=0x0000000100012624
- (struct CGImage *)_originalImage;	// IMP=0x00000001000123fc
- (void)loadImageWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100012150
- (void)dealloc;	// IMP=0x00000001000120e4
- (id)initWithImageProxy:(id)arg1;	// IMP=0x000000010001204c

@end

