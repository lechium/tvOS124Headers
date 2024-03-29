//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSPointerArray, NSString;

@interface BKImageSequence : NSObject
{
    long long _maximumImageCount;	// 8 = 0x8
    double _scale;	// 16 = 0x10
    NSPointerArray *_images;	// 24 = 0x18
    NSBundle *_bundle;	// 32 = 0x20
    NSString *_basename;	// 40 = 0x28
    NSString *_idiomSuffix;	// 48 = 0x30
}

@property(retain, nonatomic) NSString *idiomSuffix; // @synthesize idiomSuffix=_idiomSuffix;
@property(copy, nonatomic) NSString *basename; // @synthesize basename=_basename;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(retain, nonatomic) NSPointerArray *images; // @synthesize images=_images;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) long long maximumImageCount; // @synthesize maximumImageCount=_maximumImageCount;
- (void).cxx_destruct;	// IMP=0x0000000100027be0
- (void)_loadAllImages;	// IMP=0x0000000100027ad4
- (struct CGImage *)_imageAtIndex:(long long)arg1;	// IMP=0x0000000100027840
- (id)_idiomSuffix;	// IMP=0x0000000100027760
- (struct CGImage *)_createImageForIndex:(unsigned long long)arg1 basename:(id)arg2 scale:(double)arg3 idiom:(id)arg4 bundle:(id)arg5;	// IMP=0x0000000100027488
- (id)allImages;	// IMP=0x000000010002744c
- (struct CGImage *)imageAtIndex:(long long)arg1;	// IMP=0x0000000100027440
- (id)initWithBasename:(id)arg1 bundle:(id)arg2 imageCount:(long long)arg3 scale:(double)arg4;	// IMP=0x00000001000272d8

@end

