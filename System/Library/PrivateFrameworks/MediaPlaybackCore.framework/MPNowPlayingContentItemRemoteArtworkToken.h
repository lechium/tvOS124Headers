/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/MPArtworkDataSourceVisualIdenticality.h>

@class NSString, MPExportableArtworkProperties;

@interface MPNowPlayingContentItemRemoteArtworkToken : NSObject <MPArtworkDataSourceVisualIdenticality> {

	NSString* _identifier;
	NSString* _artworkIdentifier;
	MPExportableArtworkProperties* _artworkProperties;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * artworkIdentifier;                                   //@synthesize artworkIdentifier=_artworkIdentifier - In the implementation block
@property (nonatomic,copy,readonly) MPExportableArtworkProperties * artworkProperties;              //@synthesize artworkProperties=_artworkProperties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)artworkIdentifier;
-(MPExportableArtworkProperties *)artworkProperties;
-(id)initWithIdentifier:(id)arg1 artworkProperties:(id)arg2 artworkIdentifier:(id)arg3 ;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringRepresentation;
@end
