/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHKMediaEntityServerOperation.h>

@class TVHKMediaEntityFetchResponse, TVHKMediaEntityFetchRequest;

@interface TVHKFetchMediaEntitiesOperation : TVHKMediaEntityServerOperation {

	TVHKMediaEntityFetchResponse* _response;
	TVHKMediaEntityFetchRequest* _request;

}

@property (nonatomic,retain) TVHKMediaEntityFetchResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,copy) TVHKMediaEntityFetchRequest * request;                  //@synthesize request=_request - In the implementation block
-(void)setRequest:(TVHKMediaEntityFetchRequest *)arg1 ;
-(void)setResponse:(TVHKMediaEntityFetchResponse *)arg1 ;
-(id)initWithMediaEntityServer:(id)arg1 request:(id)arg2 ;
-(id)initWithMediaEntityServer:(id)arg1 ;
-(TVHKMediaEntityFetchRequest *)request;
-(TVHKMediaEntityFetchResponse *)response;
-(void)executionDidBegin;
@end

