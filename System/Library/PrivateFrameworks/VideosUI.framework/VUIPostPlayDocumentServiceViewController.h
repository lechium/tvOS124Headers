/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIAppDocumentServiceViewController.h>

@protocol VUIPostPlayControllerDelegate;
@class TVMediaInfo;

@interface VUIPostPlayDocumentServiceViewController : VUIAppDocumentServiceViewController {

	BOOL _delegateRespondsToDocumentCreationStatus;
	BOOL _delegateRespondsToMediaChange;
	BOOL _delegateRespondsToEventOccurred;
	BOOL _delegateRespondsToDocumentUpdate;
	id<VUIPostPlayControllerDelegate> _postPlayDelegate;
	TVMediaInfo* _lastSelectedMediaInfo;

}

@property (nonatomic,retain) TVMediaInfo * lastSelectedMediaInfo;                                    //@synthesize lastSelectedMediaInfo=_lastSelectedMediaInfo - In the implementation block
@property (assign,nonatomic) BOOL delegateRespondsToDocumentCreationStatus;                          //@synthesize delegateRespondsToDocumentCreationStatus=_delegateRespondsToDocumentCreationStatus - In the implementation block
@property (assign,nonatomic) BOOL delegateRespondsToMediaChange;                                     //@synthesize delegateRespondsToMediaChange=_delegateRespondsToMediaChange - In the implementation block
@property (assign,nonatomic) BOOL delegateRespondsToEventOccurred;                                   //@synthesize delegateRespondsToEventOccurred=_delegateRespondsToEventOccurred - In the implementation block
@property (assign,nonatomic) BOOL delegateRespondsToDocumentUpdate;                                  //@synthesize delegateRespondsToDocumentUpdate=_delegateRespondsToDocumentUpdate - In the implementation block
@property (assign,nonatomic,__weak) id<VUIPostPlayControllerDelegate> postPlayDelegate;              //@synthesize postPlayDelegate=_postPlayDelegate - In the implementation block
-(void)setPostPlayDelegate:(id<VUIPostPlayControllerDelegate>)arg1 ;
-(BOOL)handleEvent:(id)arg1 targetResponder:(id)arg2 viewElement:(id)arg3 extraInfo:(id*)arg4 ;
-(void)setDelegateRespondsToMediaChange:(BOOL)arg1 ;
-(void)setDelegateRespondsToDocumentCreationStatus:(BOOL)arg1 ;
-(void)setDelegateRespondsToEventOccurred:(BOOL)arg1 ;
-(void)setDelegateRespondsToDocumentUpdate:(BOOL)arg1 ;
-(id<VUIPostPlayControllerDelegate>)postPlayDelegate;
-(BOOL)delegateRespondsToEventOccurred;
-(void)didCompleteDocumentCreationWithStatus:(long long)arg1 errorDictionary:(id)arg2 ;
-(BOOL)delegateRespondsToDocumentCreationStatus;
-(void)documentDidUpdate:(id)arg1 ;
-(BOOL)delegateRespondsToDocumentUpdate;
-(TVMediaInfo *)lastSelectedMediaInfo;
-(void)setLastSelectedMediaInfo:(TVMediaInfo *)arg1 ;
-(BOOL)delegateRespondsToMediaChange;
@end
