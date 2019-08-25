/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGraphicsRendererContext.h>

@interface UIGraphicsPDFRendererContext : UIGraphicsRendererContext {

	BOOL _inPage;
	CGRect _documentBounds;
	CGRect _pageBounds;

}

@property (assign) CGRect documentBounds;                            //@synthesize documentBounds=_documentBounds - In the implementation block
@property (assign) CGRect pageBounds;                                //@synthesize pageBounds=_pageBounds - In the implementation block
@property (assign) BOOL inPage;                                      //@synthesize inPage=_inPage - In the implementation block
@property (nonatomic,readonly) CGRect pdfContextBounds; 
-(CGRect)documentBounds;
-(CGRect)pageBounds;
-(BOOL)inPage;
-(void)updateAuxInfo:(id)arg1 ;
-(void)beginPageWithBounds:(CGRect)arg1 pageInfo:(id)arg2 ;
-(void)setPageBounds:(CGRect)arg1 ;
-(void)setInPage:(BOOL)arg1 ;
-(void)beginPage;
-(CGRect)pdfContextBounds;
-(void)setURL:(id)arg1 forRect:(CGRect)arg2 ;
-(void)addDestinationWithName:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)setDestinationWithName:(id)arg1 forRect:(CGRect)arg2 ;
-(void)setDocumentBounds:(CGRect)arg1 ;
@end

