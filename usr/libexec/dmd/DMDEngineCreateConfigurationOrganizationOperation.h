//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDEngineDatabaseOperation.h"

@class DMFCreateConfigurationOrganizationRequest;

@interface DMDEngineCreateConfigurationOrganizationOperation : DMDEngineDatabaseOperation
{
    DMFCreateConfigurationOrganizationRequest *_request;	// 24 = 0x18
}

@property(retain, nonatomic) DMFCreateConfigurationOrganizationRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;	// IMP=0x000000010003d300
- (void)performDatabaseModificationOperationWithManagedObjectContext:(id)arg1;	// IMP=0x000000010003cc64

@end

