/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOSimpleTileRequesterOperationDelegate <NSObject>
@required
-(int)checksumMethodForIncomingTileDataWithKey:(const GEOTileKey*)arg1;
-(void)operationFinished:(id)arg1;
-(void)operationFailed:(id)arg1 error:(id)arg2;
-(id)verifyDataIntegrity:(id)arg1 checksumMethod:(int)arg2;

@end

