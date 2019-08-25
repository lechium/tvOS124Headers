/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HFApplicationURLHandling;
@interface HFOpenURLRouter : NSObject {

	id<HFApplicationURLHandling> _applicationURLHandler;

}

@property (assign,nonatomic,__weak) id<HFApplicationURLHandling> applicationURLHandler;              //@synthesize applicationURLHandler=_applicationURLHandler - In the implementation block
+(id)sharedInstance;
-(id<HFApplicationURLHandling>)applicationURLHandler;
-(void)setApplicationURLHandler:(id<HFApplicationURLHandling>)arg1 ;
-(id)openURL:(id)arg1 ;
@end

