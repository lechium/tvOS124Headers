//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_PBImageProcessingOperation.h"

@interface _PBWallpaperGenerateOperation : _PBImageProcessingOperation
{
    CDUnknownBlockType _generationBlock;	// 40 = 0x28
}

@property(readonly, copy, nonatomic) CDUnknownBlockType generationBlock; // @synthesize generationBlock=_generationBlock;
- (void).cxx_destruct;	// IMP=0x0000000100058bb4
- (void)cancel;	// IMP=0x0000000100058b50
- (void)main;	// IMP=0x00000001000588c0
- (id)initWithGenerationBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100058828

@end

