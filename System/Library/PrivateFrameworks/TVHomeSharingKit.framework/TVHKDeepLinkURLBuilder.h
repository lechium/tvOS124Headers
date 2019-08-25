/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVHKMediaEntityServer, NSString;

@interface TVHKDeepLinkURLBuilder : NSObject {

	TVHKMediaEntityServer* _mediaEntityServer;
	NSString* _mediaServerIdentifierHexString;

}

@property (nonatomic,retain) TVHKMediaEntityServer * mediaEntityServer;              //@synthesize mediaEntityServer=_mediaEntityServer - In the implementation block
@property (nonatomic,retain) NSString * mediaServerIdentifierHexString;              //@synthesize mediaServerIdentifierHexString=_mediaServerIdentifierHexString - In the implementation block
+(void)_appendFieldName:(id)arg1 fieldValue:(id)arg2 toURLQueryString:(id)arg3 ;
+(id)_mediaCategoryTypeStringForMediaItem:(id)arg1 ;
+(id)_mediaItemTypeStringForMediaItem:(id)arg1 ;
+(id)_mediaEntityIdentifierStringForIdentifier:(id)arg1 ;
-(TVHKMediaEntityServer *)mediaEntityServer;
-(void)setMediaEntityServer:(TVHKMediaEntityServer *)arg1 ;
-(id)initWithMediaEntityServer:(id)arg1 ;
-(id)_displayMusicURLForMediaItem:(id)arg1 displayType:(id)arg2 ;
-(id)playURLForMediaItem:(id)arg1 ;
-(id)_URLForMediaItem:(id)arg1 action:(id)arg2 displayType:(id)arg3 ;
-(id)_URLQueryStringForMediaItem:(id)arg1 displayType:(id)arg2 ;
-(NSString *)mediaServerIdentifierHexString;
-(id)displayAlbumArtistURLForMediaItem:(id)arg1 ;
-(id)displayAlbumURLForMediaItem:(id)arg1 ;
-(id)displayURLForMediaItem:(id)arg1 ;
-(void)setMediaServerIdentifierHexString:(NSString *)arg1 ;
-(id)init;
@end

