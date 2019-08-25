/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString, WLKContentPlayResponse;

@interface WLKContentPlayRequestOperation : WLKUTSNetworkRequestOperation {

	NSString* _canonicalID;
	WLKContentPlayResponse* _response;

}

@property (nonatomic,retain) WLKContentPlayResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,copy,readonly) NSString * canonicalID;                  //@synthesize canonicalID=_canonicalID - In the implementation block
-(void)setResponse:(WLKContentPlayResponse *)arg1 ;
-(void)processResponse;
-(id)initWithCanonicalID:(id)arg1 caller:(id)arg2 ;
-(WLKContentPlayResponse *)response;
-(NSString *)canonicalID;
@end

