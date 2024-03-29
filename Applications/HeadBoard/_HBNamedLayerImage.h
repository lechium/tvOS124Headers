//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "UINamedLayerImage.h"

@class NSString, UIImage;

@interface _HBNamedLayerImage : NSObject <UINamedLayerImage, NSCopying>
{
    int _blendMode;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    double _opacity;	// 24 = 0x18
    UIImage *_image;	// 32 = 0x20
    double _scale;	// 40 = 0x28
    struct CGRect _frame;	// 48 = 0x30
}

@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;	// IMP=0x000000010005bbb8
- (id)imageObj;	// IMP=0x000000010005bad4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010005ba04
- (id)initWithCUINamedLayerImage:(id)arg1;	// IMP=0x000000010005b8c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool fixedFrame;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

