//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CLStreamedLocationProviderProtocol;

@interface CLStreamedLocationProviderAssertion : NSObject
{
    id <CLStreamedLocationProviderProtocol> _proxy;	// 8 = 0x8
}

@property(retain, nonatomic) id <CLStreamedLocationProviderProtocol> proxy; // @synthesize proxy=_proxy;
- (void)releaseAssertion;	// IMP=0x00000001001401cc
- (void)takeAssertion;	// IMP=0x0000000100140044
- (void)dealloc;	// IMP=0x000000010013fff8
- (void)invalidate;	// IMP=0x000000010013ffc0
- (id)initInUniverse:(id)arg1;	// IMP=0x000000010013ff2c

@end
