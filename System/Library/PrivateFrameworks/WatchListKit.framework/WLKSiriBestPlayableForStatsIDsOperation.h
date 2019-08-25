/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSArray, WLKSiriBestPlayablesResponse;

@interface WLKSiriBestPlayableForStatsIDsOperation : WLKUTSNetworkRequestOperation {

	NSArray* _statsIDs;
	WLKSiriBestPlayablesResponse* _response;

}

@property (nonatomic,copy,readonly) NSArray * statsIDs;                              //@synthesize statsIDs=_statsIDs - In the implementation block
@property (nonatomic,readonly) WLKSiriBestPlayablesResponse * response;              //@synthesize response=_response - In the implementation block
-(void)processResponse;
-(id)initWithStatsIDs:(id)arg1 caller:(id)arg2 ;
-(NSArray *)statsIDs;
-(WLKSiriBestPlayablesResponse *)response;
@end
