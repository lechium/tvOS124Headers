//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun  9 2020 17:35:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKDigitizerTouchStreamAggregate, BSPortDeathSentinel;

@interface BKDigitizerTouchStreamClient : NSObject
{
    unsigned char _touchStreamIdentifier;
    _Bool _shouldSendAmbiguityRecommendations;
    unsigned char _dispatchMode;
    unsigned char _ambiguityRecommendation;
    _Bool _valid;
    unsigned int _reference;
    unsigned int _contextID;
    unsigned int _taskPort;
    BKDigitizerTouchStreamAggregate *_parent;
    BSPortDeathSentinel *_portDeathSentinel;
}

@property(retain, nonatomic) BSPortDeathSentinel *portDeathSentinel; // @synthesize portDeathSentinel=_portDeathSentinel;
@property(getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(nonatomic) unsigned char ambiguityRecommendation; // @synthesize ambiguityRecommendation=_ambiguityRecommendation;
@property(nonatomic) unsigned char dispatchMode; // @synthesize dispatchMode=_dispatchMode;
@property(nonatomic) _Bool shouldSendAmbiguityRecommendations; // @synthesize shouldSendAmbiguityRecommendations=_shouldSendAmbiguityRecommendations;
@property(nonatomic) unsigned char touchStreamIdentifier; // @synthesize touchStreamIdentifier=_touchStreamIdentifier;
@property(nonatomic) unsigned int taskPort; // @synthesize taskPort=_taskPort;
@property(nonatomic) unsigned int contextID; // @synthesize contextID=_contextID;
@property(nonatomic) BKDigitizerTouchStreamAggregate *parent; // @synthesize parent=_parent;
@property(nonatomic) unsigned int reference; // @synthesize reference=_reference;
- (void)watchForPortDeathOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)description;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end
