/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKRequest.h>

@class NSDictionary;

@interface WLKSiriSearchRequest : WLKRequest {

	NSDictionary* _query;

}

@property (nonatomic,copy,readonly) NSDictionary * query;              //@synthesize query=_query - In the implementation block
-(id)initWithQuery:(id)arg1 ;
-(void)makeRequestWithCompletion:(/*^block*/id)arg1 ;
-(NSDictionary *)query;
@end

