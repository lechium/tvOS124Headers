//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TVPhotosTopShelfInterface.h"

@class NSString;

@interface TVPhotosTopShelfService : NSObject <TVPhotosTopShelfInterface>
{
}

- (id)_imageWithView:(id)arg1;	// IMP=0x00000001000847a4
- (id)_imageBySquareCroppingImage:(id)arg1;	// IMP=0x0000000100084684
- (id)_darkenImage:(id)arg1;	// IMP=0x00000001000843fc
- (void)_handleResultFromImageManagerWithImage:(id)arg1 memoryInfo:(id)arg2 memory:(id)arg3 featureSpec:(id)arg4 filePath:(id)arg5 cache:(id)arg6;	// IMP=0x0000000100083e4c
- (void)photoAssetsCachePathsFromLocalIdentifiers:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000835c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
