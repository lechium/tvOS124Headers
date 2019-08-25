/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, MPCMediaRemoteController, MPCPlayerPath, NSString;

@interface MPCPlayerCommandRequest : NSObject {

	unsigned _command;
	NSDictionary* _options;
	NSDictionary* _userInitiatedOptions;
	MPCMediaRemoteController* _controller;
	MPCPlayerPath* _playerPath;
	NSString* _label;

}

@property (nonatomic,readonly) unsigned command;                                   //@synthesize command=_command - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * options;                        //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSDictionary * userInitiatedOptions;                    //@synthesize userInitiatedOptions=_userInitiatedOptions - In the implementation block
@property (nonatomic,readonly) MPCMediaRemoteController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,readonly) MPCPlayerPath * playerPath;                         //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,copy) NSString * label;                                       //@synthesize label=_label - In the implementation block
-(id)initWithMediaRemoteCommand:(unsigned)arg1 options:(id)arg2 response:(id)arg3 ;
-(void)setCommandOptionValue:(id)arg1 forKey:(id)arg2 ;
-(MPCPlayerPath *)playerPath;
-(id)initWithMediaRemoteCommand:(unsigned)arg1 options:(id)arg2 playerPath:(id)arg3 label:(id)arg4 ;
-(NSDictionary *)userInitiatedOptions;
-(void)setUserInitiatedOptions:(NSDictionary *)arg1 ;
-(unsigned)command;
-(NSDictionary *)options;
-(MPCMediaRemoteController *)controller;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
@end

