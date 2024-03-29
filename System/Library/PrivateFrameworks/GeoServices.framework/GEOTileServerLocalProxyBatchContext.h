/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOTileKeyList, GEOTileRequester;

@interface GEOTileServerLocalProxyBatchContext : NSObject {

	GEOTileKeyList* _fullList;
	GEOTileKeyList* _interestList;
	GEOTileKeyList* _networkList;
	GEOTileKeyList* _pendingNetworkList;
	GEOTileKeyList* _cacheMissNoDataList;
	GEOTileKeyList* _cacheMissStaleDataList;
	unsigned char _loadReason;
	GEOTileRequester* _tileRequester;

}

@property (nonatomic,retain) GEOTileKeyList * fullList;                            //@synthesize fullList=_fullList - In the implementation block
@property (nonatomic,retain) GEOTileKeyList * interestList;                        //@synthesize interestList=_interestList - In the implementation block
@property (nonatomic,retain) GEOTileKeyList * networkList;                         //@synthesize networkList=_networkList - In the implementation block
@property (nonatomic,retain) GEOTileKeyList * pendingNetworkList;                  //@synthesize pendingNetworkList=_pendingNetworkList - In the implementation block
@property (nonatomic,retain) GEOTileKeyList * cacheMissNoDataList;                 //@synthesize cacheMissNoDataList=_cacheMissNoDataList - In the implementation block
@property (nonatomic,retain) GEOTileKeyList * cacheMissStaleDataList;              //@synthesize cacheMissStaleDataList=_cacheMissStaleDataList - In the implementation block
@property (assign,nonatomic) unsigned char loadReason;                             //@synthesize loadReason=_loadReason - In the implementation block
@property (nonatomic,retain) GEOTileRequester * tileRequester;                     //@synthesize tileRequester=_tileRequester - In the implementation block
-(unsigned char)loadReason;
-(GEOTileKeyList *)interestList;
-(GEOTileRequester *)tileRequester;
-(GEOTileKeyList *)pendingNetworkList;
-(void)setTileRequester:(GEOTileRequester *)arg1 ;
-(void)setFullList:(GEOTileKeyList *)arg1 ;
-(void)setInterestList:(GEOTileKeyList *)arg1 ;
-(void)setCacheMissNoDataList:(GEOTileKeyList *)arg1 ;
-(void)setCacheMissStaleDataList:(GEOTileKeyList *)arg1 ;
-(void)setNetworkList:(GEOTileKeyList *)arg1 ;
-(void)setLoadReason:(unsigned char)arg1 ;
-(void)setPendingNetworkList:(GEOTileKeyList *)arg1 ;
-(GEOTileKeyList *)cacheMissStaleDataList;
-(GEOTileKeyList *)cacheMissNoDataList;
-(GEOTileKeyList *)networkList;
-(GEOTileKeyList *)fullList;
@end

