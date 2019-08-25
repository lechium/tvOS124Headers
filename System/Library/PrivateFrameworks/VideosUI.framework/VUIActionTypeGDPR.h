/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIAction.h>

@class NSDictionary, IKAppContext;

@interface VUIActionTypeGDPR : VUIAction {

	NSDictionary* _contextData;
	IKAppContext* _appContext;

}

@property (nonatomic,retain) NSDictionary * contextData;                    //@synthesize contextData=_contextData - In the implementation block
@property (assign,nonatomic,__weak) IKAppContext * appContext;              //@synthesize appContext=_appContext - In the implementation block
-(NSDictionary *)contextData;
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(IKAppContext *)appContext;
-(id)initWithContextData:(id)arg1 appContext:(id)arg2 ;
-(void)setAppContext:(IKAppContext *)arg1 ;
-(void)setContextData:(NSDictionary *)arg1 ;
@end
