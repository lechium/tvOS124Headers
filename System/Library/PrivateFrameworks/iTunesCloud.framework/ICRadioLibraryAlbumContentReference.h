/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <iTunesCloud/ICRadioContentReference.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface ICRadioLibraryAlbumContentReference : ICRadioContentReference <NSCopying, NSSecureCoding> {

	NSString* _albumName;
	NSNumber* _representativeCloudIdentifier;
	NSNumber* _storeIdentifier;

}

@property (nonatomic,copy) NSString * albumName;                                  //@synthesize albumName=_albumName - In the implementation block
@property (nonatomic,copy) NSNumber * representativeCloudIdentifier;              //@synthesize representativeCloudIdentifier=_representativeCloudIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * storeIdentifier;                            //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setAlbumName:(NSString *)arg1 ;
-(NSString *)albumName;
-(id)matchDictionary;
-(long long)contentType;
-(void)setRepresentativeCloudIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)representativeCloudIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)storeIdentifier;
-(void)setStoreIdentifier:(NSNumber *)arg1 ;
@end

