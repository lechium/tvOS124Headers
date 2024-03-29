/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIColor, UIImage;

@interface UIContextualAction : NSObject {

	BOOL _forcesFallbackBackgroundColor;
	long long _style;
	/*^block*/id _handler;
	NSString* _title;
	UIColor* _backgroundColor;
	UIImage* _image;
	/*^block*/id _completionHandler;
	/*^block*/id _preHandler;

}

@property (nonatomic,copy) id completionHandler;                              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id handler;                                        //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) BOOL forcesFallbackBackgroundColor;              //@synthesize forcesFallbackBackgroundColor=_forcesFallbackBackgroundColor - In the implementation block
@property (nonatomic,readonly) BOOL isDestructive; 
@property (nonatomic,copy) id preHandler;                                     //@synthesize preHandler=_preHandler - In the implementation block
@property (nonatomic,readonly) long long style;                               //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;                         //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) UIImage * image;                                   //@synthesize image=_image - In the implementation block
+(id)contextualActionWithStyle:(long long)arg1 title:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)description;
-(void)setTitle:(NSString *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(NSString *)title;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(long long)style;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(UIColor *)backgroundColor;
-(void)cancel;
-(id)completionHandler;
-(BOOL)isDestructive;
-(void)setCompletionHandler:(id)arg1 ;
-(id)preHandler;
-(void)_completeWithResult:(BOOL)arg1 ;
-(void)executePreHandlerWithView:(id)arg1 ;
-(void)executeHandlerWithView:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)forcesFallbackBackgroundColor;
-(void)setForcesFallbackBackgroundColor:(BOOL)arg1 ;
-(void)setPreHandler:(id)arg1 ;
@end

