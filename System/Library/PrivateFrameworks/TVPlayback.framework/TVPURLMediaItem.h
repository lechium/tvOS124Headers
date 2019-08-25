/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPBaseMediaItem.h>

@class NSURL, NSSet;

@interface TVPURLMediaItem : TVPBaseMediaItem {

	NSURL* _url;
	NSSet* _traits;

}

@property (nonatomic,copy) NSURL * url;                 //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSSet * traits;              //@synthesize traits=_traits - In the implementation block
-(void)setTraits:(NSSet *)arg1 ;
-(id)initWithURL:(id)arg1 traits:(id)arg2 ;
-(id)init;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(NSSet *)traits;
-(BOOL)hasTrait:(id)arg1 ;
-(id)mediaItemURL;
-(BOOL)isEqualToMediaItem:(id)arg1 ;
@end
