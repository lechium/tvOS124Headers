//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKEventDestination, BKIOHIDService;

@interface BKTouchPadInfo : NSObject
{
    _Bool _determinedMaxForce;	// 8 = 0x8
    float _maxForce;	// 12 = 0xc
    BKIOHIDService *_service;	// 16 = 0x10
    BKEventDestination *_currentDestination;	// 24 = 0x18
    long long _touchCount;	// 32 = 0x20
}

@property(nonatomic) _Bool determinedMaxForce; // @synthesize determinedMaxForce=_determinedMaxForce;
@property(nonatomic) float maxForce; // @synthesize maxForce=_maxForce;
@property(nonatomic) long long touchCount; // @synthesize touchCount=_touchCount;
@property(retain, nonatomic) BKEventDestination *currentDestination; // @synthesize currentDestination=_currentDestination;
@property(retain, nonatomic) BKIOHIDService *service; // @synthesize service=_service;
- (id)description;	// IMP=0x000000010000de6c
- (void)dealloc;	// IMP=0x000000010000ddfc

@end

