/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIWebFindOnPageHighlighter.h>

@protocol UIWebFindOnPageHighlighterDelegate;
@class NSString, NSMutableArray, NSArray, UIView, UIWebBrowserView, UIWebPDFViewHandler;

@interface UIWebBrowserFindOnPageHighlighter : NSObject <UIWebFindOnPageHighlighter> {

	NSMutableArray* _highlightBubbleViews;
	NSArray* _pdfHighlightViews;
	UIView* _highlightHostView;
	UIWebBrowserView* _browserView;
	UIWebPDFViewHandler* _pdfHandler;
	BOOL _zoomToHighlightSelection;
	id<UIWebFindOnPageHighlighterDelegate> _delegate;
	NSString* _searchText;
	unsigned long long _numberOfMatches;
	unsigned long long _highlightedMatchIndex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * searchText;                                 //@synthesize searchText=_searchText - In the implementation block
@property (assign,nonatomic) id<UIWebFindOnPageHighlighterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfMatches;                         //@synthesize numberOfMatches=_numberOfMatches - In the implementation block
@property (nonatomic,readonly) unsigned long long highlightedMatchIndex;                   //@synthesize highlightedMatchIndex=_highlightedMatchIndex - In the implementation block
+(BOOL)expandedRectsWouldIntersect:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<UIWebFindOnPageHighlighterDelegate>)arg1 ;
-(id<UIWebFindOnPageHighlighterDelegate>)delegate;
-(NSString *)searchText;
-(void)_commonInitialize;
-(void)clearBrowserView;
-(void)_clearHighlightViews;
-(void)_addContentViewAtIndex:(unsigned long long)arg1 withRect:(CGRect)arg2 ;
-(void)_setSelectionRect:(CGRect)arg1 textRects:(id)arg2 contentImage:(CGImageRef)arg3 contentViews:(id)arg4 wobble:(BOOL)arg5 ;
-(void)setSelectionRect:(CGRect)arg1 textRects:(id)arg2 contentImage:(CGImageRef)arg3 wobble:(BOOL)arg4 ;
-(BOOL)updateHighlightBubbleWobble:(BOOL)arg1 ;
-(unsigned long long)findOnPageOptions;
-(BOOL)_updateHighlightedMatchIndex:(BOOL)arg1 ;
-(id)_currentPDFSearchResult;
-(void)_highlightFindOnPageMatchForPDF:(BOOL)arg1 withPDFHandler:(id)arg2 ;
-(BOOL)_highlightSelection;
-(void)_highlightFindOnPageMatch:(BOOL)arg1 ;
-(void)setSearchText:(id)arg1 matchLimit:(unsigned long long)arg2 ;
-(void)setSelectionRect:(CGRect)arg1 textRects:(id)arg2 contentViews:(id)arg3 wobble:(BOOL)arg4 ;
-(void)highlightNextMatch;
-(void)highlightPreviousMatch;
-(unsigned long long)numberOfMatches;
-(unsigned long long)highlightedMatchIndex;
-(id)initWithBrowserView:(id)arg1 ;
-(id)initWithPDFViewHandler:(id)arg1 ;
-(void)searchDidBegin:(id)arg1 ;
-(void)searchDidTimeOut:(id)arg1 ;
-(void)searchWasCancelled:(id)arg1 ;
-(void)searchLimitHit:(id)arg1 ;
-(void)searchDidFinish:(id)arg1 ;
-(void)search:(id)arg1 hasPartialResults:(id)arg2 ;
@end

