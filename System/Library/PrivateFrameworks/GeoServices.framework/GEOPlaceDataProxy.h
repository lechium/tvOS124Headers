/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOPlaceDataProxy <NSObject>
@required
-(void)cancelRequest:(id)arg1;
-(void)requestIdentifiers:(id)arg1 resultProviderID:(int)arg2 traits:(id)arg3 options:(unsigned long long)arg4 auditToken:(id)arg5 requesterHandler:(/*^block*/id)arg6;
-(void)requestComponentsFromNetwork:(id)arg1 identifier:(id)arg2 resultProviderID:(int)arg3 traits:(id)arg4 auditToken:(id)arg5 requesterHandler:(/*^block*/id)arg6;
-(void)requestPhoneNumbers:(id)arg1 allowCellularDataForLookup:(BOOL)arg2 traits:(id)arg3 auditToken:(id)arg4 requesterHandler:(/*^block*/id)arg5;
-(void)fetchAllCacheEntriesWithRequesterHandler:(/*^block*/id)arg1;
-(void)trackPlaceData:(id)arg1;
-(void)performPlaceDataRequest:(id)arg1 traits:(id)arg2 cachePolicy:(unsigned long long)arg3 timeout:(double)arg4 auditToken:(id)arg5 networkActivity:(/*^block*/id)arg6 requesterHandler:(/*^block*/id)arg7;
-(void)calculateFreeableSpaceWithHandler:(/*^block*/id)arg1;
-(void)shrinkBySize:(unsigned long long)arg1 finished:(/*^block*/id)arg2;
-(void)clearCache;

@end

