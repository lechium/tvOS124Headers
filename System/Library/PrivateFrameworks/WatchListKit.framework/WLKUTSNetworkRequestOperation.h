/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKNetworkRequestOperation.h>

@class NSDictionary, WLKURLRequestProperties;

@interface WLKUTSNetworkRequestOperation : WLKNetworkRequestOperation {

	NSDictionary* _responseDictionary;
	BOOL _didHandleInvalidConfig;
	WLKURLRequestProperties* _requestProperties;

}

@property (nonatomic,retain) WLKURLRequestProperties * requestProperties;              //@synthesize requestProperties=_requestProperties - In the implementation block
@property (assign) BOOL didHandleInvalidConfig;                                        //@synthesize didHandleInvalidConfig=_didHandleInvalidConfig - In the implementation block
-(id)responseDictionary;
-(id)initWithRequestProperties:(id)arg1 ;
-(void)setRequestProperties:(WLKURLRequestProperties *)arg1 ;
-(void)prepareURLRequest:(/*^block*/id)arg1 ;
-(void)processResponse;
-(void)handleResult:(id)arg1 error:(id)arg2 ;
-(BOOL)didHandleInvalidConfig;
-(void)setDidHandleInvalidConfig:(BOOL)arg1 ;
-(WLKURLRequestProperties *)requestProperties;
-(id)init;
-(id)shortDescription;
@end

