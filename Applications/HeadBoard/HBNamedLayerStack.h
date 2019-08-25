//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UINamedLayerStack.h"

@class NSArray, NSString, UIImage;

@interface HBNamedLayerStack : NSObject <UINamedLayerStack>
{
    id <UINamedLayerStack> _layerStack;	// 8 = 0x8
    UIImage *_cornerRadiusFlatImage;	// 16 = 0x10
    UIImage *_originalImage;	// 24 = 0x18
    UIImage *_radiosityUIImage;	// 32 = 0x20
    NSArray *_replacementLayers;	// 40 = 0x28
}

+ (id)namedLayerStackWithImage:(id)arg1 cornerRadiusFlatImage:(id)arg2 decodeLayerImagesImmediately:(_Bool)arg3;	// IMP=0x00000001000133c4
+ (id)namedLayerStackWithImage:(id)arg1 cornerRadiusFlatImage:(id)arg2;	// IMP=0x000000010001335c
+ (id)namedLayerStackWithLayers:(id)arg1 cornerRadiusFlatImage:(id)arg2 radiosityImage:(id)arg3;	// IMP=0x0000000100013274
+ (id)namedLayerStackWithLayers:(id)arg1 cornerRadiusFlatImage:(id)arg2;	// IMP=0x000000010001320c
+ (id)namedLayerStackProxyFromLayerStack:(id)arg1 layers:(id)arg2 cornerRadiusFlatImage:(id)arg3;	// IMP=0x0000000100013120
+ (id)namedLayerStackProxyFromLayerStack:(id)arg1 cornerRadiusFlatImage:(id)arg2;	// IMP=0x000000010001306c
@property(copy, nonatomic) NSArray *replacementLayers; // @synthesize replacementLayers=_replacementLayers;
@property(retain, nonatomic) UIImage *radiosityUIImage; // @synthesize radiosityUIImage=_radiosityUIImage;
@property(retain, nonatomic) UIImage *originalImage; // @synthesize originalImage=_originalImage;
@property(retain, nonatomic) UIImage *cornerRadiusFlatImage; // @synthesize cornerRadiusFlatImage=_cornerRadiusFlatImage;
@property(retain, nonatomic) id <UINamedLayerStack> layerStack; // @synthesize layerStack=_layerStack;
- (void).cxx_destruct;	// IMP=0x0000000100013f08
@property(readonly, nonatomic) _Bool flatImageContainsCornerRadius;
@property(readonly, nonatomic) struct CGSize radiosityImageScale;
@property(readonly, nonatomic) id radiosityImage;
@property(readonly, nonatomic) struct CGImage *flattenedImage;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) NSArray *layers;
@property(readonly, nonatomic) NSString *name;
- (id)_init;	// IMP=0x0000000100013038
- (id)init;	// IMP=0x0000000100013020

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

