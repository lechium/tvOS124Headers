//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class RPPerson;

@protocol RPPeopleXPCClientInterface
- (void)xpcPersonChanged:(RPPerson *)arg1 changes:(unsigned int)arg2;
- (void)xpcPersonLost:(RPPerson *)arg1;
- (void)xpcPersonFound:(RPPerson *)arg1;
@end

