/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICURLBag;

@interface ICURLBagCacheEntry : NSObject {

	double _expirationTime;
	ICURLBag* _urlBag;

}

@property (assign,nonatomic) double expirationTime;              //@synthesize expirationTime=_expirationTime - In the implementation block
@property (retain) ICURLBag * urlBag;                            //@synthesize urlBag=_urlBag - In the implementation block
-(double)expirationTime;
-(ICURLBag *)urlBag;
-(id)initWithURLBag:(id)arg1 expirationTime:(double)arg2 ;
-(void)setExpirationTime:(double)arg1 ;
-(void)setUrlBag:(ICURLBag *)arg1 ;
@end
