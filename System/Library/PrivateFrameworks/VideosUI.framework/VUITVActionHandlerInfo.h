/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VUITVButtonHandler;
@interface VUITVActionHandlerInfo : NSObject {

	id<VUITVButtonHandler> _handler;
	/*^block*/id _completion;

}

@property (nonatomic,retain) id<VUITVButtonHandler> handler;              //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy) id completion;                                 //@synthesize completion=_completion - In the implementation block
-(id<VUITVButtonHandler>)handler;
-(void)setHandler:(id<VUITVButtonHandler>)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
@end

