/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSPlaylist.h>

@protocol IKJSPlaylist <JSExport>
@property (nonatomic,readonly) unsigned long long length; 
@property (assign,nonatomic) long long endAction; 
@property (assign,nonatomic) long long repeatMode; 
@required
-(void)push:(id)arg1;
-(id)splice:(long long)arg1 :(long long)arg2 :(id)arg3;
-(long long)repeatMode;
-(void)setRepeatMode:(long long)arg1;
-(long long)endAction;
-(void)setEndAction:(long long)arg1;
-(unsigned long long)length;
-(id)init;
-(id)pop;
-(id)item:(long long)arg1;

@end


@class IKAppPlaylistBridge;

@interface IKJSPlaylist : IKJSObject <IKJSPlaylist> {

	IKAppPlaylistBridge* _bridge;

}

@property (nonatomic,readonly) IKAppPlaylistBridge * bridge;              //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) unsigned long long length; 
@property (assign,nonatomic) long long endAction; 
@property (assign,nonatomic) long long repeatMode; 
-(void)push:(id)arg1 ;
-(id)splice:(long long)arg1 :(long long)arg2 :(id)arg3 ;
-(long long)repeatMode;
-(void)setRepeatMode:(long long)arg1 ;
-(IKAppPlaylistBridge *)bridge;
-(long long)endAction;
-(void)setEndAction:(long long)arg1 ;
-(unsigned long long)length;
-(id)init;
-(void)dealloc;
-(id)pop;
-(id)item:(long long)arg1 ;
@end

