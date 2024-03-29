//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GEONameInfo, GEONavigationGuidanceState, GEONavigationListener, GEONavigationRouteSummary, GEONavigationRouteTransitSummary, NSArray, NSData, NSString;

@protocol GEONavigationListenerDelegate <NSObject>

@optional
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdateNavigationVoiceVolume:(int)arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdatePositionFromDestination:(CDStruct_2c43369c)arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdatePositionFromManeuver:(CDStruct_2c43369c)arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdatePositionFromSign:(CDStruct_2c43369c)arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdateRideSelections:(NSArray *)arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdateStepNameInfo:(GEONameInfo *)arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdateStepIndex:(unsigned long long)arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdateCurrentRoadName:(NSString *)arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdateTrafficIncidentAlertDetailsData:(NSData *)arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdateActiveRouteData:(NSData *)arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdateGuidanceState:(GEONavigationGuidanceState *)arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdateTransitSummary:(GEONavigationRouteTransitSummary *)arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdateRouteSummary:(GEONavigationRouteSummary *)arg2;
@end

