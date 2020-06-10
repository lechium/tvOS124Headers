//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDEngineDatabaseOperation.h"

@class NSObject;
@protocol DMDDeviceStateProvider;

@interface DMDEngineDatabaseInitializationOperation : DMDEngineDatabaseOperation
{
    NSObject<DMDDeviceStateProvider> *_deviceStateProvider;	// 24 = 0x18
}

@property(retain, nonatomic) NSObject<DMDDeviceStateProvider> *deviceStateProvider; // @synthesize deviceStateProvider=_deviceStateProvider;
- (void).cxx_destruct;	// IMP=0x000000010003f24c
- (_Bool)destroyPersistentStoresWithError:(id *)arg1;	// IMP=0x000000010003edec
- (_Bool)updateMetadataForManagedObjectContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000010003eb9c
- (void)fixupDatabaseWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010003e290
- (void)loadPersistentStoresWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010003dd4c
- (void)destroyLegacyDatabaseIfNeeded;	// IMP=0x000000010003d920
- (void)main;	// IMP=0x000000010003d5fc
- (void)operationWillStart;	// IMP=0x000000010003d5ac
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010003d40c
- (_Bool)isReady;	// IMP=0x000000010003d380
- (void)dealloc;	// IMP=0x000000010003d314

@end
