//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSError, SDNetworkOperation, _TtC8sharingd17SDAirDropListener;

@protocol _TtP8sharingd25SDAirDropListenerDelegate_
- (void)listener:(_TtC8sharingd17SDAirDropListener *)arg1 informationDidChange:(NSDictionary *)arg2;
- (void)listener:(_TtC8sharingd17SDAirDropListener *)arg1 didReceiveNewRequest:(SDNetworkOperation *)arg2;
- (void)listener:(_TtC8sharingd17SDAirDropListener *)arg1 didReceiveError:(NSError *)arg2;
@end

