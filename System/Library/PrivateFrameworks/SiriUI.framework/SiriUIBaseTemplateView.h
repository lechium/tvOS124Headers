/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <SiriUI/SiriUITemplateView.h>

@protocol SiriUITemplatedView, SiriUITemplateModel;
@class NSString;

@interface SiriUIBaseTemplateView : UIView <SiriUITemplateView> {

	id<SiriUITemplatedView> _templatedSuperview;
	id<SiriUITemplateModel> _dataSource;

}

@property (assign,nonatomic,__weak) id<SiriUITemplateModel> dataSource;                      //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SiriUITemplatedView> templatedSuperview;              //@synthesize templatedSuperview=_templatedSuperview - In the implementation block
-(id)initWithDataSource:(id)arg1 ;
-(double)desiredHeight;
-(void)removeFromTemplatedSuperview;
-(id<SiriUITemplatedView>)templatedSuperview;
-(void)setTemplatedSuperview:(id<SiriUITemplatedView>)arg1 ;
-(void)reloadData;
-(id<SiriUITemplateModel>)dataSource;
-(void)setDataSource:(id<SiriUITemplateModel>)arg1 ;
@end

