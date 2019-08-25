/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <libobjc.A.dylib/TVOneupViewDataSource.h>
#import <libobjc.A.dylib/TVOneupViewDelegate.h>

@class TVOneupView, NSArray, TVLLegacyJSContext, UIViewController, NSString;

@interface TVLJSFullScreenMediaBrowser : NSObject <TVOneupViewDataSource, TVOneupViewDelegate> {

	TVOneupView* _oneUpView;
	NSArray* _items;
	id _jsInfo;
	TVLLegacyJSContext* _context;
	UIViewController* _oneUpViewController;

}

@property (nonatomic,retain) UIViewController * oneUpViewController;              //@synthesize oneUpViewController=_oneUpViewController - In the implementation block
@property (nonatomic,copy) NSArray * items;                                       //@synthesize items=_items - In the implementation block
@property (retain) id jsInfo;                                                     //@synthesize jsInfo=_jsInfo - In the implementation block
@property (nonatomic,readonly) TVLLegacyJSContext * context;                      //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) TVOneupView * oneUpView;                           //@synthesize oneUpView=_oneUpView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)addConstructorToObject:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 ;
-(long long)numberOfItemsInOneupView:(id)arg1 ;
-(id)oneupView:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2 ;
-(long long)oneupView:(id)arg1 contentModeForItemAtIndex:(unsigned long long)arg2 ;
-(TVOneupView *)oneUpView;
-(void)selectItemAtIndex:(long long)arg1 ;
-(void)setOneUpViewController:(UIViewController *)arg1 ;
-(UIViewController *)oneUpViewController;
-(void)updateItems:(id)arg1 initialSelection:(long long)arg2 ;
-(void)updateItemMetadata:(id)arg1 forPhotoWithID:(id)arg2 ;
-(void)updateItemMetadataLiked:(id)arg1 forPhotoWithID:(id)arg2 ;
-(void)showWithItems:(id)arg1 initialSelection:(long long)arg2 ;
-(id)jsInfo;
-(void)setJsInfo:(id)arg1 ;
-(TVLLegacyJSContext *)context;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)hide;
@end

