/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, UIViewController;

@interface UIStoryboardSegueTemplate : NSObject <NSCoding> {

	NSString* _identifier;
	NSString* _segueClassName;
	UIViewController* _viewController;
	NSString* _destinationViewControllerIdentifier;
	BOOL _performOnViewLoad;
	BOOL _animates;

}

@property (assign,nonatomic) BOOL performOnViewLoad;                                //@synthesize performOnViewLoad=_performOnViewLoad - In the implementation block
@property (assign,nonatomic) BOOL animates;                                         //@synthesize animates=_animates - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(id)init;
-(NSString *)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIViewController *)viewController;
-(void)setViewController:(UIViewController *)arg1 ;
-(id)perform:(id)arg1 ;
-(BOOL)performOnViewLoad;
-(id)_perform:(id)arg1 ;
-(/*^block*/id)newDefaultPrepareHandlerForSegue:(id)arg1 ;
-(/*^block*/id)newDefaultPerformHandlerForSegue:(id)arg1 ;
-(id)segueWithDestinationViewController:(id)arg1 ;
-(id)_performWithDestinationViewController:(id)arg1 sender:(id)arg2 ;
-(id)instantiateOrFindDestinationViewControllerWithSender:(id)arg1 ;
-(BOOL)animates;
-(void)setPerformOnViewLoad:(BOOL)arg1 ;
-(void)setAnimates:(BOOL)arg1 ;
@end

