//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVHKMediaEntityServerOperation.h"

@class IKAppContext;

@interface TVHMediaEntityServerOperation : TVHKMediaEntityServerOperation
{
    IKAppContext *_appContext;	// 24 = 0x18
}

@property(nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
- (void).cxx_destruct;	// IMP=0x00000001000027c8
- (id)initWithMediaEntityServer:(id)arg1 appContext:(id)arg2;	// IMP=0x00000001000026fc
- (id)initWithMediaEntityServer:(id)arg1;	// IMP=0x0000000100002674

@end

