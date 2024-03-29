/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBUISceneManager.h>

@protocol FBUISceneManager <NSObject>
@required
-(id)workspace:(id)arg1 sceneIdentifierForName:(id)arg2;
-(void)registerSceneWorkspace:(id)arg1;
-(void)invalidateSceneWorkspace:(id)arg1;
-(void)workspace:(id)arg1 createSceneWithName:(id)arg2 specification:(id)arg3;
-(void)workspace:(id)arg1 destroySceneWithIdentifier:(id)arg2;

@end


@class NSMutableDictionary, FBSDisplayMonitor, NSString;

@interface FBUISceneManager : NSObject <FBUISceneManager> {

	NSMutableDictionary* _workspacesByID;
	NSMutableDictionary* _sceneHostsByID;
	FBSDisplayMonitor* _displayMonitor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)workspace:(id)arg1 sceneIdentifierForName:(id)arg2 ;
-(void)registerSceneWorkspace:(id)arg1 ;
-(void)invalidateSceneWorkspace:(id)arg1 ;
-(void)workspace:(id)arg1 createSceneWithName:(id)arg2 specification:(id)arg3 ;
-(void)workspace:(id)arg1 destroySceneWithIdentifier:(id)arg2 ;
-(id)init;
@end

