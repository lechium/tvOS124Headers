/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <FrontBoardServices/FBSSceneClientSettings.h>

@class NSSet, NSString;

@interface FBSMutableSceneClientSettings : FBSSceneClientSettings

@property (assign,nonatomic) double preferredLevel; 
@property (assign,nonatomic) long long preferredInterfaceOrientation; 
@property (nonatomic,copy) NSSet * occlusions; 
@property (nonatomic,copy) NSString * preferredSceneHostIdentifier; 
+(BOOL)_isMutable;
-(void)setPreferredLevel:(double)arg1 ;
-(void)setPreferredInterfaceOrientation:(long long)arg1 ;
-(void)setPreferredSceneHostIdentifier:(NSString *)arg1 ;
-(void)setOcclusions:(NSSet *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)otherSettings;
@end
