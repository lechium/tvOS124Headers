/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppleIDSSOAuthentication.framework/AppleIDSSOAuthentication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleIDSSOAuthentication/AppleIDSSOAuthentication-Structs.h>
#import <AppleIDSSOAuthentication/AIDAServiceContext.h>

@class NSDictionary, UIViewController;

@interface AIDAMutableServiceContext : AIDAServiceContext

@property (nonatomic,copy) NSDictionary * authenticationResults; 
@property (assign,nonatomic) BOOL shouldForceOperation; 
@property (nonatomic,retain) UIViewController * viewController; 
-(void)setAuthenticationResults:(NSDictionary *)arg1 ;
-(void)setShouldForceOperation:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end

