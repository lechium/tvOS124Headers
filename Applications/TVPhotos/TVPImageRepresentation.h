//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TVPImageRepresentation : NSObject
{
    _Bool _fixedFrame;	// 8 = 0x8
    struct CGRect _sourceRect;	// 16 = 0x10
    struct CGRect _destinationRect;	// 48 = 0x30
}

+ (id)_loadingQueue;	// IMP=0x0000000100011ba8
+ (id)imageRepresentationWithNamedLayerImage:(id)arg1;	// IMP=0x0000000100011780
+ (id)imageRepresentationWithImageProxy:(id)arg1;	// IMP=0x0000000100011718
+ (id)imageRepresentationWithImage:(id)arg1;	// IMP=0x00000001000116b0
+ (id)imageRepresentationWithURL:(id)arg1;	// IMP=0x00000001000115d8
+ (id)imageRepresentationWithImageNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3;	// IMP=0x0000000100011530
@property(nonatomic, getter=isFixedFrame) _Bool fixedFrame; // @synthesize fixedFrame=_fixedFrame;
@property(nonatomic) struct CGRect destinationRect; // @synthesize destinationRect=_destinationRect;
@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
- (id)_originalImageCacheKey;	// IMP=0x0000000100011ba0
- (struct CGImage *)_originalImage;	// IMP=0x0000000100011ad8
- (struct CGImage *)_imageForOriginalImage:(struct CGImage *)arg1;	// IMP=0x0000000100011a44
- (void)loadImageWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010001193c
- (struct CGImage *)newImage;	// IMP=0x00000001000118e8
@property(readonly, nonatomic) NSString *cacheKey;

@end

