/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIActionSheetDelegate.h>

@protocol UIDocumentInteractionControllerDelegate;
@class NSURL, NSString, NSArray;

@interface UIDocumentInteractionController : NSObject <UIActionSheetDelegate> {

	id<UIDocumentInteractionControllerDelegate> _delegate;
	NSURL* _URL;
	NSString* _UTI;
	NSString* _name;
	NSArray* _icons;
	id _annotation;
	NSArray* _gestureRecognizers;

}

@property (assign,nonatomic,__weak) id<UIDocumentInteractionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSURL * URL;                                                                        //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * UTI;                                                             //@synthesize UTI=_UTI - In the implementation block
@property (copy) NSString * name;                                                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * icons;                                                        //@synthesize icons=_icons - In the implementation block
@property (nonatomic,retain) id annotation;                                                            //@synthesize annotation=_annotation - In the implementation block
@property (nonatomic,readonly) NSArray * gestureRecognizers;                                           //@synthesize gestureRecognizers=_gestureRecognizers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)interactionControllerWithURL:(id)arg1 ;
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setDelegate:(id<UIDocumentInteractionControllerDelegate>)arg1 ;
-(id<UIDocumentInteractionControllerDelegate>)delegate;
-(NSArray *)gestureRecognizers;
-(BOOL)presentOptionsMenuFromRect:(CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)presentOptionsMenuFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)presentPreviewAnimated:(BOOL)arg1 ;
-(BOOL)presentOpenInMenuFromRect:(CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)presentOpenInMenuFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)dismissPreviewAnimated:(BOOL)arg1 ;
-(void)dismissMenuAnimated:(BOOL)arg1 ;
-(BOOL)sourceIsManaged;
-(void)setSourceIsManaged:(BOOL)arg1 ;
-(void)openDocumentWithDefaultApplication;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(NSString *)UTI;
-(void)setUTI:(NSString *)arg1 ;
-(NSArray *)icons;
-(id)annotation;
-(void)setAnnotation:(id)arg1 ;
@end

