/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface UIWebPDFLinkAction : NSObject {

	int type;
	NSString* title;
	/*^block*/id handler;

}

@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) int type; 
@property (nonatomic,copy) id handler; 
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
@end
