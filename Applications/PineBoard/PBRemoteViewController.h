//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UIRemoteViewController.h"

#import "PBSViewServiceInterface.h"

@class NSHashTable, NSString;

@interface PBRemoteViewController : _UIRemoteViewController <PBSViewServiceInterface>
{
    _Bool _dismissalInProgressFlag;	// 8 = 0x8
    NSHashTable *_pendingDismissalCompletionBlocks;	// 16 = 0x10
    CDUnknownBlockType _dismissResultHandler;	// 24 = 0x18
    CDUnknownBlockType _terminationHandler;	// 32 = 0x20
}

+ (id)exportedInterface;	// IMP=0x000000010002bc08
+ (id)serviceViewControllerInterface;	// IMP=0x000000010002b9f8
@property(copy, nonatomic) CDUnknownBlockType terminationHandler; // @synthesize terminationHandler=_terminationHandler;
@property(copy, nonatomic) CDUnknownBlockType dismissResultHandler; // @synthesize dismissResultHandler=_dismissResultHandler;
- (void).cxx_destruct;	// IMP=0x000000010002be3c
- (void)_parentViewControllerDismissAnimated:(_Bool)arg1;	// IMP=0x000000010002b964
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x000000010002b8c4
- (void)dismissWithResult:(id)arg1;	// IMP=0x000000010002b68c
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002b1b4
- (void)_sendViewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002acdc
- (void)updateViewServiceWithOptions:(id)arg1;	// IMP=0x000000010002ac6c
- (void)messageViewServiceWithMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010002ab38
- (void)prepareViewServiceWithOptions:(id)arg1;	// IMP=0x000000010002aac8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

