//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLIntersiloServiceProtocol-Protocol.h"

@class CLVisit, NSString;
@protocol CLSignificantVisitManagerClientProtocol;

@protocol CLSignificantVisitManagerProtocol <CLIntersiloServiceProtocol>
- (void)disconnectClient:(byref id <CLSignificantVisitManagerClientProtocol>)arg1;
- (void)simulateVisit:(CLVisit *)arg1;
- (void)stopMonitoringSignificantVisitsForClient:(byref id <CLSignificantVisitManagerClientProtocol>)arg1;
- (void)startMonitoringSignificantVisitsForClient:(byref id <CLSignificantVisitManagerClientProtocol>)arg1 type:(int)arg2;
- (void)connectClient:(byref id <CLSignificantVisitManagerClientProtocol>)arg1 withKey:(NSString *)arg2;
@end
