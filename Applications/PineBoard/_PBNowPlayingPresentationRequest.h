//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _PBNowPlayingPresentationRequest : NSObject
{
    _Bool _forPresentation;	// 8 = 0x8
    unsigned long long _reason;	// 16 = 0x10
}

+ (id)requestForPresentation:(_Bool)arg1 reason:(unsigned long long)arg2;	// IMP=0x0000000100088574
@property(nonatomic) unsigned long long reason; // @synthesize reason=_reason;
@property(nonatomic) _Bool forPresentation; // @synthesize forPresentation=_forPresentation;

@end

