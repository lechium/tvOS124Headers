//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceProtocol-Protocol.h"

@class CLLocation, NSString;

@protocol CLNetworkLocationProviderProtocol <CLNotifierServiceProtocol>
- (int)syncgetQueryLocationsForCells:(const vector_096a3675 *)arg1 wifis:(const vector_81654e89 *)arg2 useCache:(_Bool)arg3;
- (int)syncgetQueryLocationsForGsm:(const vector_6fcb333c *)arg1 scdma:(const vector_cead180e *)arg2 cdma:(const vector_ec4aa6bf *)arg3 lte:(const vector_ac0eb896 *)arg4 wifis:(const vector_81654e89 *)arg5 useCache:(_Bool)arg6 isPiggybackNearbyWifis:(_Bool)arg7 isPiggybackNearbyCells:(_Bool)arg8;
- (int)syncgetBestMatchLocation:(struct CLDaemonLocation *)arg1 forCell:(const struct CLCell *)arg2;
- (void)resetRetryCounters:(NSString *)arg1;
- (void)removeResponseListener:(struct CLNetworkLocationServerResponseListener *)arg1;
- (void)addResponseListener:(struct CLNetworkLocationServerResponseListener *)arg1;
- (int)syncgetQueryNearbys:(const struct CLDaemonLocation *)arg1 forFenceKeys:(const vector_3203cf93 *)arg2;
- (_Bool)syncgetMetric:(struct LocationNetworkQueries *)arg1;
- (void)setPrivateMode:(_Bool)arg1;
- (_Bool)syncgetIsBroadConnection;
- (void)setLocation_LTE:(CLLocation *)arg1 forCell:(struct LteCell (^)(void))arg2;
- (void)setLocation_CDMA:(CLLocation *)arg1 forCell:(struct CdmaCell (^)(void))arg2;
- (void)setLocation_SCDMA:(CLLocation *)arg1 forCell:(struct ScdmaCell (^)(void))arg2;
- (void)setLocation_GSM:(CLLocation *)arg1 forCell:(struct Cell (^)(void))arg2;
- (_Bool)syncgetLocation_CELL:(struct CLDaemonLocation *)arg1 forCell:(struct CLCell *)arg2;
- (_Bool)syncgetLocation_LTE:(struct CLDaemonLocation *)arg1 forCell:(struct LteCell *)arg2;
- (_Bool)syncgetLocation_CDMA:(struct CLDaemonLocation *)arg1 forCell:(struct CdmaCell *)arg2;
- (_Bool)syncgetLocation_SCDMA:(struct CLDaemonLocation *)arg1 forCell:(struct ScdmaCell *)arg2;
- (_Bool)syncgetLocation_GSM:(struct CLDaemonLocation *)arg1 forCell:(struct Cell *)arg2;
- (_Bool)syncgetDoSync:(void (^)(struct CLNetworkLocationProvider *))arg1;
- (void)doAsync:(void (^)(struct CLNetworkLocationProvider *))arg1 withReply:(void (^)(void))arg2;
- (void)doAsync:(void (^)(struct CLNetworkLocationProvider *))arg1;
@end

