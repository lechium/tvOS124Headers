/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPMediaLibrary, NSString;

@interface MPMediaLibraryConnectionAssertion : NSObject {

	MPMediaLibrary* _library;
	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(id)_initWithMediaLibrary:(id)arg1 identifier:(id)arg2 ;
-(void)dealloc;
-(NSString *)identifier;
-(id)description;
@end

