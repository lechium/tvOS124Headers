/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface SSItemMedia : NSObject {

	long long _duration;
	long long _fullDuration;
	long long _mediaFileSize;
	NSString* _mediaKind;
	BOOL _protected;
	NSURL* _url;

}

@property (nonatomic,readonly) long long fullDurationInMilliseconds;                     //@synthesize fullDuration=_fullDuration - In the implementation block
@property (nonatomic,readonly) long long mediaFileSize;                                  //@synthesize mediaFileSize=_mediaFileSize - In the implementation block
@property (nonatomic,copy) NSString * mediaKind;                                         //@synthesize mediaKind=_mediaKind - In the implementation block
@property (nonatomic,readonly) long long durationInMilliseconds;                         //@synthesize duration=_duration - In the implementation block
@property (getter=isProtectedMedia,nonatomic,readonly) BOOL protectedMedia;              //@synthesize protected=_protected - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                              //@synthesize url=_url - In the implementation block
-(NSString *)mediaKind;
-(long long)fullDurationInMilliseconds;
-(id)initWithStoreOfferDictionary:(id)arg1 ;
-(long long)mediaFileSize;
-(BOOL)isProtectedMedia;
-(void)setMediaKind:(NSString *)arg1 ;
-(long long)durationInMilliseconds;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSURL *)URL;
@end
