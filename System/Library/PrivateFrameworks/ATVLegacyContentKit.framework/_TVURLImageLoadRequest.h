/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISURLOperation.h>

@protocol TVImageDecrypter;
@class NSURL;

@interface _TVURLImageLoadRequest : ISURLOperation {

	NSURL* _url;
	id<TVImageDecrypter> _decrypter;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain,readonly) NSURL * url;                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,retain,readonly) id<TVImageDecrypter> decrypter;              //@synthesize decrypter=_decrypter - In the implementation block
@property (nonatomic,copy) id completionHandler;                                   //@synthesize completionHandler=_completionHandler - In the implementation block
+(BOOL)_usePrivateCookieStore;
-(id<TVImageDecrypter>)decrypter;
-(id)initWithURL:(id)arg1 headers:(id)arg2 decrypter:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)completionHandler;
-(NSURL *)url;
-(void)setCompletionHandler:(id)arg1 ;
@end

