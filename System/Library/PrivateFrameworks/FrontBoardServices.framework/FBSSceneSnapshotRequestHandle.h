/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSSceneSnapshotContext, FBSSceneSnapshotRequestAction;

@interface FBSSceneSnapshotRequestHandle : NSObject {

	unsigned long long _type;
	FBSSceneSnapshotContext* _context;
	FBSSceneSnapshotRequestAction* _action;
	BOOL _canceled;

}
+(id)handleForRequestType:(unsigned long long)arg1 context:(id)arg2 ;
-(void)performRequestForScene:(id)arg1 ;
-(id)initWithRequestType:(unsigned long long)arg1 context:(id)arg2 ;
-(void)_clearAction;
-(void)cancelRequest;
@end
