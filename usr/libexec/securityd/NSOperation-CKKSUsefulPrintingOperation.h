//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@interface NSOperation (CKKSUsefulPrintingOperation)
- (void)removeDependenciesUponCompletion;	// IMP=0x000000010005ae44
- (void)addNullableDependency:(id)arg1;	// IMP=0x000000010005ae30
- (_Bool)isPending;	// IMP=0x000000010005add4
- (id)debugDescription;	// IMP=0x000000010005ac8c
- (id)description;	// IMP=0x000000010005ab4c
- (id)pendingDependenciesString:(id)arg1;	// IMP=0x000000010005aa08
- (void)linearDependenciesWithSelfFirst:(id)arg1;	// IMP=0x000000010005a810
- (void)linearDependencies:(id)arg1;	// IMP=0x000000010005a680
- (id)selfname;	// IMP=0x000000010005a5a4
@end
