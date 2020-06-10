//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDEngineDatabaseOperation.h"

@class DMFRegisterConfigurationSourceRequest, NSString;
@protocol DMDEngineRegisterConfigurationSourceOperationDelegate;

@interface DMDEngineRegisterConfigurationSourceOperation : DMDEngineDatabaseOperation
{
    id <DMDEngineRegisterConfigurationSourceOperationDelegate> _delegate;	// 24 = 0x18
    DMFRegisterConfigurationSourceRequest *_request;	// 32 = 0x20
    NSString *_clientIdentifier;	// 40 = 0x28
}

@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(retain, nonatomic) DMFRegisterConfigurationSourceRequest *request; // @synthesize request=_request;
@property(nonatomic) __weak id <DMDEngineRegisterConfigurationSourceOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100046c4c
- (void)delegateUpdatedDeclarationSourceAndEndOperation:(id)arg1;	// IMP=0x0000000100046b3c
- (void)main;	// IMP=0x0000000100046378

@end

