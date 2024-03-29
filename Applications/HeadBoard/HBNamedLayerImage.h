//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UINamedLayerImage.h"

@class NSObject<UINamedLayerImage>, NSString, UIImage;

@interface HBNamedLayerImage : NSObject <UINamedLayerImage>
{
    int _blendMode;	// 8 = 0x8
    NSObject<UINamedLayerImage> *_namedLayerImage;	// 16 = 0x10
    UIImage *_image;	// 24 = 0x18
}

+ (id)namedLayerImageFromNamedLayerImage:(id)arg1 decodeImmediately:(_Bool)arg2;	// IMP=0x00000001000140b8
+ (id)namedLayerImageFromNamedLayerImage:(id)arg1;	// IMP=0x00000001000140a8
+ (id)namedLayerImageWithImage:(id)arg1 decodeImmediately:(_Bool)arg2;	// IMP=0x0000000100013ff0
+ (id)namedLayerImageWithImage:(id)arg1;	// IMP=0x0000000100013fe0
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSObject<UINamedLayerImage> *namedLayerImage; // @synthesize namedLayerImage=_namedLayerImage;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
- (void).cxx_destruct;	// IMP=0x0000000100014548
- (id)imageObj;	// IMP=0x00000001000144d4
@property(nonatomic) _Bool fixedFrame;
@property(readonly, nonatomic) double opacity;
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) NSString *name;
- (id)_init;	// IMP=0x0000000100013f9c
- (id)init;	// IMP=0x0000000100013f84

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

