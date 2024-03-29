//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AXElement, PBSiriScreenActionApplication;

@interface PBSiriScreenActionManager : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    id <PBSiriScreenActionManagerDelegate> _delegate;	// 16 = 0x10
    AXElement *_systemApplicationElement;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00000001000c213c
@property(retain, nonatomic) AXElement *systemApplicationElement; // @synthesize systemApplicationElement=_systemApplicationElement;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <PBSiriScreenActionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001000c25e0
@property(readonly, nonatomic) AXElement *currentApplicationElement;
@property(readonly, nonatomic) PBSiriScreenActionApplication *currentScreenActionApplication;
- (id)_init;	// IMP=0x00000001000c2230
- (id)init;	// IMP=0x00000001000c21f0

@end

