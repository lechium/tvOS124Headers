//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDEngineDatabaseOperation.h"

@class NSString;

@interface DMDEngineRefreshStatusOperation : DMDEngineDatabaseOperation
{
    NSString *_organizationIdentifier;	// 24 = 0x18
}

@property(retain, nonatomic) NSString *organizationIdentifier; // @synthesize organizationIdentifier=_organizationIdentifier;
- (void).cxx_destruct;	// IMP=0x0000000100046364
- (void)performDatabaseModificationOperationWithManagedObjectContext:(id)arg1;	// IMP=0x0000000100045f0c

@end

