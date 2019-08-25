/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, MPAVRoute;

@interface MPCPlayerPath : NSObject <NSCopying, NSSecureCoding> {

	int _pid;
	BOOL _resolved;
	NSString* _bundleID;
	NSString* _playerID;
	void* _mediaRemotePlayerPath;
	MPAVRoute* _route;

}

@property (nonatomic,readonly) void* mediaRemotePlayerPath;                                //@synthesize mediaRemotePlayerPath=_mediaRemotePlayerPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * representedBundleDisplayName; 
@property (nonatomic,copy,readonly) NSString * representedBundleID; 
@property (nonatomic,readonly) MPAVRoute * route;                                          //@synthesize route=_route - In the implementation block
@property (getter=isSystemMusicPath,nonatomic,readonly) BOOL systemMusicPath; 
@property (getter=isResolved,nonatomic,readonly) BOOL resolved;                            //@synthesize resolved=_resolved - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;                                   //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * playerID;                                   //@synthesize playerID=_playerID - In the implementation block
@property (getter=isInProcess,nonatomic,readonly) BOOL inProcess; 
+(id)systemMusicPathWithRoute:(id)arg1 playerID:(id)arg2 ;
+(id)pathWithRoute:(id)arg1 mediaRemotePlayerPath:(void*)arg2 isResolved:(BOOL)arg3 ;
+(id)deviceActivePlayerPath;
+(id)pathWithRoute:(id)arg1 bundleID:(id)arg2 playerID:(id)arg3 ;
+(id)unresolvablePathWithRoute:(id)arg1 bundleID:(id)arg2 playerID:(id)arg3 ;
+(id)pathWithCustomOrigin:(void*)arg1 bundleID:(id)arg2 playerID:(id)arg3 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isResolved;
-(MPAVRoute *)route;
-(NSString *)representedBundleID;
-(NSString *)playerID;
-(BOOL)isInProcess;
-(id)initWithRoute:(id)arg1 bundleID:(id)arg2 playerID:(id)arg3 ;
-(id)initWithRoute:(id)arg1 bundleID:(id)arg2 pid:(int)arg3 playerID:(id)arg4 ;
-(void)resolveWithRouteResolvedHandler:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isSystemMusicPath;
-(NSString *)representedBundleDisplayName;
-(void)resolveWithCompletion:(/*^block*/id)arg1 ;
-(void*)mediaRemotePlayerPath;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleID;
@end

