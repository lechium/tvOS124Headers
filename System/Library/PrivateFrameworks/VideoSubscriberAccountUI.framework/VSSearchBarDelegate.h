/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
#import <UIKit/UISearchBarDelegate.h>

@class UISearchBar, NSString;

@interface VSSearchBarDelegate : NSObject <UISearchBarDelegate> {

	UISearchBar* _searchBar;
	NSString* _text;

}

@property (nonatomic,copy) NSString * text;                         //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UISearchBar * searchBar;               //@synthesize searchBar=_searchBar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(UISearchBar *)searchBar;
@end

