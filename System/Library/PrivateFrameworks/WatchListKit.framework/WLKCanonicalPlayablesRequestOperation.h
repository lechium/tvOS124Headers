/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString, WLKCanonicalPlayablesResponse;

@interface WLKCanonicalPlayablesRequestOperation : WLKUTSNetworkRequestOperation {

	NSString* _contentID;
	WLKCanonicalPlayablesResponse* _response;

}

@property (nonatomic,copy,readonly) NSString * contentID;                             //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,readonly) WLKCanonicalPlayablesResponse * response;              //@synthesize response=_response - In the implementation block
-(NSString *)contentID;
-(void)processResponse;
-(id)initWithContentID:(id)arg1 profiles:(id)arg2 caller:(id)arg3 ;
-(WLKCanonicalPlayablesResponse *)response;
@end

