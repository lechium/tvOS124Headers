/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSNavigationDocument.h>
@class NSArray;


@protocol IKJSNavigationDocument <JSExport>
@property (nonatomic,retain,readonly) NSArray * documents; 
@required
-(void)pushDocument:(id)arg1 :(id)arg2;
-(void)presentModal:(id)arg1 :(id)arg2;
-(void)insertBeforeDocument:(id)arg1 :(id)arg2 :(id)arg3;
-(void)replaceDocument:(id)arg1 :(id)arg2 :(id)arg3;
-(void)setDocuments:(id)arg1 :(id)arg2;
-(void)popDocument;
-(NSArray *)documents;
-(void)popToDocument:(id)arg1;
-(void)popToRootDocument;
-(void)removeDocument:(id)arg1;
-(void)dismissModal;
-(void)clear;

@end


@protocol IKAppNavigationController;
@class NSArray;

@interface IKJSNavigationDocument : IKJSObject <IKJSNavigationDocument> {

	SCD_Struct_IK10 _delegateSelectors;
	id<IKAppNavigationController> _navigationControllerDelegate;

}

@property (nonatomic,__weak,readonly) id<IKAppNavigationController> navigationControllerDelegate;              //@synthesize navigationControllerDelegate=_navigationControllerDelegate - In the implementation block
@property (nonatomic,retain,readonly) NSArray * documents; 
-(id)initWithAppContext:(id)arg1 navigationController:(id)arg2 ;
-(id<IKAppNavigationController>)navigationControllerDelegate;
-(id)_makeAppDocumentWithDocument:(id)arg1 ;
-(void)pushDocument:(id)arg1 :(id)arg2 ;
-(void)presentModal:(id)arg1 :(id)arg2 ;
-(void)insertBeforeDocument:(id)arg1 :(id)arg2 :(id)arg3 ;
-(void)replaceDocument:(id)arg1 :(id)arg2 :(id)arg3 ;
-(void)setDocuments:(id)arg1 :(id)arg2 ;
-(void)popDocument;
-(NSArray *)documents;
-(void)popToDocument:(id)arg1 ;
-(void)popToRootDocument;
-(void)removeDocument:(id)arg1 ;
-(void)dismissModal;
-(void)clear;
@end
