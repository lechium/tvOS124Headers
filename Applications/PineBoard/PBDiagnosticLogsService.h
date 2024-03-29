//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBSDiagnosticLogsServiceInterface.h"

@class NSString, PBSystemServiceConnection;

@interface PBDiagnosticLogsService : NSObject <PBSDiagnosticLogsServiceInterface>
{
    PBSystemServiceConnection *_remoteConnection;	// 8 = 0x8
}

@property(readonly, nonatomic) PBSystemServiceConnection *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
- (void).cxx_destruct;	// IMP=0x0000000100009444
- (void)incrementScalarKey:(id)arg1;	// IMP=0x0000000100009348
- (void)diagnosticLogPathsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100009204
- (void)invalidate;	// IMP=0x0000000100009200
- (id)initWithRemoteConnection:(id)arg1;	// IMP=0x0000000100009180
- (id)init;	// IMP=0x0000000100009168

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

