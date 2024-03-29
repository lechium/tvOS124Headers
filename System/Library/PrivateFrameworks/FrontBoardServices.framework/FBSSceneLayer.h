/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCCoding.h>

@protocol FBSSceneLayerDelegate;
@class FBSScene, CAContext, NSString;

@interface FBSSceneLayer : NSObject <BSXPCCoding> {

	FBSScene* _scene;
	CAContext* _context;
	unsigned _identifier;
	double _level;
	long long _alignment;
	id<FBSSceneLayerDelegate> _delegate;
	BOOL _shouldObserveUpdates;

}

@property (assign,nonatomic,__weak) FBSScene * scene;                                //@synthesize scene=_scene - In the implementation block
@property (assign,nonatomic,__weak) id<FBSSceneLayerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long alignment;                                    //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,readonly) BOOL shouldObserveUpdates;                            //@synthesize shouldObserveUpdates=_shouldObserveUpdates - In the implementation block
@property (assign,nonatomic) double level;                                           //@synthesize level=_level - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_initWithLevel:(double)arg1 context:(id)arg2 ;
-(void)_setLevel:(double)arg1 fromObserver:(BOOL)arg2 ;
-(BOOL)shouldObserveUpdates;
-(void)setScene:(FBSScene *)arg1 ;
-(void)_synchronize:(/*^block*/id)arg1 ;
-(BOOL)isCAContextLayer;
-(BOOL)isExternalSceneLayer;
-(void)_updateProperties;
-(long long)alignment;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<FBSSceneLayerDelegate>)arg1 ;
-(id<FBSSceneLayerDelegate>)delegate;
-(void)setAlignment:(long long)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setLevel:(double)arg1 ;
-(FBSScene *)scene;
-(double)level;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
@end

