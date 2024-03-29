/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ICLibraryAuthServiceClientTokenIdentifier;

@interface ICLibraryAuthServiceClientTokenResult : NSObject <NSCopying> {

	NSString* _token;
	long long _generatedAtMillis;
	long long _timeToLiveMillis;
	long long _lifespanMillis;
	ICLibraryAuthServiceClientTokenIdentifier* _tokenIdentitifer;

}

@property (nonatomic,copy,readonly) NSString * token;                                                          //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) long long generatedAtMillis;                                                    //@synthesize generatedAtMillis=_generatedAtMillis - In the implementation block
@property (nonatomic,readonly) long long timeToLiveMillis;                                                     //@synthesize timeToLiveMillis=_timeToLiveMillis - In the implementation block
@property (nonatomic,readonly) long long lifespanMillis;                                                       //@synthesize lifespanMillis=_lifespanMillis - In the implementation block
@property (nonatomic,copy,readonly) ICLibraryAuthServiceClientTokenIdentifier * tokenIdentitifer;              //@synthesize tokenIdentitifer=_tokenIdentitifer - In the implementation block
-(long long)generatedAtMillis;
-(long long)lifespanMillis;
-(ICLibraryAuthServiceClientTokenIdentifier *)tokenIdentitifer;
-(long long)timeToLiveMillis;
-(id)initWithResponseDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)token;
@end

