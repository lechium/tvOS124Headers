/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, NSSet, FBSSceneSettings, NSDate, BSSettings;

@interface FBSceneSnapshotContext : NSObject <BSDescriptionProviding> {

	NSString* _sceneID;
	CGRect _frame;
	BOOL _opaque;
	NSSet* _layersToExclude;
	FBSSceneSettings* _settings;
	long long _orientation;
	NSDate* _expirationDate;
	double _scale;
	BSSettings* _clientExtendedData;

}

@property (nonatomic,copy,readonly) NSString * sceneID;                  //@synthesize sceneID=_sceneID - In the implementation block
@property (nonatomic,copy) FBSSceneSettings * settings;                  //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic) CGRect frame;                               //@synthesize frame=_frame - In the implementation block
@property (assign,getter=isOpaque,nonatomic) BOOL opaque;                //@synthesize opaque=_opaque - In the implementation block
@property (assign,nonatomic) double scale;                               //@synthesize scale=_scale - In the implementation block
@property (nonatomic,copy) NSSet * layersToExclude;                      //@synthesize layersToExclude=_layersToExclude - In the implementation block
@property (assign,nonatomic) long long orientation;                      //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                    //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy) BSSettings * clientExtendedData;              //@synthesize clientExtendedData=_clientExtendedData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contextWithFBSContext:(id)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(NSString *)sceneID;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithFBSContext:(id)arg1 ;
-(NSSet *)layersToExclude;
-(BSSettings *)clientExtendedData;
-(void)setClientExtendedData:(BSSettings *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(double)scale;
-(NSString *)description;
-(void)setOpaque:(BOOL)arg1 ;
-(CGRect)frame;
-(void)setScale:(double)arg1 ;
-(BOOL)isOpaque;
-(FBSSceneSettings *)settings;
-(id)initWithScene:(id)arg1 ;
-(long long)orientation;
-(void)setSettings:(FBSSceneSettings *)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(void)setLayersToExclude:(NSSet *)arg1 ;
@end

